/*
 * XREFs of RtlpStackDbStackComparitor @ 0x18012E908
 * Callers:
 *     RtlStackDbStackAdd @ 0x18012D728 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x18012E014 (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}
