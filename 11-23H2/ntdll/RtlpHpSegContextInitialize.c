/*
 * XREFs of RtlpHpSegContextInitialize @ 0x1800662D4
 * Callers:
 *     RtlpHpHeapCreate @ 0x180065EE8 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x18006462C (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x180123C74 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180123CD0 (RtlpHpSegMgrVaCtxInsert.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        _WORD *a7,
        __int128 *a8,
        unsigned int a9)
{
  __int64 v10; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int v16; // edx
  __int64 v17; // rdx
  __int128 *v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx

  v10 = a2;
  memset_thunk_772440563353939046(a1, 0, 0xC0uLL);
  *(_WORD *)((char *)a1 + 11) = 1031;
  v13 = v10 - 1;
  v14 = (unsigned int)v10 >> 8;
  *a1 = ~v13;
  _BitScanReverse((unsigned int *)&v13, v14);
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v15, (unsigned int)v14 >> 12);
  *((_BYTE *)a1 + 9) = v15;
  *((_BYTE *)a1 + 10) = (v14 + 0x1FFF) / (unsigned __int64)(unsigned int)v14;
  v16 = ((~*(_DWORD *)a1 + (((_DWORD)v14 - 1) & (unsigned int)(v14 + 0x1FFF)) - (unsigned int)v14 - 8190) >> 1)
      - ((v14 - 1) & ((~*(_DWORD *)a1 + (((_DWORD)v14 - 1) & (unsigned int)(v14 + 0x1FFF)) - (unsigned int)v14 - 8190) >> 1));
  a1[8] = 0LL;
  *((_DWORD *)a1 + 4) = v16;
  v17 = a9;
  *((_BYTE *)a1 + 13) = a9;
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  LOWORD(v13) = (_WORD)a7 - (_WORD)a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  v18 = a8;
  *((_WORD *)a1 + 10) = v13;
  a1[3] = a4;
  v19 = *v18;
  *((_WORD *)a1 + 11) = a6 - (_WORD)a1;
  a1[4] = a5;
  v20 = *(_QWORD *)v18 >> 8;
  a1[7] = a3;
  *(_OWORD *)(a1 + 5) = v19;
  if ( (_BYTE)v20 == 3 || (v21 = *(_QWORD *)v18 >> 8, (_BYTE)v21 == 2) )
  {
    *((_BYTE *)a1 + 13) |= 0x10u;
    LOBYTE(v21) = *((_BYTE *)a1 + 13) & 0xF8 | 3;
    *((_BYTE *)a1 + 13) = v21;
    if ( (v17 & 0x20) != 0 )
    {
      RtlpHpQueryVA(a3, v17, &a7, &a9);
      RtlpHpSegMgrVaCtxInitialize(v22, a3, (unsigned int)-*(_DWORD *)a1);
      *a7 = *a7 & 0x7800 | 0x8001;
      LOBYTE(v21) = RtlpHpSegMgrVaCtxInsert(a1, a3);
    }
  }
  return v21;
}
