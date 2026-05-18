/*
 * XREFs of sub_1800E77D8 @ 0x1800E77D8
 * Callers:
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 *     sub_1800D9F90 @ 0x1800D9F90 (sub_1800D9F90.c)
 *     sub_1800DF530 @ 0x1800DF530 (sub_1800DF530.c)
 *     sub_1800E75E0 @ 0x1800E75E0 (sub_1800E75E0.c)
 *     sub_1800F0670 @ 0x1800F0670 (sub_1800F0670.c)
 *     sub_1800F0870 @ 0x1800F0870 (sub_1800F0870.c)
 *     sub_1800F09B0 @ 0x1800F09B0 (sub_1800F09B0.c)
 *     sub_1800F0C10 @ 0x1800F0C10 (sub_1800F0C10.c)
 *     sub_1800F1C20 @ 0x1800F1C20 (sub_1800F1C20.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800E77D8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v9 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_18002C7C4(v9 + 24);
  sub_180010910((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 144);
  *a2 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return a2;
}
