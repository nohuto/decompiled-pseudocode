/*
 * XREFs of sub_18002A644 @ 0x18002A644
 * Callers:
 *     sub_18002AAE4 @ 0x18002AAE4 (sub_18002AAE4.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18002A644(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v8 = sub_18001C190();
  a1[1] = v8;
  v9 = v8 + 32;
  sub_180017648((_QWORD *)(v8 + 32), a4);
  *(double *)(v9 + 32) = (double)*a5;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
