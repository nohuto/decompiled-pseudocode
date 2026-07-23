/*
 * XREFs of sub_1403A340C @ 0x1403A340C
 * Callers:
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A32AC @ 0x1403A32AC (sub_1403A32AC.c)
 *     sub_1403A3710 @ 0x1403A3710 (sub_1403A3710.c)
 *     sub_1403CCF30 @ 0x1403CCF30 (sub_1403CCF30.c)
 *     sub_1405351F0 @ 0x1405351F0 (sub_1405351F0.c)
 *     sub_1405352A0 @ 0x1405352A0 (sub_1405352A0.c)
 *     sub_140535530 @ 0x140535530 (sub_140535530.c)
 *     sub_1405355F0 @ 0x1405355F0 (sub_1405355F0.c)
 *     sub_140536D58 @ 0x140536D58 (sub_140536D58.c)
 * Callees:
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

char __fastcall sub_1403A340C(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)v1 > *(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  ++*(_WORD *)(a1 + 20);
  return *(_BYTE *)sub_1403A3520(*(unsigned __int16 *)(a1 + 58), v1);
}
