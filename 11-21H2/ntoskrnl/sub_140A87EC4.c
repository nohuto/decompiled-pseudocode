/*
 * XREFs of sub_140A87EC4 @ 0x140A87EC4
 * Callers:
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A88268 @ 0x140A88268 (sub_140A88268.c)
 *     sub_140A896FC @ 0x140A896FC (sub_140A896FC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140A87EC4(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  _QWORD *result; // rax
  int v5; // r9d

  v3 = *(_DWORD *)(a1 + 28);
  result = (_QWORD *)(a1 + 88);
  v5 = 0;
  if ( !v3 )
    return 0LL;
  while ( a2 != *result )
  {
    result += 4;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  if ( a3 )
    *a3 = v5;
  return result;
}
