/*
 * XREFs of sub_1409312AC @ 0x1409312AC
 * Callers:
 *     sub_140931294 @ 0x140931294 (sub_140931294.c)
 *     sub_140B4E6A0 @ 0x140B4E6A0 (sub_140B4E6A0.c)
 * Callees:
 *     sub_140B4E580 @ 0x140B4E580 (sub_140B4E580.c)
 *     sub_140B4E7BC @ 0x140B4E7BC (sub_140B4E7BC.c)
 */

__int64 sub_1409312AC()
{
  __int64 result; // rax

  if ( byte_140D069E5 == 1 )
    return sub_140B4E580();
  if ( byte_140D069E5 == 2 )
    return sub_140B4E7BC();
  return result;
}
