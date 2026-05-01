/*
 * XREFs of SdbPdbIsRedirected @ 0x180051BA4
 * Callers:
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbPdbIsRedirected(const wchar_t ***a1, const wchar_t *a2)
{
  unsigned int v2; // ebx
  const wchar_t **v3; // rax

  v2 = 0;
  if ( !a1 )
    return 0LL;
  v3 = *a1;
  if ( !*a1 || !a2 || !*v3 )
    return 0LL;
  LOBYTE(v2) = _wcsicmp(*v3, a2) != 0;
  return v2;
}
