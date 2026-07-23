/*
 * XREFs of sub_140861088 @ 0x140861088
 * Callers:
 *     sub_1407FCAFC @ 0x1407FCAFC (sub_1407FCAFC.c)
 * Callees:
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140861088(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    sub_140A48330(a1);
    qword_140C09750 = 0LL;
    *(_OWORD *)&qword_140C5AD40 = *(_OWORD *)(a1 + 8);
    *((_OWORD *)&qword_140C5AD40 + 1) = *(_OWORD *)(a1 + 24);
    *((_OWORD *)&qword_140C5AD40 + 2) = *(_OWORD *)(a1 + 40);
    *((_OWORD *)&qword_140C5AD40 + 3) = *(_OWORD *)(a1 + 56);
    *((_OWORD *)&qword_140C5AD40 + 4) = *(_OWORD *)(a1 + 72);
    *((_OWORD *)&qword_140C5AD40 + 5) = *(_OWORD *)(a1 + 88);
    *((_OWORD *)&qword_140C5AD40 + 6) = *(_OWORD *)(a1 + 104);
    *((_OWORD *)&qword_140C5AD40 + 7) = *(_OWORD *)(a1 + 120);
    *((_OWORD *)&qword_140C5AD40 + 8) = *(_OWORD *)(a1 + 136);
    *((_OWORD *)&qword_140C5AD40 + 9) = *(_OWORD *)(a1 + 152);
    *((_OWORD *)&qword_140C5AD40 + 10) = *(_OWORD *)(a1 + 168);
    *((_OWORD *)&qword_140C5AD40 + 11) = *(_OWORD *)(a1 + 184);
    *((_OWORD *)&qword_140C5AD40 + 12) = *(_OWORD *)(a1 + 200);
    *a2 = sub_140996CE0;
    a2[1] = sub_1403DBCD0;
    a2[2] = sub_140996D60;
    a2[3] = sub_140862D20;
    a2[4] = sub_140996C60;
    a2[5] = sub_140996C10;
    a2[6] = sub_140996DC0;
    a2[7] = sub_1408651F0;
    a2[8] = sub_1407FE700;
    a2[9] = sub_140996EE0;
    a2[10] = sub_140996F70;
    a2[11] = sub_1405D6AC0;
    a2[12] = sub_140865430;
    a2[13] = sub_140854E60;
    a2[14] = sub_1408823C0;
    a2[15] = sub_1408310F0;
    a2[16] = sub_140996B90;
    a2[17] = sub_1405C8960;
    a2[18] = sub_14085EFD0;
    a2[19] = sub_140828DE0;
    sub_140A47CF8(&qword_140C5AD40 + 16, 128LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
