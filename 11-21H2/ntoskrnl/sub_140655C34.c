/*
 * XREFs of sub_140655C34 @ 0x140655C34
 * Callers:
 *     sub_140655828 @ 0x140655828 (sub_140655828.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140655C34(unsigned int *a1)
{
  if ( !qword_140D04DB0 || !a1 )
    return 2LL;
  sub_14042A5E0(qword_140D04DB0, *a1);
  return 0LL;
}
