/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1C00849B4
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C0084950 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C000BA78 (RaidRemoveTrailingBlanks.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  __int64 v3; // rsi
  unsigned int v7; // r14d
  unsigned __int8 v8; // cl
  bool v9; // al
  __int64 v10; // rax
  __int128 *v11; // rdx
  __int128 v12; // xmm0
  int v13; // eax
  size_t v14; // rax
  _OWORD *v15; // rdx
  char *v16; // rcx
  __int64 result; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm1
  size_t v21; // rbx
  size_t v22; // r8
  int v23; // ecx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  _OWORD *v37; // rcx
  __int128 v38; // xmm0
  _OWORD *v39; // rdx
  __int64 v40; // rax
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  _QWORD Src[50]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  memset(Src, 0, 0x18CuLL);
  v7 = *a3;
  Src[0] = 0x18C00000028LL;
  if ( v7 > 0x18C )
    v7 = 396;
  if ( (*(_BYTE *)(a1 + 128) & 4) != 0 )
  {
    LODWORD(Src[1]) = 0x1000000;
  }
  else if ( v3 )
  {
    v8 = *(_BYTE *)(v3 + 1);
    LOBYTE(Src[1]) = *(_BYTE *)v3 & 0x1F;
    BYTE1(Src[1]) = v8 & 0x7F;
    v9 = (*(_BYTE *)(v3 + 7) & 2) != 0;
    BYTE2(Src[1]) = v8 >> 7;
    BYTE3(Src[1]) = v9;
  }
  HIDWORD(Src[3]) = *(_DWORD *)(a1 + 3296);
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 8) )
    {
      v29 = *(_OWORD *)(v10 + 8);
      HIDWORD(Src[1]) = 40;
      *(_OWORD *)&Src[5] = v29;
    }
    v24 = *(_OWORD *)(v10 + 25);
    Src[2] = 0x7A00000039LL;
    v25 = *(_OWORD *)(v10 + 41);
    *(_OWORD *)((char *)&Src[7] + 1) = v24;
    v26 = *(_OWORD *)(v10 + 57);
    *(_OWORD *)((char *)&Src[9] + 1) = v25;
    v27 = *(_OWORD *)(v10 + 73);
    *(_OWORD *)((char *)&Src[11] + 1) = v26;
    v28 = *(_OWORD *)(v10 + 90);
    *(_OWORD *)((char *)&Src[13] + 1) = v27;
    *(_OWORD *)((char *)&Src[15] + 2) = v28;
    if ( !*(_WORD *)(a1 + 114) )
      goto LABEL_9;
    LODWORD(Src[3]) = 139;
    memset((char *)&Src[17] + 3, 0, 0x100uLL);
    v14 = *(unsigned __int16 *)(a1 + 112);
    v15 = *(_OWORD **)(a1 + 120);
    if ( (unsigned __int16)v14 <= 0x100u )
    {
      v16 = (char *)&Src[17] + 3;
      goto LABEL_12;
    }
    v30 = (_OWORD *)((char *)&Src[17] + 3);
LABEL_29:
    v31 = v15[1];
    *v30 = *v15;
    v32 = v15[2];
    v30[1] = v31;
    v33 = v15[3];
    v30[2] = v32;
    v34 = v15[4];
    v30[3] = v33;
    v35 = v15[5];
    v30[4] = v34;
    v36 = v15[6];
    v30[5] = v35;
    v30[6] = v36;
    v37 = v30 + 8;
    v38 = v15[7];
    v39 = v15 + 8;
    *(v37 - 1) = v38;
    v40 = *((_QWORD *)v39 + 14);
    v41 = v39[1];
    *v37 = *v39;
    v42 = v39[2];
    v37[1] = v41;
    v43 = v39[3];
    v37[2] = v42;
    v44 = v39[4];
    v37[3] = v43;
    v45 = v39[5];
    v37[4] = v44;
    v46 = v39[6];
    v37[5] = v45;
    v37[6] = v46;
    *((_QWORD *)v37 + 14) = v40;
    *((_DWORD *)v37 + 30) = *((_DWORD *)v39 + 30);
    *((_WORD *)v37 + 62) = *((_WORD *)v39 + 62);
    *((_BYTE *)v37 + 126) = *((_BYTE *)v39 + 126);
    BYTE6(Src[40]) = 0;
    goto LABEL_13;
  }
  v11 = *(__int128 **)(a1 + 144);
  if ( !v11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0 )
  {
    v12 = *(_OWORD *)(v3 + 16);
    Src[5] = *(_QWORD *)(v3 + 8);
    v13 = *(_DWORD *)(v3 + 32);
    *(_OWORD *)((char *)&Src[6] + 1) = v12;
    *(_DWORD *)((char *)&Src[8] + 2) = v13;
    HIDWORD(Src[1]) = 40;
    Src[2] = 0x4200000031LL;
    if ( !*(_WORD *)(a1 + 114) )
    {
LABEL_9:
      LODWORD(Src[3]) = 0;
      goto LABEL_13;
    }
    LODWORD(Src[3]) = 71;
    memset((char *)&Src[8] + 7, 0, 0x100uLL);
    v14 = *(unsigned __int16 *)(a1 + 112);
    v15 = *(_OWORD **)(a1 + 120);
    if ( (unsigned __int16)v14 <= 0x100u )
    {
      v16 = (char *)&Src[8] + 7;
LABEL_12:
      memmove(v16, v15, v14);
      goto LABEL_13;
    }
    v30 = (_OWORD *)((char *)&Src[8] + 7);
    goto LABEL_29;
  }
  v18 = *v11;
  v19 = *(_QWORD *)((char *)v11 + 41);
  v20 = v11[1];
  Src[2] = 0x5100000028LL;
  *(_OWORD *)&Src[5] = v18;
  *(_QWORD *)((char *)&Src[10] + 1) = v19;
  Src[9] = *((_QWORD *)v11 + 4);
  *(_OWORD *)&Src[7] = v20;
  if ( !*(_WORD *)(a1 + 114) )
    goto LABEL_9;
  v21 = *(unsigned __int16 *)(a1 + 112);
  v22 = 20LL;
  LODWORD(Src[3]) = 90;
  if ( (unsigned __int16)v21 < 0x14u )
    v22 = v21;
  memmove((char *)&Src[11] + 2, *(const void **)(a1 + 120), v22);
  v23 = 21;
  if ( v21 + 1 < 0x15 )
    v23 = v21 + 1;
  RaidRemoveTrailingBlanks((__int64)&Src[11] + 2, v23);
LABEL_13:
  memmove(a2, Src, v7);
  result = 0LL;
  *a3 = v7;
  return result;
}
