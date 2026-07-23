/*
 * XREFs of sub_140298AF8 @ 0x140298AF8
 * Callers:
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140297A70 @ 0x140297A70 (sub_140297A70.c)
 *     sub_140298A3C @ 0x140298A3C (sub_140298A3C.c)
 *     sub_14029A6E0 @ 0x14029A6E0 (sub_14029A6E0.c)
 *     sub_14055DD48 @ 0x14055DD48 (sub_14055DD48.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140298AF8(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
    a2[4] = a1[131];
    a2[5] = a1[132];
    a2[6] = a1[129];
    a2[7] = a1[130];
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v3 + 48);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(v3 + 64);
  }
  return 1;
}
