/*
 * XREFs of sub_1800105A8 @ 0x1800105A8
 * Callers:
 *     sub_180017B24 @ 0x180017B24 (sub_180017B24.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_180040030 @ 0x180040030 (sub_180040030.c)
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 *     sub_180074430 @ 0x180074430 (sub_180074430.c)
 *     sub_18007CBF4 @ 0x18007CBF4 (sub_18007CBF4.c)
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 *     sub_180081F78 @ 0x180081F78 (sub_180081F78.c)
 *     sub_18008D07C @ 0x18008D07C (sub_18008D07C.c)
 *     sub_18009BF90 @ 0x18009BF90 (sub_18009BF90.c)
 *     sub_1800E5593 @ 0x1800E5593 (sub_1800E5593.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800105A8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
