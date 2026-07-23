/*
 * XREFs of sub_140601C50 @ 0x140601C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14055712C @ 0x14055712C (sub_14055712C.c)
 *     sub_140A92410 @ 0x140A92410 (sub_140A92410.c)
 *     sub_140A925C4 @ 0x140A925C4 (sub_140A925C4.c)
 *     sub_140AA5D64 @ 0x140AA5D64 (sub_140AA5D64.c)
 */

__int64 sub_140601C50()
{
  __int64 result; // rax

  LODWORD(qword_140D01450) = qword_140D01450 | 0xFFFFFFEF;
  sub_14055712C(1, 0, 0);
  _InterlockedExchange(&dword_140D018F8, 1);
  sub_140A92410();
  result = sub_140A925C4();
  if ( !dword_140C1A918 )
    result = sub_140AA5D64();
  _InterlockedAnd(&dword_140D069E8, 0xFFFFFFEF);
  return result;
}
