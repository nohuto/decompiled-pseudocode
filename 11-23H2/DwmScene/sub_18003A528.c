/*
 * XREFs of sub_18003A528 @ 0x18003A528
 * Callers:
 *     sub_180039F98 @ 0x180039F98 (sub_180039F98.c)
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 *     unknown_libname_6 @ 0x18003A9D4 (unknown_libname_6.c)
 *     sub_18003AD70 @ 0x18003AD70 (sub_18003AD70.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003A528(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v5; // rbx
  __int64 v9; // rdi
  __int64 *v10; // r14
  __int64 *v11; // r13
  __int64 *v12; // rdx
  _QWORD *v13; // rbp
  __int64 *v14; // rsi
  __int64 result; // rax
  _QWORD *v16; // rax

  v5 = a4;
  v9 = sub_18003AD70(a1, a2, a4);
  v10 = (__int64 *)v5;
  v11 = (__int64 *)(v9 - 16);
  sub_180011020(a1, v12);
  v13 = a1 + 2;
  v14 = (__int64 *)(a2 + 16);
  while ( a5(v14, v10) )
  {
    sub_180011020(v13, v14);
    v14 += 2;
    if ( v14 == a3 )
    {
      result = unknown_libname_6(v10, v9, v13 + 2);
      while ( v5 != v9 )
      {
        result = sub_180032650(v5);
        v5 += 16LL;
      }
      return result;
    }
LABEL_6:
    v13 += 2;
  }
  sub_180011020(v13, v10);
  v10 += 2;
  if ( v10 != v11 )
    goto LABEL_6;
  v16 = (_QWORD *)unknown_libname_6(v14, a3, v13 + 2);
  result = (__int64)sub_180011020(v16, v11);
  while ( v5 != v9 )
  {
    result = sub_180032650(v5);
    v5 += 16LL;
  }
  return result;
}
