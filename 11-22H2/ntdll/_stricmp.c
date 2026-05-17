/*
 * XREFs of _stricmp @ 0x18008FFD0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800DABAC (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800E4FE8 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800EACC4 (ImportTablepInsertFunctionSorted.c)
 *     ImportTablepInsertModuleSorted @ 0x1800EAD44 (ImportTablepInsertModuleSorted.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
