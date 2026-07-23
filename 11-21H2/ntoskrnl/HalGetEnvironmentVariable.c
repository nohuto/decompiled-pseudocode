/*
 * XREFs of HalGetEnvironmentVariable @ 0x140508580
 * Callers:
 *     sub_140A00DB0 @ 0x140A00DB0 (sub_140A00DB0.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 *     _stricmp @ 0x1403E1190 (_stricmp.c)
 *     strncpy_s @ 0x1403E7340 (strncpy_s.c)
 */

__int64 __fastcall HalGetEnvironmentVariable(const char *a1, unsigned __int16 a2, char *a3)
{
  rsize_t v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // al
  const char *v10; // r8

  v4 = a2;
  if ( byte_140C4BFC8 )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 14LL;
  sub_14022D9F0(v7, v6, v8);
  __outbyte(0x70u, 0xBu);
  v9 = __inbyte(0x71u);
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  v10 = "TRUE";
  if ( (v9 & 1) == 0 )
    v10 = "FALSE";
  strncpy_s(a3, v4, v10, v4 - 1);
  return 0LL;
}
