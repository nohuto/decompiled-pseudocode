/*
 * XREFs of _stricmp @ 0x180095000
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800DAABC (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800E6168 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800EB810 (ImportTablepInsertFunctionSorted.c)
 *     ImportTablepInsertModuleSorted @ 0x1800EB890 (ImportTablepInsertModuleSorted.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
