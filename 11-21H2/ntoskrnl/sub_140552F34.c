/*
 * XREFs of sub_140552F34 @ 0x140552F34
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 */

__int64 __fastcall sub_140552F34(int a1)
{
  __int64 result; // rax

  result = qword_140D00A80;
  if ( qword_140D00A80 )
  {
    *(_DWORD *)(qword_140D00A80 + 1404) |= a1;
    return sub_140553164();
  }
  return result;
}
