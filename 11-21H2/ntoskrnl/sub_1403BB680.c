/*
 * XREFs of sub_1403BB680 @ 0x1403BB680
 * Callers:
 *     sub_140A54EF0 @ 0x140A54EF0 (sub_140A54EF0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 (__fastcall *__fastcall sub_1403BB680(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall *result)(); // rax

  result = off_140C02520[19];
  if ( result )
    return (__int64 (__fastcall *)())sub_14042A5E0(a1, a2);
  return result;
}
