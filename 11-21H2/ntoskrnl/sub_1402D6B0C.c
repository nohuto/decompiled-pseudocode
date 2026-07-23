/*
 * XREFs of sub_1402D6B0C @ 0x1402D6B0C
 * Callers:
 *     sub_1402ACA10 @ 0x1402ACA10 (sub_1402ACA10.c)
 *     sub_1402ACA70 @ 0x1402ACA70 (sub_1402ACA70.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_1402D66F0 @ 0x1402D66F0 (sub_1402D66F0.c)
 *     sub_140368F70 @ 0x140368F70 (sub_140368F70.c)
 *     sub_140368FC4 @ 0x140368FC4 (sub_140368FC4.c)
 *     sub_1403CF1BC @ 0x1403CF1BC (sub_1403CF1BC.c)
 *     sub_1403DCA14 @ 0x1403DCA14 (sub_1403DCA14.c)
 *     sub_140416F1C @ 0x140416F1C (sub_140416F1C.c)
 *     sub_140416F84 @ 0x140416F84 (sub_140416F84.c)
 *     sub_1404170F8 @ 0x1404170F8 (sub_1404170F8.c)
 *     sub_14041718C @ 0x14041718C (sub_14041718C.c)
 *     sub_140417574 @ 0x140417574 (sub_140417574.c)
 *     sub_140417818 @ 0x140417818 (sub_140417818.c)
 *     sub_140417880 @ 0x140417880 (sub_140417880.c)
 *     sub_140417C90 @ 0x140417C90 (sub_140417C90.c)
 *     sub_1404190B0 @ 0x1404190B0 (sub_1404190B0.c)
 *     sub_140419CD4 @ 0x140419CD4 (sub_140419CD4.c)
 *     sub_14041A0D4 @ 0x14041A0D4 (sub_14041A0D4.c)
 *     sub_14041A808 @ 0x14041A808 (sub_14041A808.c)
 *     sub_14041AC58 @ 0x14041AC58 (sub_14041AC58.c)
 *     sub_14041ACC0 @ 0x14041ACC0 (sub_14041ACC0.c)
 *     sub_14041AD40 @ 0x14041AD40 (sub_14041AD40.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_140569768 @ 0x140569768 (sub_140569768.c)
 *     sub_1405697EC @ 0x1405697EC (sub_1405697EC.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_140752DA8 @ 0x140752DA8 (sub_140752DA8.c)
 *     sub_140752F30 @ 0x140752F30 (sub_140752F30.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 *     sub_1407F2930 @ 0x1407F2930 (sub_1407F2930.c)
 *     sub_1408080F0 @ 0x1408080F0 (sub_1408080F0.c)
 *     sub_14080A360 @ 0x14080A360 (sub_14080A360.c)
 *     sub_140819CB8 @ 0x140819CB8 (sub_140819CB8.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_140858820 @ 0x140858820 (sub_140858820.c)
 *     sub_1408618D8 @ 0x1408618D8 (sub_1408618D8.c)
 *     sub_140995B08 @ 0x140995B08 (sub_140995B08.c)
 *     sub_140998B6C @ 0x140998B6C (sub_140998B6C.c)
 *     sub_14099D040 @ 0x14099D040 (sub_14099D040.c)
 *     sub_140B08F6C @ 0x140B08F6C (sub_140B08F6C.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B29BDC @ 0x140B29BDC (sub_140B29BDC.c)
 *     sub_140B310D4 @ 0x140B310D4 (sub_140B310D4.c)
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 * Callees:
 *     sub_1402ACAD0 @ 0x1402ACAD0 (sub_1402ACAD0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402D6B0C(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-30h]

  result = sub_1402ACAD0(a1, a2, a3, a4, a6 != 0 ? 2 : 6, v8, 1u);
  if ( (_DWORD)result )
  {
    result = qword_140D010E0;
    if ( qword_140D010E0 )
      return sub_14042A5E0(a2, a5);
  }
  return result;
}
