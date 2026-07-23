/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402A68E0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402A5720 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14034C070 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403E3A58 (KiLockExtendedServiceTable.c)
 *     RtlIsSpecialUnwind @ 0x1405B1EBC (RtlIsSpecialUnwind.c)
 *     RtlMarkExceptionHandlingPages @ 0x140745790 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
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
