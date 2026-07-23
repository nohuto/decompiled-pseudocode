/*
 * XREFs of sub_14082A324 @ 0x14082A324
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1403C2378 @ 0x1403C2378 (sub_1403C2378.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A59FA4 @ 0x140A59FA4 (sub_140A59FA4.c)
 */

__int64 __fastcall sub_14082A324(unsigned __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  KPCR *Pcr; // rbx
  unsigned int v8; // edi
  __int16 v10; // ax
  unsigned __int64 v11; // r15
  const void *v12; // rdx
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r10
  _OWORD *v18; // rax
  int v19; // ecx
  int v20; // eax
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  char v24; // al
  unsigned __int64 v25; // rax
  _OWORD *v27; // rcx
  __int64 v28; // r9
  __int128 v29; // xmm1
  __int128 v30; // xmm0

  Pcr = KeGetPcr();
  v8 = (((*(_DWORD *)(a4 + 16) - 1) << 6) + 49343) & 0xFFFFFFC0;
  memset((void *)a3, 0, *(unsigned int *)(a4 + 4));
  memset(a1, 0, 0x5C0uLL);
  v10 = HIWORD(Pcr[1].PcrAlign1[17]);
  v11 = a3 + *(unsigned int *)(a4 + 24);
  a1[11] = v11;
  *((_WORD *)a1 + 43) = v10;
  memmove((void *)v11, *(const void **)&Pcr[1].PcrAlign1[18], HIWORD(Pcr[1].PcrAlign1[17]) + 1LL);
  v12 = qword_140D3CDC0;
  *((_WORD *)a1 + 51) = HIWORD(Pcr[1].PcrAlign1[21]);
  v13 = (void *)(a3 + *(unsigned int *)(a4 + 28));
  a1[13] = (unsigned __int64)v13;
  memmove(v13, v12, (unsigned int)dword_140C54EE4);
  v14 = v11 - 8112;
  *(_BYTE *)(a3 + 82) = *(_BYTE *)(a4 + 12);
  *(_DWORD *)(a3 + 420) = *(_DWORD *)(a4 + 12);
  v15 = a3 + v8;
  *(_DWORD *)(a3 + 452) = *((_DWORD *)KeGetCurrentPrcb() + 17);
  *(_QWORD *)(a3 + 11904) = *((_QWORD *)KeGetCurrentPrcb() + 1440);
  *(_QWORD *)(v11 - 8000) = a3;
  *(_WORD *)(v11 + 66) = v11 - 8112;
  *(_BYTE *)(v11 + 68) = (unsigned int)(v11 - 8112) >> 16;
  *(_BYTE *)(v11 + 71) = (unsigned int)(v11 - 8112) >> 24;
  *(_DWORD *)(v11 + 72) = (v11 - 8112) >> 32;
  *(_QWORD *)(v14 + 36) = *(_QWORD *)(a4 + 72);
  *(_QWORD *)(v14 + 44) = *(_QWORD *)(a4 + 80);
  *(_QWORD *)(v14 + 60) = *(_QWORD *)(a4 + 88);
  *(_QWORD *)(v14 + 52) = *(_QWORD *)(a4 + 64);
  v16 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(v16 - 40) = &loc_1404205B0;
  *(_QWORD *)(a3 + 35672) = *(_QWORD *)(a4 + 48);
  *(_QWORD *)(a3 + 33768) = v16 - 80;
  *(_QWORD *)(v14 + 4) = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(v15 + 576) = v15 + 2304;
  *(_QWORD *)(v15 + 552) = v15 + 2568;
  v17 = *(unsigned int *)(a4 + 8);
  v18 = (_OWORD *)(0x140000000LL + 280 * v17 + 13884864);
  if ( (_OWORD *)qword_140D31700[v17] == v18 )
  {
    v27 = (_OWORD *)(v15 + 2880);
    v28 = 2LL;
    do
    {
      *v27 = *v18;
      v27[1] = v18[1];
      v27[2] = v18[2];
      v27[3] = v18[3];
      v27[4] = v18[4];
      v27[5] = v18[5];
      v27[6] = v18[6];
      v27 += 8;
      v29 = v18[7];
      v18 += 8;
      *(v27 - 1) = v29;
      --v28;
    }
    while ( v28 );
    v30 = *v18;
    qword_140D31700[v17] = v15 + 2880;
    *v27 = v30;
    *((_QWORD *)v27 + 2) = *((_QWORD *)v18 + 2);
  }
  if ( !(unsigned int)sub_140A59FA4(a3 + 384, v11 - 12208) )
    return 0LL;
  sub_1403C2378(a3 + 384, (unsigned __int8 *)(a4 + 20), *(_DWORD *)a4);
  v19 = *(unsigned __int8 *)(a3 + 592) | (*(unsigned __int8 *)(a3 + 593) << 14) | 0x3C00;
  v20 = *(_DWORD *)(v11 + 84);
  *(_WORD *)(v11 + 80) = v19;
  *(_DWORD *)(v11 + 84) ^= (v19 ^ v20) & 0xF0000;
  v21 = (_QWORD *)(*(_QWORD *)(a4 + 32) - 8LL);
  *v21 = 0LL;
  a1[46] = (unsigned __int64)a2;
  a1[61] = (unsigned __int64)DriverEntry;
  a1[49] = (unsigned __int64)v21;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  a1[38] = 1572907LL;
  if ( dword_140D069F0 )
    *((_DWORD *)a1 + 77) = 0x40000;
  v22 = __readcr0();
  *a1 = v22;
  v23 = __readcr3();
  a1[2] = v23 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v11 + 69) = -119;
  v24 = *(_BYTE *)(v11 + 69);
  if ( byte_140D06888 )
    v24 = -117;
  *(_BYTE *)(v11 + 69) = v24;
  v25 = __readcr4();
  a1[3] = v25 & 0xFFFFFFFFFF7FFFFFuLL;
  a2[16] = *(_QWORD *)(a4 + 40);
  a2[18] = &unk_140D32B00;
  a2[19] = v15;
  a2[17] = a3 + 384;
  if ( (_BYTE)byte_140E01841 )
  {
    *(_QWORD *)(a2[30] + 3712LL) = *(_QWORD *)(a4 + 96);
    *(_QWORD *)(a2[30] + 3720LL) = *(_QWORD *)(a4 + 104);
    *(_QWORD *)(a2[30] + 3728LL) = *(_QWORD *)(a4 + 112);
  }
  return a3 + 384;
}
