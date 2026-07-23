/*
 * XREFs of sub_1409650EC @ 0x1409650EC
 * Callers:
 *     sub_1409635EC @ 0x1409635EC (sub_1409635EC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_QWORD *__fastcall sub_1409650EC(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  unsigned int i; // ecx
  __int64 v8; // rax

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  while ( v4 != v2 )
  {
    v5 = v4 - 3;
    v4 = (_QWORD *)*v4;
    result = (_QWORD *)sub_14042A5E0(v5, a2);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 12); *result = result )
  {
    v8 = i++;
    result = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v8);
    result[1] = result;
  }
  *(_DWORD *)(a1 + 8) = 0;
  v2[1] = v2;
  *v2 = v2;
  return result;
}
