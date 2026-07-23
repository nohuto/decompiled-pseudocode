/*
 * XREFs of sub_1402A2094 @ 0x1402A2094
 * Callers:
 *     sub_1402541A8 @ 0x1402541A8 (sub_1402541A8.c)
 *     sub_14038ACD0 @ 0x14038ACD0 (sub_14038ACD0.c)
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_14038B198 @ 0x14038B198 (sub_14038B198.c)
 *     sub_1403A51D0 @ 0x1403A51D0 (sub_1403A51D0.c)
 *     sub_1403DB94C @ 0x1403DB94C (sub_1403DB94C.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_1405D44DC @ 0x1405D44DC (sub_1405D44DC.c)
 *     sub_1405D4604 @ 0x1405D4604 (sub_1405D4604.c)
 *     sub_140602478 @ 0x140602478 (sub_140602478.c)
 *     sub_140602644 @ 0x140602644 (sub_140602644.c)
 *     sub_140602808 @ 0x140602808 (sub_140602808.c)
 *     sub_140602AEC @ 0x140602AEC (sub_140602AEC.c)
 *     sub_140602F2C @ 0x140602F2C (sub_140602F2C.c)
 *     sub_140603128 @ 0x140603128 (sub_140603128.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_140712BA0 @ 0x140712BA0 (sub_140712BA0.c)
 *     sub_1407136E8 @ 0x1407136E8 (sub_1407136E8.c)
 *     sub_14074703C @ 0x14074703C (sub_14074703C.c)
 *     sub_1407F77B8 @ 0x1407F77B8 (sub_1407F77B8.c)
 *     sub_1407FE3D8 @ 0x1407FE3D8 (sub_1407FE3D8.c)
 *     sub_14083601C @ 0x14083601C (sub_14083601C.c)
 *     sub_1408604BC @ 0x1408604BC (sub_1408604BC.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 *     sub_140957508 @ 0x140957508 (sub_140957508.c)
 *     sub_140992098 @ 0x140992098 (sub_140992098.c)
 *     sub_1409A023C @ 0x1409A023C (sub_1409A023C.c)
 *     sub_1409A0558 @ 0x1409A0558 (sub_1409A0558.c)
 *     sub_1409A7718 @ 0x1409A7718 (sub_1409A7718.c)
 *     sub_1409A7B30 @ 0x1409A7B30 (sub_1409A7B30.c)
 *     sub_1409F7D30 @ 0x1409F7D30 (sub_1409F7D30.c)
 *     sub_140B53288 @ 0x140B53288 (sub_140B53288.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1402A2094(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &word_1404370A0;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
