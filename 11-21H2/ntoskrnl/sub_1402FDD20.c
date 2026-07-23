/*
 * XREFs of sub_1402FDD20 @ 0x1402FDD20
 * Callers:
 *     sub_1402155C8 @ 0x1402155C8 (sub_1402155C8.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_140215774 @ 0x140215774 (sub_140215774.c)
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_14027B6A4 @ 0x14027B6A4 (sub_14027B6A4.c)
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_1403AD0A8 @ 0x1403AD0A8 (sub_1403AD0A8.c)
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_140592BEC @ 0x140592BEC (sub_140592BEC.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     sub_14075F194 @ 0x14075F194 (sub_14075F194.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140760730 @ 0x140760730 (sub_140760730.c)
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     sub_140761128 @ 0x140761128 (sub_140761128.c)
 *     sub_14080F6C8 @ 0x14080F6C8 (sub_14080F6C8.c)
 *     sub_14081B420 @ 0x14081B420 (sub_14081B420.c)
 *     sub_14082A974 @ 0x14082A974 (sub_14082A974.c)
 *     sub_14082B6F0 @ 0x14082B6F0 (sub_14082B6F0.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 *     sub_140B05620 @ 0x140B05620 (sub_140B05620.c)
 *     sub_140B07074 @ 0x140B07074 (sub_140B07074.c)
 *     sub_140B1A054 @ 0x140B1A054 (sub_140B1A054.c)
 *     sub_140B1A80C @ 0x140B1A80C (sub_140B1A80C.c)
 *     sub_140B21BAC @ 0x140B21BAC (sub_140B21BAC.c)
 *     sub_140B2FE74 @ 0x140B2FE74 (sub_140B2FE74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402FDD20(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8 * ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
