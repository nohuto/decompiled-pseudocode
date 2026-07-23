/*
 * XREFs of sub_140509BBC @ 0x140509BBC
 * Callers:
 *     sub_140509960 @ 0x140509960 (sub_140509960.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140509BBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 < 0 && (a3 & 0x2000000000000000LL) == 0 )
    return sub_14042A5E0(a5, a2);
  return result;
}
