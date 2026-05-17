/*
 * XREFs of _stricmp @ 0x1800907D0
 * Callers:
 *     LdrpGetDelayloadDescriptor @ 0x1800DA55C (LdrpGetDelayloadDescriptor.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800E6318 (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800EBFF4 (ImportTablepInsertFunctionSorted.c)
 *     ImportTablepInsertModuleSorted @ 0x1800EC074 (ImportTablepInsertModuleSorted.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
