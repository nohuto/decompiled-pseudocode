/*
 * XREFs of sub_1407ED29C @ 0x1407ED29C
 * Callers:
 *     sub_1407ED1D8 @ 0x1407ED1D8 (sub_1407ED1D8.c)
 *     sub_140842F74 @ 0x140842F74 (sub_140842F74.c)
 *     sub_1408437A4 @ 0x1408437A4 (sub_1408437A4.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     sub_140A1329C @ 0x140A1329C (sub_140A1329C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_1407ED29C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)sub_140791084(a1, v6, a3, a4) )
      return 1LL;
    sub_1406E0C3C(1LL, (__int64)"SdbReadBinaryTag");
  }
  else
  {
    sub_14079499C(a1, v6);
    sub_1406E0C3C(1LL, (__int64)"SdbReadBinaryTag");
  }
  return 0LL;
}
