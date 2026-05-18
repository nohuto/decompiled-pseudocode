/*
 * XREFs of sub_18003A8DC @ 0x18003A8DC
 * Callers:
 *     sub_18003A228 @ 0x18003A228 (sub_18003A228.c)
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003A8DC(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  v9 = a2;
  while ( a5(v9, a1) )
  {
    sub_180011020(a4, v9);
    v9 += 2;
    if ( v9 == a3 )
    {
      v10 = a2;
      v11 = a1;
      return unknown_libname_6(v11, v10, a4 + 2);
    }
LABEL_6:
    a4 += 2;
  }
  sub_180011020(a4, a1);
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  v10 = a3;
  v11 = v9;
  return unknown_libname_6(v11, v10, a4 + 2);
}
