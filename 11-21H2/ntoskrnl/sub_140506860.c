/*
 * XREFs of sub_140506860 @ 0x140506860
 * Callers:
 *     sub_140506410 @ 0x140506410 (sub_140506410.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140505C24 @ 0x140505C24 (sub_140505C24.c)
 *     sub_140505DAC @ 0x140505DAC (sub_140505DAC.c)
 *     WheaInitializeRecordHeader @ 0x140645400 (WheaInitializeRecordHeader.c)
 */

__int64 __fastcall sub_140506860(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  __int64 v10; // r13
  unsigned int v11; // r15d
  _OWORD *v12; // rbp
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v19; // eax
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v24; // [rsp+60h] [rbp+8h]
  unsigned int v25; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v25 = 0;
  memset((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader(a3);
  *(_WORD *)(a3 + 10) = 5;
  v10 = a3 + v9;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  v24 = v9;
  v11 = v9 + 192;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) ^= ((unsigned __int8)*(_DWORD *)(a3 + 104) ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  if ( v11 > a4 )
    return (unsigned int)-1073741789;
  sub_14042A5E0(a3 + 128, v10);
  v12 = (_OWORD *)(a2 + 80);
  sub_140505C24(a2 + 80, v10);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v24;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v11 + 65 > a4 )
    return (unsigned int)-1073741789;
  sub_140505DAC(a2 + 80, (unsigned __int64 *)(a3 + v11), &v25);
  v13 = v25;
  *(_DWORD *)(a3 + 200) = v11;
  *(_DWORD *)(a3 + 204) = v13;
  v14 = v11 + v13;
  *(_WORD *)(a3 + 208) = 768;
  v15 = v11 + v13 + 292;
  *(_OWORD *)(a3 + 216) = xmmword_14003A5C0;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v15 > a4 )
    return (unsigned int)-1073741789;
  v16 = 2LL;
  v17 = (_OWORD *)(a3 + v14);
  do
  {
    *v17 = *v12;
    v17[1] = v12[1];
    v17[2] = v12[2];
    v17[3] = v12[3];
    v17[4] = v12[4];
    v17[5] = v12[5];
    v17[6] = v12[6];
    v17 += 8;
    v18 = v12[7];
    v12 += 8;
    *(v17 - 1) = v18;
    --v16;
  }
  while ( v16 );
  *v17 = *v12;
  v17[1] = v12[1];
  v19 = *((_DWORD *)v12 + 8);
  v20 = v15 + 39;
  *((_DWORD *)v17 + 8) = v19;
  *(_DWORD *)(a3 + 272) = v14;
  *(_DWORD *)(a3 + 276) = 292;
  *(_WORD *)(a3 + 280) = 768;
  *(_OWORD *)(a3 + 288) = xmmword_14003A590;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v15 + 39 > a4 )
    return (unsigned int)-1073741789;
  v21 = a3 + v15;
  *(_OWORD *)v21 = 0LL;
  *(_OWORD *)(v21 + 16) = 0LL;
  *(_DWORD *)(v21 + 32) = 0;
  *(_WORD *)(v21 + 36) = 0;
  *(_BYTE *)(v21 + 38) = 0;
  *(_DWORD *)(v21 + 1) |= 1u;
  *(_BYTE *)(v21 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v15;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = xmmword_14003A5F0;
  v22 = *(_DWORD *)(a2 + 8);
  if ( v22 + v20 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v20), (const void *)a2, v22);
    *(_DWORD *)(a3 + 416) = v20;
    *(_DWORD *)(a3 + 420) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 424) = 768;
    *(_OWORD *)(a3 + 432) = xmmword_14003A5A0;
    *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
