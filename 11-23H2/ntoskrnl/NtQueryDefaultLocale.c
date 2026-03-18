/*
 * XREFs of NtQueryDefaultLocale @ 0x1407CBEF0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x14076F7C4 (MmGetSessionLocaleId.c)
 */

__int64 __fastcall NtQueryDefaultLocale(char a1, int *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rcx
  int SessionLocaleId; // eax

  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a2;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  if ( a1 )
    SessionLocaleId = MmGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *a2 = SessionLocaleId;
  return v3;
}
