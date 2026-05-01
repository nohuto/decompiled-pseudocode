/*
 * XREFs of AslImageFileToArchitecture @ 0x1800A05E0
 * Callers:
 *     SdbpGetBinaryRuntimePlatform @ 0x180090E44 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180092CD8 (SdbpGetProcessHostGuestArchitectures.c)
 *     SdbpResolveMatchingFile @ 0x180096BF8 (SdbpResolveMatchingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_1800DB910[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_1800DB910[2 * v1];
}
