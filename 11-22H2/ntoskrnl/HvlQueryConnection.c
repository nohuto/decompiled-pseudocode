/*
 * XREFs of HvlQueryConnection @ 0x14038C7E0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402A56D0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x1408273D8 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140827FC8 (EtwpSysModuleRunDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
