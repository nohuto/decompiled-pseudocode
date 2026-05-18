/*
 * XREFs of sub_180029D70 @ 0x180029D70
 * Callers:
 *     sub_180029FB0 @ 0x180029FB0 (sub_180029FB0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029D70(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::FrameBuffer::`vftable';
  sub_180010910((__int64)(a1 + 19));
  sub_180010910((__int64)(a1 + 17));
  sub_180029C94(a1 + 15);
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180029DE4(a1);
}
