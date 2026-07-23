/*
 * XREFs of RtlpGetCodePageData @ 0x140773FE4
 * Callers:
 *     RtlMultiByteToUnicodeN @ 0x140773F80 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x140774520 (RtlOemToUnicodeN.c)
 *     RtlUnicodeToOemN @ 0x1407D0FD0 (RtlUnicodeToOemN.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406DA560 (RtlpIsUtf8Process.c)
 */

__int128 *__fastcall RtlpGetCodePageData(unsigned int a1)
{
  char *CurrentServerSiloGlobals; // rax
  __int128 *result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 <= 1 && RtlpIsUtf8Process() )
    return &Utf8TableInfo;
  _InterlockedOr(v4, 0);
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  if ( !a1 || a1 == *((unsigned __int16 *)CurrentServerSiloGlobals + 532) )
    return (__int128 *)(CurrentServerSiloGlobals + 1064);
  result = (__int128 *)(CurrentServerSiloGlobals + 1128);
  if ( a1 != 1 && a1 != *(unsigned __int16 *)result )
    return &Utf8TableInfo;
  return result;
}
