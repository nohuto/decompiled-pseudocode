/*
 * XREFs of sub_180042604 @ 0x180042604
 * Callers:
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_1800426D4 @ 0x1800426D4 (sub_1800426D4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_18004A430 @ 0x18004A430 (sub_18004A430.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180042604(__int64 *a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 *v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]

  result = sub_180011DD0(a1);
  if ( !result )
  {
    sub_180013E14(*v7, &v11);
    if ( sub_180011DE0(&v11) )
      sub_18004A430(v11, a2, a3);
    v8 = *a1;
    result = sub_18003E330(v8);
    v9 = *(_QWORD **)(v8 + 32);
    v10 = *(_QWORD **)(v8 + 40);
    while ( v9 != v10 )
    {
      sub_180011DA0(&v13, v9);
      result = sub_180042604(&v13, a2, a3);
      if ( v14 )
        result = sub_180010530(v14);
      v9 += 2;
    }
    if ( v12 )
      return sub_180010530(v12);
  }
  return result;
}
