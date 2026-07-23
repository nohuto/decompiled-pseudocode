/*
 * XREFs of sub_140552B10 @ 0x140552B10
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 *     sub_140578EF0 @ 0x140578EF0 (sub_140578EF0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140552B10()
{
  __int64 result; // rax

  result = qword_140C54E00;
  if ( qword_140C54E00 )
    return sub_14042A5E0(8LL, 0LL);
  return result;
}
