/*
 * XREFs of sub_180043324 @ 0x180043324
 * Callers:
 *     sub_18003F590 @ 0x18003F590 (sub_18003F590.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180040BEC @ 0x180040BEC (sub_180040BEC.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180043324(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 i; // rbx
  _QWORD *v6; // rbp
  _QWORD *j; // rsi
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  sub_1800436D4(a1);
  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v9 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  if ( sub_1800122C0(&v9) )
  {
    for ( i = a1; i; i = sub_180040BEC(a1, i) )
    {
      sub_180043668(i);
      v6 = *(_QWORD **)(i + 384);
      for ( j = *(_QWORD **)(i + 376); j != v6; j += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j);
      *(_BYTE *)(i + 104) = 1;
    }
  }
  return sub_180010910((__int64)&v9);
}
