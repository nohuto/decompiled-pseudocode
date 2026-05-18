/*
 * XREFs of sub_18007BA44 @ 0x18007BA44
 * Callers:
 *     sub_18007BCD0 @ 0x18007BCD0 (sub_18007BCD0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007BA44(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v8 = sub_18001090C(0x38uLL);
  a1[1] = v8;
  *(_DWORD *)(v8 + 32) = *a4;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 40) = *a5;
  *(_QWORD *)(v8 + 48) = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
