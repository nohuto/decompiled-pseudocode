/*
 * XREFs of sub_180066D90 @ 0x180066D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180066D90(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax

  v4 = a3;
  if ( a3 < 0 || a3 >= (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = sub_1800628C8(*a4);
    sub_18001246C(a2, (_QWORD *)(v7 + 8 + 16 * v4));
  }
  return a2;
}
