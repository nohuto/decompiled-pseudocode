/*
 * XREFs of NtThawRegistry @ 0x14090FC50
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 NtThawRegistry()
{
  unsigned int v0; // ebx
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
