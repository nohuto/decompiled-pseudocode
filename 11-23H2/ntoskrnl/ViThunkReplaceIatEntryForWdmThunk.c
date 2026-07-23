/*
 * XREFs of ViThunkReplaceIatEntryForWdmThunk @ 0x140ADC068
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x140ADBEE8 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140293C10 (VfIsVerifierEnabled.c)
 *     MmReplaceImportEntry @ 0x14062D018 (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceIatEntryForWdmThunk(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v5; // eax
  ULONG_PTR v6; // rdx

  v2 = a2;
  if ( !*a1 || !*a2 )
    return 0LL;
  while ( *a1 != v2[2] )
  {
    v2 += 7;
    if ( !*v2 )
      return 0LL;
  }
  if ( (VfRuleClasses & 0x800000000LL) == 0 || (unsigned int)VfIsVerifierEnabled() && (VfRuleClasses & 0xFF217644) != 0 )
    goto LABEL_12;
  v5 = *((_DWORD *)v2 + 8);
  if ( (v5 & 1) == 0 )
    return 0LL;
  if ( (v5 & 4) != 0 )
LABEL_12:
    v6 = v2[1];
  else
    v6 = *(_QWORD *)v2[5];
  if ( !v6 )
    return 0LL;
  MmReplaceImportEntry((ULONG_PTR)a1, v6);
  return 1LL;
}
