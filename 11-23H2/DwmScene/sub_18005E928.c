/*
 * XREFs of sub_18005E928 @ 0x18005E928
 * Callers:
 *     sub_18005F370 @ 0x18005F370 (sub_18005F370.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18005E928(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD **a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = sub_18001C190();
  a1[1] = v7;
  *(_DWORD *)(v7 + 32) = **a5;
  v8 = (_QWORD *)(v7 + 40);
  *(_OWORD *)(v7 + 40) = 0LL;
  *(_OWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  v9 = (_QWORD *)sub_18001090C(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  *v8 = v9;
  v8[2] = 0LL;
  v8[3] = 0LL;
  v10 = sub_18001090C(0x38uLL);
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_WORD *)(v10 + 24) = 257;
  v8[2] = v10;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
