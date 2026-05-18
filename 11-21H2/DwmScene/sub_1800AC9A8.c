/*
 * XREFs of sub_1800AC9A8 @ 0x1800AC9A8
 * Callers:
 *     sub_18009A59C @ 0x18009A59C (sub_18009A59C.c)
 *     sub_18009A600 @ 0x18009A600 (sub_18009A600.c)
 *     sub_1800EF8C4 @ 0x1800EF8C4 (sub_1800EF8C4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800AC9A8(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_18002B404((__int64)a1);
}
