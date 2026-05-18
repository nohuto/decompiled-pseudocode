/*
 * XREFs of sub_180051338 @ 0x180051338
 * Callers:
 *     sub_180014A64 @ 0x180014A64 (sub_180014A64.c)
 *     sub_180014D00 @ 0x180014D00 (sub_180014D00.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180051338(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 160);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(volatile signed __int32 **)(a1 + 144);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    sub_180050B9C(v4, *(_QWORD *)(a1 + 112));
    sub_180010884(*(char **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  sub_180010910(a1 + 88);
  return sub_180048280(a1);
}
