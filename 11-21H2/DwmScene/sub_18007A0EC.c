/*
 * XREFs of sub_18007A0EC @ 0x18007A0EC
 * Callers:
 *     sub_180059FB0 @ 0x180059FB0 (sub_180059FB0.c)
 *     sub_18005B190 @ 0x18005B190 (sub_18005B190.c)
 *     sub_18007A190 @ 0x18007A190 (sub_18007A190.c)
 *     sub_1800ED784 @ 0x1800ED784 (sub_1800ED784.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_18007A0EC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  sub_180010910((__int64)(a1 + 12));
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18002B404((__int64)a1);
}
