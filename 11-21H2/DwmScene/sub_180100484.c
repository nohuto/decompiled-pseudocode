/*
 * XREFs of sub_180100484 @ 0x180100484
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800115C4 @ 0x1800115C4 (sub_1800115C4.c)
 */

__int64 __fastcall sub_180100484(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_1800115C4(*(_QWORD *)(a2 + 72), a2, a3, a4);
  }
  return result;
}
