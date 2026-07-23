/*
 * XREFs of sub_140291E74 @ 0x140291E74
 * Callers:
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140291E74(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  if ( a3 )
    *a3 = result;
  if ( result )
    result += *(unsigned int *)(a2 + 216);
  return result;
}
