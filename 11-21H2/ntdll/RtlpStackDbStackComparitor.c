/*
 * XREFs of RtlpStackDbStackComparitor @ 0x1801287B8
 * Callers:
 *     RtlStackDbStackAdd @ 0x1801275E4 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x180127ED8 (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}
