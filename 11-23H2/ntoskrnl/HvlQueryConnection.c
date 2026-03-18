/*
 * XREFs of HvlQueryConnection @ 0x140383690
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402A57F0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     HvlPhase0Initialize @ 0x14081FE98 (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x140820A88 (EtwpSysModuleRunDown.c)
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
