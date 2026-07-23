/*
 * XREFs of HalSetEnvironmentVariable @ 0x140508720
 * Callers:
 *     sub_140A01700 @ 0x140A01700 (sub_140A01700.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 *     _stricmp @ 0x1403E1190 (_stricmp.c)
 */

__int64 __fastcall HalSetEnvironmentVariable(const char *a1, const char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 v11; // al

  if ( byte_140C4BFC8 )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 16LL;
  if ( stricmp(a2, "TRUE") )
  {
    if ( !stricmp(a2, "FALSE") )
    {
      sub_14022D9F0(v9, v8, v10);
      __outbyte(0x70u, 0xBu);
      v11 = __inbyte(0x71u);
      __outbyte(0x70u, 0xBu);
      __outbyte(0x71u, v11 & 0xFE);
      goto LABEL_8;
    }
    return 16LL;
  }
  sub_14022D9F0(v5, v4, v6);
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v7 | 1);
LABEL_8:
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return 0LL;
}
