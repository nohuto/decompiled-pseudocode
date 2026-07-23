/*
 * XREFs of sub_1403025F0 @ 0x1403025F0
 * Callers:
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 *     sub_1403AFE08 @ 0x1403AFE08 (sub_1403AFE08.c)
 *     sub_140578454 @ 0x140578454 (sub_140578454.c)
 * Callees:
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 */

bool __fastcall sub_1403025F0(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int8 v3; // r10

  return qword_140D00B48
      && ((unsigned __int8)sub_1403031F0(
                             *(_QWORD *)(qword_140D00B48 + 32) + 96LL,
                             *(unsigned __int8 *)(a1 + 4),
                             *(_QWORD *)(a1 + 8))
       || *(_BYTE *)(v2 + 101) && (unsigned __int8)sub_1403031F0(*(_QWORD *)(v2 + 40) + 96LL, v3, v1));
}
