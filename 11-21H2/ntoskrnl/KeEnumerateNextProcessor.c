/*
 * XREFs of KeEnumerateNextProcessor @ 0x140294050
 * Callers:
 *     sub_14021C050 @ 0x14021C050 (sub_14021C050.c)
 *     sub_140235F70 @ 0x140235F70 (sub_140235F70.c)
 *     sub_1402396F0 @ 0x1402396F0 (sub_1402396F0.c)
 *     sub_14023A7D0 @ 0x14023A7D0 (sub_14023A7D0.c)
 *     sub_14023A820 @ 0x14023A820 (sub_14023A820.c)
 *     sub_14023B5A0 @ 0x14023B5A0 (sub_14023B5A0.c)
 *     sub_14023C6B0 @ 0x14023C6B0 (sub_14023C6B0.c)
 *     sub_140248E38 @ 0x140248E38 (sub_140248E38.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_140293320 @ 0x140293320 (sub_140293320.c)
 *     sub_140293BA0 @ 0x140293BA0 (sub_140293BA0.c)
 *     sub_140293CD0 @ 0x140293CD0 (sub_140293CD0.c)
 *     sub_1402D66F0 @ 0x1402D66F0 (sub_1402D66F0.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_1402DA81C @ 0x1402DA81C (sub_1402DA81C.c)
 *     sub_1403000B0 @ 0x1403000B0 (sub_1403000B0.c)
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     sub_1403CE6F8 @ 0x1403CE6F8 (sub_1403CE6F8.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     sub_1403CF218 @ 0x1403CF218 (sub_1403CF218.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     sub_1403DA43C @ 0x1403DA43C (sub_1403DA43C.c)
 *     sub_14051FFF8 @ 0x14051FFF8 (sub_14051FFF8.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 *     sub_140571A40 @ 0x140571A40 (sub_140571A40.c)
 *     sub_140571D50 @ 0x140571D50 (sub_140571D50.c)
 *     sub_140571FDC @ 0x140571FDC (sub_140571FDC.c)
 *     sub_140578454 @ 0x140578454 (sub_140578454.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     sub_14057C2F0 @ 0x14057C2F0 (sub_14057C2F0.c)
 *     sub_1405C6C1C @ 0x1405C6C1C (sub_1405C6C1C.c)
 *     sub_1405C7284 @ 0x1405C7284 (sub_1405C7284.c)
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 *     sub_1405C86F0 @ 0x1405C86F0 (sub_1405C86F0.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 *     sub_1405D6FBC @ 0x1405D6FBC (sub_1405D6FBC.c)
 *     sub_1405D7BF0 @ 0x1405D7BF0 (sub_1405D7BF0.c)
 *     sub_1405D7FF0 @ 0x1405D7FF0 (sub_1405D7FF0.c)
 *     sub_1405D997C @ 0x1405D997C (sub_1405D997C.c)
 *     sub_1406BE584 @ 0x1406BE584 (sub_1406BE584.c)
 *     sub_1406C800C @ 0x1406C800C (sub_1406C800C.c)
 *     sub_1406D0CB0 @ 0x1406D0CB0 (sub_1406D0CB0.c)
 *     sub_1407F9EBC @ 0x1407F9EBC (sub_1407F9EBC.c)
 *     sub_14081A760 @ 0x14081A760 (sub_14081A760.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140849DF0 @ 0x140849DF0 (sub_140849DF0.c)
 *     sub_14084A5BC @ 0x14084A5BC (sub_14084A5BC.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 *     sub_14098EB00 @ 0x14098EB00 (sub_14098EB00.c)
 *     sub_14098EC78 @ 0x14098EC78 (sub_14098EC78.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A59154 @ 0x140A59154 (sub_140A59154.c)
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 *     sub_140A68BE8 @ 0x140A68BE8 (sub_140A68BE8.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 *     sub_140B24034 @ 0x140B24034 (sub_140B24034.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = dword_140D105E0[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
    return 3221226021LL;
  }
}
