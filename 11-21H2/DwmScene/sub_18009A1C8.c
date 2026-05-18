/*
 * XREFs of sub_18009A1C8 @ 0x18009A1C8
 * Callers:
 *     sub_1800599AC @ 0x1800599AC (sub_1800599AC.c)
 *     sub_18005A000 @ 0x18005A000 (sub_18005A000.c)
 *     sub_18005A050 @ 0x18005A050 (sub_18005A050.c)
 *     sub_1800D9910 @ 0x1800D9910 (sub_1800D9910.c)
 *     sub_1800EB0EC @ 0x1800EB0EC (sub_1800EB0EC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_18009A1C8(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_18002B404((__int64)a1);
}
