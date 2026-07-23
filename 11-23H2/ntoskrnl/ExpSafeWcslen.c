/*
 * XREFs of ExpSafeWcslen @ 0x14083E404
 * Callers:
 *     NtEnumerateBootEntries @ 0x14083DDB0 (NtEnumerateBootEntries.c)
 *     ExpVerifyFilePath @ 0x14083E710 (ExpVerifyFilePath.c)
 *     ExpSetBootEntry @ 0x1409FD400 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FEA58 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateDriverEntries @ 0x1409FEE50 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
