/*
 * XREFs of sub_1800EB62C @ 0x1800EB62C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800640DC @ 0x1800640DC (sub_1800640DC.c)
 */

__int64 __fastcall sub_1800EB62C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 104) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    return sub_1800640DC(*(_QWORD *)(a2 + 800));
  }
  return result;
}
