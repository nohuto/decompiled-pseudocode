/*
 * XREFs of sub_140B4D6E0 @ 0x140B4D6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 */

__int64 sub_140B4D6E0()
{
  __int64 result; // rax

  result = sub_14036FA84();
  if ( (_DWORD)result == 1 )
    byte_140D011A0 = 1;
  return result;
}
