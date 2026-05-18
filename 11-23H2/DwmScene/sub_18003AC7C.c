/*
 * XREFs of sub_18003AC7C @ 0x18003AC7C
 * Callers:
 *     sub_18003ABE4 @ 0x18003ABE4 (sub_18003ABE4.c)
 * Callees:
 *     sub_18003AD70 @ 0x18003AD70 (sub_18003AD70.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003AC7C(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(_QWORD *, _QWORD *))
{
  _QWORD *v5; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  v5 = a4;
  v9 = a2;
  v10 = a4;
  while ( a5(v9, a1) )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    *v5 = *v9;
    v5[1] = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v5 += 2;
    v9 += 2;
    if ( v9 == a3 )
    {
      v11 = a2;
      v12 = a1;
      return sub_18003AD70(v12, v11, v5);
    }
LABEL_6:
    v10 = v5;
  }
  *v10 = 0LL;
  v10[1] = 0LL;
  *v10 = *a1;
  v10[1] = a1[1];
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v10 + 2;
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  v11 = a3;
  v12 = v9;
  return sub_18003AD70(v12, v11, v5);
}
