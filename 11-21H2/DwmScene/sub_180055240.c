/*
 * XREFs of sub_180055240 @ 0x180055240
 * Callers:
 *     sub_180054680 @ 0x180054680 (sub_180054680.c)
 *     sub_18005468C @ 0x18005468C (sub_18005468C.c)
 *     sub_180054698 @ 0x180054698 (sub_180054698.c)
 *     sub_1800546A4 @ 0x1800546A4 (sub_1800546A4.c)
 *     sub_180054700 @ 0x180054700 (sub_180054700.c)
 *     sub_180055BE0 @ 0x180055BE0 (sub_180055BE0.c)
 * Callees:
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055240(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::Shader::`vftable';
  sub_180029C94(a1 + 17);
  v2 = (volatile signed __int32 *)a1[16];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180029DE4((__int64)a1);
}
