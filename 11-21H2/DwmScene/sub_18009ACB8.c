/*
 * XREFs of sub_18009ACB8 @ 0x18009ACB8
 * Callers:
 *     sub_180093E64 @ 0x180093E64 (sub_180093E64.c)
 *     sub_180094860 @ 0x180094860 (sub_180094860.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009ACB8(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_180029C94((__int64 *)(a1 + 144));
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    sub_180088D1C(v3, *(_QWORD *)(a1 + 120));
    sub_180010884(*(char **)(a1 + 112), 16 * ((__int64)(*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 112)) >> 4));
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  return sub_180029DE4(a1);
}
