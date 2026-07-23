/*
 * XREFs of sub_140354968 @ 0x140354968
 * Callers:
 *     sub_14035489C @ 0x14035489C (sub_14035489C.c)
 *     sub_1403AD92C @ 0x1403AD92C (sub_1403AD92C.c)
 *     sub_140554654 @ 0x140554654 (sub_140554654.c)
 *     sub_1407D38A8 @ 0x1407D38A8 (sub_1407D38A8.c)
 *     sub_1409B5AEC @ 0x1409B5AEC (sub_1409B5AEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140354968(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9

  if ( a1 < a2 )
    v3 = -1LL;
  else
    v3 = a1 - a2;
  *a3 = v3;
  return a1 < a2 ? 0xC0000095 : 0;
}
