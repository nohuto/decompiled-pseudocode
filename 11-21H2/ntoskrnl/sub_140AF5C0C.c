/*
 * XREFs of sub_140AF5C0C @ 0x140AF5C0C
 * Callers:
 *     sub_140AF5AE4 @ 0x140AF5AE4 (sub_140AF5AE4.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140AF66BC @ 0x140AF66BC (sub_140AF66BC.c)
 *     sub_140AF66DC @ 0x140AF66DC (sub_140AF66DC.c)
 */

__int64 *__fastcall sub_140AF5C0C(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  ULONG_PTR v3; // rbp
  ULONG_PTR i; // rbx
  ULONG_PTR v7; // rdi
  __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v3 = *(_QWORD *)(a1 + 40);
  for ( i = *(_QWORD *)(a1 + 32); v3; v3 -= v7 )
  {
    v7 = sub_1403B7A10(i, v3);
    v8 = *((unsigned int *)sub_1402C1550(i) + 2);
    result = qword_140D690E0;
    v9 = &qword_140D690E0[5 * v8];
    if ( v7 >= v9[1] || v7 >= *(_QWORD *)(a2 + 8 * v8) + 0x4000LL )
    {
      if ( (unsigned int)sub_140AF66BC(v7 + i - 1)
        || (v11 = v9[1]) == 0
        || !(unsigned int)sub_140AF66BC(*v9 - 1 + v11)
        || (result = (__int64 *)(v9[1] + *v9), (unsigned __int64)result < *(_QWORD *)(a2 + 8 * v8) + 0x4000LL) )
      {
        result = (__int64 *)sub_140AF66DC(&qword_140D690E0[5 * v8], a1, i, v7);
      }
    }
    i += v7;
  }
  if ( word_140D05000 )
  {
    result = qword_140D69100;
    v10 = (unsigned __int16)word_140D05000;
    do
    {
      if ( *result )
        *(_DWORD *)(*result + 24) |= 0x40000000u;
      result += 5;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
