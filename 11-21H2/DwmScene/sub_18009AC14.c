/*
 * XREFs of sub_18009AC14 @ 0x18009AC14
 * Callers:
 *     sub_1800599FC @ 0x1800599FC (sub_1800599FC.c)
 *     sub_18005A150 @ 0x18005A150 (sub_18005A150.c)
 *     sub_1800EB414 @ 0x1800EB414 (sub_1800EB414.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_18009AC14(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    sub_180088D1C(v2, *(_QWORD *)(a1 + 120));
    sub_180010884(*(char **)(a1 + 112), 16 * ((__int64)(*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 112)) >> 4));
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v3 = *(volatile signed __int32 **)(a1 + 80);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_18002B404(a1);
}
