/*
 * XREFs of sub_14097F038 @ 0x14097F038
 * Callers:
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_1409E4084 @ 0x1409E4084 (sub_1409E4084.c)
 */

__int64 __fastcall sub_14097F038(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  sub_14030EB64(a1);
  sub_14030DA80(a1, 0, 0LL);
  result = *(unsigned int *)(a1 + 28);
  *(_QWORD *)(a2 + 1176) += (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                            - (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))) << 12)
                          - 4096;
  if ( (WORD2(xmmword_140D06900[0]) & 0x8000) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    return sub_1409E4084(
             v6 << 12,
             ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v6 + 1) << 12,
             a2,
             0x8000LL);
  }
  return result;
}
