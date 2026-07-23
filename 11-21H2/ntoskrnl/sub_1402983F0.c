/*
 * XREFs of sub_1402983F0 @ 0x1402983F0
 * Callers:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     sub_1403EB1A8 @ 0x1403EB1A8 (sub_1403EB1A8.c)
 *     sub_14079C0D4 @ 0x14079C0D4 (sub_14079C0D4.c)
 *     sub_140AD6354 @ 0x140AD6354 (sub_140AD6354.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1402983F0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      a1 = v2 + a2 - 1;
      if ( a2 <= 0x7FFFFFFEFFFFLL && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return a1;
}
