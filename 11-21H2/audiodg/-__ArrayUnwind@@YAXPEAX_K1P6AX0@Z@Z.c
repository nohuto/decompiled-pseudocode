/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x14002F924
 * Callers:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14002F8A8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x14002FCB0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 * Callees:
 *     _o_terminate_0 @ 0x14003096C (_o_terminate_0.c)
 *     __current_exception_0 @ 0x140030984 (__current_exception_0.c)
 *     __current_exception_context_0 @ 0x140030990 (__current_exception_context_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    a4(a1);
  }
}
