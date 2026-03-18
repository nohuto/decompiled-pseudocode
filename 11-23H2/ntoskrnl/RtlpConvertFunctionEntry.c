/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402A6650
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402A5490 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14034BED0 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403E3878 (KiLockExtendedServiceTable.c)
 *     RtlIsSpecialUnwind @ 0x1405B194C (RtlIsSpecialUnwind.c)
 *     RtlMarkExceptionHandlingPages @ 0x1407455A0 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, unsigned __int64 a2)
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
