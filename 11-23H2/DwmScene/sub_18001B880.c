/*
 * XREFs of sub_18001B880 @ 0x18001B880
 * Callers:
 *     sub_180017994 @ 0x180017994 (sub_180017994.c)
 *     sub_1800179F0 @ 0x1800179F0 (sub_1800179F0.c)
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004EC24 @ 0x18004EC24 (sub_18004EC24.c)
 *     sub_18005FCC0 @ 0x18005FCC0 (sub_18005FCC0.c)
 *     sub_180081F78 @ 0x180081F78 (sub_180081F78.c)
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 *     sub_1800845E8 @ 0x1800845E8 (sub_1800845E8.c)
 *     sub_18008F60C @ 0x18008F60C (sub_18008F60C.c)
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18001B880(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
