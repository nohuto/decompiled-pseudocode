/*
 * XREFs of SmQueryStoreCommitUsage @ 0x1405CA0C0
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1406197C8 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x1405C3430 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 */

__int64 __fastcall SmQueryStoreCommitUsage(struct _EPROCESS *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _ST_DATA_MGR_STATS::$94C4BE97FD0F81C7851F3B6009F5EE10 *Space; // rdx
  __int64 v7; // r8
  __int64 RegionsInUse; // rax
  _ST_STATS v9; // [rsp+20h] [rbp-618h] BYREF

  memset(&v9, 0, sizeof(v9));
  result = SmpProcessQueryStoreStats(a1, &v9);
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    Space = v9.Basic.UserData.Space;
    v7 = 8LL;
    do
    {
      RegionsInUse = Space->RegionsInUse;
      ++Space;
      v5 += RegionsInUse;
      --v7;
    }
    while ( v7 );
    *a2 = v5 * v9.Basic.RegionSize;
    return 0LL;
  }
  return result;
}
