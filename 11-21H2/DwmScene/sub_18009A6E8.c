/*
 * XREFs of sub_18009A6E8 @ 0x18009A6E8
 * Callers:
 *     sub_1800599B8 @ 0x1800599B8 (sub_1800599B8.c)
 *     sub_18005A090 @ 0x18005A090 (sub_18005A090.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_18009A6E8(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  sub_180010910((__int64)(a1 + 12));
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18002B404((__int64)a1);
}
