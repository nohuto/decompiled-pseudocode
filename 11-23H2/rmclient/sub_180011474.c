/*
 * XREFs of sub_180011474 @ 0x180011474
 * Callers:
 *     sub_18000DA3C @ 0x18000DA3C (sub_18000DA3C.c)
 *     sub_180015414 @ 0x180015414 (sub_180015414.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall sub_180011474(_QWORD *a1))(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_180032988;
  if ( qword_180032988 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_180032D98;
  if ( qword_180032D98 )
    return (__int64 (*)(void))result();
  *a1 = 0LL;
  return result;
}
