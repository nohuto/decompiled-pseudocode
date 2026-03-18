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

__int64 NtInitializeRegistry()
{
  unsigned __int16 v0; // r9
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)v1 )
  {
    if ( v0 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v1) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v0, v1);
    }
  }
  else if ( (unsigned __int16)(v0 - 4096) > 0x3E7u )
  {
    if ( v0 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v0 < 2u )
    {
      CmCompleteRegistryInitialization(v0);
    }
  }
  else
  {
    CmpAcceptBoot(v0);
  }
  CmCleanupThreadInfo(v4);
  return v2;
}
