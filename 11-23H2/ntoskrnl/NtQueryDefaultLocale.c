/*
 * XREFs of NtQueryDefaultLocale @ 0x1407CC1C0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x14076F9B4 (MmGetSessionLocaleId.c)
 */

NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  NTSTATUS v3; // r8d
  __int64 v4; // rcx
  DWORD SessionLocaleId; // eax

  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
      v4 = (__int64)DefaultLocaleId;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  if ( UserProfile )
    SessionLocaleId = MmGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return v3;
}
