/*
 * XREFs of sub_1C0061A08 @ 0x1C0061A08
 * Callers:
 *     sub_1C005EDA0 @ 0x1C005EDA0 (sub_1C005EDA0.c)
 * Callees:
 *     sub_1C0035B6C @ 0x1C0035B6C (sub_1C0035B6C.c)
 */

__int64 __fastcall sub_1C0061A08(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3312), 0, 1);
  if ( (_DWORD)result == 1 )
    return sub_1C0035B6C(*(_QWORD *)(a1 + 24));
  return result;
}
