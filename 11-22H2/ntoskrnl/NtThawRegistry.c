/*
 * XREFs of NtThawRegistry @ 0x140A0F1B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 */

NTSTATUS NtThawRegistry(void)
{
  NTSTATUS v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0LL;
  memset(v3, 0, sizeof(v3));
  CmpInitializeThreadInfo((__int64)&v2);
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess(v3);
    v0 = CmThawRegistry();
    CmpDetachFromRegistryProcess(v3);
  }
  else
  {
    v0 = -1073741727;
  }
  CmCleanupThreadInfo((__int64 *)&v2);
  return v0;
}
