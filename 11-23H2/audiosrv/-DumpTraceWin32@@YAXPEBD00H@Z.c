/*
 * XREFs of ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1801590B8
 * Callers:
 *     ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x180158C94 (-IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayEleme.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180067C54 (_snprintf_s.c)
 *     ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x180158FBC (--$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z.c)
 */

void __fastcall DumpTraceWin32(const char *a1, const char *a2, const char *a3, int a4)
{
  char Buffer[512]; // [rsp+40h] [rbp-218h] BYREF

  snprintf_s(Buffer, 0x200uLL, 0xFFFFFFFFFFFFFFFFuLL, "Function %s(%s) : *** TRACE *** code = 0x%x!\n", a2, a3, a4);
  Buffer[511] = 0;
  NUIAudioTracing::NuiAudioTrace<char (&)[512]>((__int64)Buffer);
}
