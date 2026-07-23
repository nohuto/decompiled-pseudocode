/*
 * XREFs of sub_1406D8E14 @ 0x1406D8E14
 * Callers:
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1406D9288 @ 0x1406D9288 (sub_1406D9288.c)
 *     sub_1407099A4 @ 0x1407099A4 (sub_1407099A4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406D8E14(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  _WORD *v6; // r14
  __int16 v8; // ax
  char v9; // si
  char v10; // al
  __int64 result; // rax
  _WORD *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int16 v18; // ax
  char v19; // al
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  char v22; // al
  int v23; // eax
  bool v24; // zf
  ULONG Size; // [rsp+24h] [rbp-44h] BYREF
  unsigned int *v26; // [rsp+28h] [rbp-40h]
  __int64 v27[7]; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN MappedAsImage; // [rsp+80h] [rbp+18h] BYREF

  v6 = a2;
  v27[0] = 0LL;
  MappedAsImage = 0;
  v26 = 0LL;
  if ( !*(_QWORD *)(a3 + 1408) )
  {
    v9 = 1;
LABEL_42:
    v16 = 2LL;
    goto LABEL_18;
  }
  v8 = *(_WORD *)(a3 + 2412);
  if ( v8 == 332 || v8 == 452 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = 1;
  }
  if ( !v10 )
    goto LABEL_42;
  result = sub_1406D9288(a3, &MappedAsImage);
  if ( (int)result < 0 )
    return result;
  v12 = RtlImageDirectoryEntryToData(*(PVOID *)(a3 + 1312), MappedAsImage, 0xAu, &Size);
  a2 = v12;
  v26 = (unsigned int *)v12;
  if ( v12 )
  {
    if ( ((unsigned __int8)v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = v26[12];
    if ( ((unsigned int)v13 & (unsigned __int64)qword_140D06E48[*(unsigned __int16 *)(a4 + 8)]) != v13 )
      v13 = 0LL;
    *(_QWORD *)a4 = v13;
    a2 = v26;
  }
  *(_DWORD *)a1 = (unsigned __int16)v6[46];
  *(_DWORD *)(a1 + 4) = (unsigned __int16)v6[36];
  *(_DWORD *)(a1 + 8) = (unsigned __int16)v6[37];
  v14 = *((_DWORD *)v6 + 19);
  if ( v14 )
  {
    if ( a2 )
    {
      v15 = a2[26];
      if ( v15 )
      {
        *(_WORD *)(a1 + 26) = v15;
        v14 = *((_DWORD *)v6 + 19);
      }
    }
    *(_DWORD *)(a1 + 12) = (unsigned __int8)v14;
    *(_DWORD *)(a1 + 16) = BYTE1(v14);
    *(_WORD *)(a1 + 24) = HIWORD(v14);
    *(_DWORD *)(a1 + 20) = (v14 ^ 0xBFFFFFFF) >> 30;
  }
  v16 = 1LL;
LABEL_18:
  result = sub_1407099A4(v16, a2, v27);
  if ( (int)result >= 0 )
  {
    v17 = v27[0];
    **(_QWORD **)(a3 + 1408) = v27[0];
    if ( *(_QWORD *)(a3 + 1408) )
    {
      v18 = *(_WORD *)(a3 + 2412);
      if ( v18 == 332 || (v24 = v18 == 452, v19 = 0, v24) )
        v19 = 1;
      if ( v19 )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 > 0x40000000 )
        {
          v20 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        if ( *(_QWORD *)(a1 + 40) > v20 )
          *(_QWORD *)(a1 + 40) = 0x2000LL;
      }
    }
    if ( !*(_QWORD *)(a3 + 1408) )
      goto LABEL_35;
    v21 = *(_WORD *)(a3 + 2412);
    if ( v21 == 332 || (v24 = v21 == 452, v22 = 0, v24) )
      v22 = 1;
    if ( !v22 )
LABEL_35:
      v9 = 0;
    v23 = *(_DWORD *)(a1 + 12);
    if ( v9 )
    {
      *(_DWORD *)(v17 + 164) = v23;
      *(_DWORD *)(v17 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v17 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v17 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v17 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v17 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v17 + 100) = dword_140D06884;
      *(_DWORD *)(v17 + 104) = NtGlobalFlag;
      *(_DWORD *)(v17 + 1144) = dword_140C4E7B0;
      *(_QWORD *)(v17 + 112) = qword_140C50650;
      *(_DWORD *)(v17 + 520) = dword_140D051D8;
      *(_DWORD *)(v17 + 128) = qword_140D051E8;
      *(_DWORD *)(v17 + 132) = qword_140D051E0;
      *(_DWORD *)(v17 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v17 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v17 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v17 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v17 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v17 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v17 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v17 + 8) = *(_DWORD *)(a1 + 112);
      *(_WORD *)(v17 + 552) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v17 + 554) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v17 + 556) = *(_WORD *)(a1 + 124);
      *(_DWORD *)(v17 + 1136) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v17 + 1140) = *(_DWORD *)(a1 + 136);
    }
    else
    {
      *(_DWORD *)(v17 + 280) = v23;
      *(_DWORD *)(v17 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v17 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v17 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v17 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v17 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v17 + 184) = dword_140D06884;
      *(_DWORD *)(v17 + 188) = NtGlobalFlag;
      *(_DWORD *)(v17 + 1988) = dword_140C4E7B0;
      *(_QWORD *)(v17 + 192) = qword_140C50650;
      *(_QWORD *)(v17 + 792) = (unsigned int)dword_140D051D8;
      *(_QWORD *)(v17 + 216) = qword_140D051E8;
      *(_QWORD *)(v17 + 224) = qword_140D051E0;
      *(_DWORD *)(v17 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v17 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v17 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v17 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v17 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v17 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(a1 + 112);
      *(_WORD *)(v17 + 844) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v17 + 846) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v17 + 848) = *(_WORD *)(a1 + 124);
      *(_QWORD *)(v17 + 1976) = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(v17 + 1984) = *(_DWORD *)(a1 + 136);
    }
    return 0LL;
  }
  return result;
}
