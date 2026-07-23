/*
 * XREFs of sub_140882446 @ 0x140882446
 * Callers:
 *     sub_140224810 @ 0x140224810 (sub_140224810.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140882446(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C5AD88;
  if ( qword_140C5AD88 )
    return sub_14042A5E0(a1, a2);
  return result;
}
