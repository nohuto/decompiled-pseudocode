/*
 * XREFs of sub_180096AC8 @ 0x180096AC8
 * Callers:
 *     sub_18004DB1C @ 0x18004DB1C (sub_18004DB1C.c)
 *     sub_18004DF30 @ 0x18004DF30 (sub_18004DF30.c)
 *     sub_180097B40 @ 0x180097B40 (sub_180097B40.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180096AC8(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  sub_180010910((__int64)(a1 + 17));
  sub_180029C94(a1 + 15);
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[14];
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180029DE4((__int64)a1);
}
