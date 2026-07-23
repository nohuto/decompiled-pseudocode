/*
 * XREFs of SmProcessQueryStoreStats @ 0x1408A6E74
 * Callers:
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1408A7044 (EtwpLogMemInfoWs.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x1405C2F50 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(struct _EPROCESS *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // r9d
  __int64 RegionSize; // r10
  _ST_DATA_MGR_STATS::$94C4BE97FD0F81C7851F3B6009F5EE10 *Space; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 RegionsInUse; // rax
  struct _ST_STATS v13; // [rsp+20h] [rbp-628h] BYREF

  memset(&v13, 0, sizeof(v13));
  v6 = SmpProcessQueryStoreStats(a1, &v13);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      RegionSize = v13.Basic.RegionSize;
      Space = v13.Basic.UserData.Space;
      v9 = 0LL;
      v10 = 8LL;
      do
      {
        RegionsInUse = Space->RegionsInUse;
        ++Space;
        v9 += RegionSize * RegionsInUse;
        *a2 = v9;
        --v10;
      }
      while ( v10 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v13.Basic.UserData.PagesStored << 12;
  }
  return (unsigned int)v6;
}
