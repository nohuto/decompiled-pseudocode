/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005CE08
 * Callers:
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180039FA0 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CAA8 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_xfg_dispatch_icall_fptr();
    a1 += a2;
  }
}
