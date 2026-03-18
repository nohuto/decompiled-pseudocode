/*
 * XREFs of NtFreezeRegistry @ 0x140A0D800
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
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
