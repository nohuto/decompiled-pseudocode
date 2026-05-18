/*
 * XREFs of sub_180099468 @ 0x180099468
 * Callers:
 *     sub_180099408 @ 0x180099408 (sub_180099408.c)
 *     sub_180099420 @ 0x180099420 (sub_180099420.c)
 *     sub_180099438 @ 0x180099438 (sub_180099438.c)
 *     sub_180099450 @ 0x180099450 (sub_180099450.c)
 *     sub_18009968C @ 0x18009968C (sub_18009968C.c)
 *     sub_1800997B0 @ 0x1800997B0 (sub_1800997B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_180099468(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18002B404((__int64)a1);
}
