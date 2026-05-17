/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x180083E50
 * Callers:
 *     RtlpLoadNlsData @ 0x180083D84 (RtlpLoadNlsData.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x1800A6100 (NtInitializeNlsFiles.c)
 */

__int64 __fastcall RtlGetLocaleFileMappingAddress(signed __int64 *a1, int *a2)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( gBaseAddress )
  {
    *a1 = gBaseAddress;
    *a2 = gSystemLocale;
  }
  else
  {
    result = NtInitializeNlsFiles(a1, a2, 0LL);
    if ( (int)result < 0 )
      return result;
    gSystemLocale = *a2;
    if ( _InterlockedCompareExchange64(&gBaseAddress, *a1, 0LL) )
    {
      NtUnmapViewOfSection(-1LL);
      *a1 = gBaseAddress;
    }
  }
  return 0LL;
}
