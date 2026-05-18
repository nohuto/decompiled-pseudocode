/*
 * XREFs of sub_1800FED60 @ 0x1800FED60
 * Callers:
 *     sub_1800D9890 @ 0x1800D9890 (sub_1800D9890.c)
 *     sub_1800FEDC0 @ 0x1800FEDC0 (sub_1800FEDC0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800FED60(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18002B404((__int64)a1);
}
