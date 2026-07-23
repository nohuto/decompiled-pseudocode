/*
 * XREFs of sub_1405A7608 @ 0x1405A7608
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 * Callees:
 *     sub_14027D364 @ 0x14027D364 (sub_14027D364.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     SeAdjustObjectSecurity @ 0x1407F4E10 (SeAdjustObjectSecurity.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 */

__int64 __fastcall sub_1405A7608(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned int v11; // ebx

  v6 = *(_QWORD *)(a3 + 1680);
  v7 = (__int64 *)(a1 + 56);
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(v6 + 600);
  v10 = sub_14027DA5C(a1 + 56, 17, 0LL);
  if ( (int)SeAdjustObjectSecurity() >= 0 )
  {
    sub_14027D364(v7, v10);
    if ( v9 == *(_QWORD *)(v6 + 600) && ((*(_BYTE *)(a1 + 69) & 1) == 0 || sub_14028FBF0(v8)) )
      return ((a2 ^ sub_140317A10(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    sub_140967E00((PEPROCESS)a3);
    v11 = -1073739997;
    sub_14027D364(v7, v10);
  }
  return v11;
}
