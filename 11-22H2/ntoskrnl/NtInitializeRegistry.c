/*
 * XREFs of NtInitializeRegistry @ 0x1407E91B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     ZwInitializeRegistry @ 0x14041C780 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x1407E9258 (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x140854EE0 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x140A1AEB8 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  USHORT v1; // r9
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( v1 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v1);
    }
  }
  else if ( (unsigned __int16)(v1 - 4096) > 0x3E7u )
  {
    if ( v1 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v1 < 2u )
    {
      CmCompleteRegistryInitialization(v1);
    }
  }
  else
  {
    CmpAcceptBoot(v1);
  }
  CmCleanupThreadInfo(v5);
  return v3;
}
