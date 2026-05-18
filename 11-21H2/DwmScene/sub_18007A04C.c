/*
 * XREFs of sub_18007A04C @ 0x18007A04C
 * Callers:
 *     sub_18007A150 @ 0x18007A150 (sub_18007A150.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007A04C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  sub_180029C94(a1 + 32);
  sub_18000B4C0((__int64)(a1 + 24), 16LL, 4LL);
  sub_18000B4C0((__int64)(a1 + 16), 16LL, 4LL);
  sub_180010910((__int64)(a1 + 14));
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180029DE4((__int64)a1);
}
