/*
 * XREFs of NtFreezeRegistry @ 0x140A0D8B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x140A133B0 (CmFreezeRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  NTSTATUS v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  CmpInitializeThreadInfo((__int64)&v4);
  if ( TimeOutInSeconds <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess(v5);
      v2 = CmFreezeRegistry(TimeOutInSeconds);
      CmpDetachFromRegistryProcess(v5);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  CmCleanupThreadInfo((__int64 *)&v4);
  return v2;
}
