/*
 * XREFs of PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8
 * Callers:
 *     PoUserShutdownCancelled @ 0x140682290 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1406822C0 (PoUserShutdownInitiated.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PpmEndHighPerfRequest @ 0x14036EC90 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036F114 (PpmBeginHighPerfRequest.c)
 *     Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x1404114D0 (Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PdcTaskClientRequest @ 0x140682428 (PdcTaskClientRequest.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopSwitchUpdateUserShutdownScenarioState(int a1, char a2)
{
  int v3; // ebx
  int v4; // edi
  char v5; // bl
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = a1;
  PopAcquirePolicyLock(a1);
  if ( PopUserShutdownScenarioTargetState != v3 )
  {
    PopUserShutdownScenarioTargetState = v3;
    PopUserShutdownScenarioUserInitiated = a2;
    if ( (PopUserShutdownScenarioCurrentState & 0xFFFFFFFD) != 0 && PopUserShutdownScenarioCurrentState != v3 )
    {
      do
      {
        v4 = v3;
        v5 = PopUserShutdownScenarioUserInitiated;
        PopUserShutdownScenarioCurrentState = v4 - 1;
        PopReleasePolicyLock();
        v6 = v4 - 1;
        if ( v4 == 1 )
        {
          Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage();
          PopQueueWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, DelayedWorkQueue);
          PopBsdShutdownInProgress = 0;
          if ( qword_140C6AF20 )
          {
            LOBYTE(v8) = v5;
            qword_140C6AF20(v8);
          }
          if ( PopUserShutdownTaskClient )
            PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
          PpmEndHighPerfRequest(3);
        }
        else if ( v4 == 3 )
        {
          PopTransitionCheckpoint(7LL);
          PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
          PopBsdShutdownInProgress = 1;
          if ( qword_140C6AF18 )
            qword_140C6AF18();
          if ( PopUserShutdownTaskClient )
          {
            LOBYTE(v7) = 1;
            PdcTaskClientRequest(PopUserShutdownTaskClient, v7);
          }
          PpmBeginHighPerfRequest();
          Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage();
        }
        PopAcquirePolicyLock(v6);
        v3 = PopUserShutdownScenarioTargetState;
        PopUserShutdownScenarioCurrentState = v4;
      }
      while ( v4 != PopUserShutdownScenarioTargetState );
    }
  }
  return PopReleasePolicyLock();
}
