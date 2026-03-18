/*
 * XREFs of VfRemoveVerifierEntry @ 0x140ADD7F0
 * Callers:
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140ADAA44 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
