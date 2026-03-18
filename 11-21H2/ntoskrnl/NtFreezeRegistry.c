/*
 * XREFs of NtFreezeRegistry @ 0x14090E7A0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x140918C40 (CmFreezeRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  CmpInitializeThreadInfo((__int64)&v4);
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess(v5);
      v2 = CmFreezeRegistry(a1);
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
