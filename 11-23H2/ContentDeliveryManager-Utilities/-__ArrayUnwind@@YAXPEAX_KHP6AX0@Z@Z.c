/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180022860
 * Callers:
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800227E8 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180022A34 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  while ( --a3 >= 0 )
  {
    a1 -= a2;
    a4(a1);
  }
}
