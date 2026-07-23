/*
 * XREFs of sub_140551760 @ 0x140551760
 * Callers:
 *     sub_1405519D0 @ 0x1405519D0 (sub_1405519D0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140551760()
{
  __int64 result; // rax

  result = qword_140D01888;
  if ( qword_140D01888 && dword_140C54D50 == 2 )
    result = sub_14042A5E0(80LL, 50LL);
  dword_140C54D50 = 0;
  return result;
}
