/*
 * XREFs of sub_18002C864 @ 0x18002C864
 * Callers:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 *     LanguageEnumProc @ 0x18002C000 (LanguageEnumProc.c)
 *     sub_18002C0EC @ 0x18002C0EC (sub_18002C0EC.c)
 * Callees:
 *     sub_18002C8A4 @ 0x18002C8A4 (sub_18002C8A4.c)
 */

char __fastcall sub_18002C864(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_18002C8A4(a1, a2) || (unsigned __int8)sub_18002C8A4(a1, 0LL) )
    return 1;
  return v3;
}
