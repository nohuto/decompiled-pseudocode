/*
 * XREFs of MiInitializeWowPeb @ 0x1407A59AC
 * Callers:
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiCreatePebOrTeb @ 0x1406AB22C (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1407A5E30 (MmCheckImageMapping.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  _WORD *v7; // rsi
  char v8; // di
  char v9; // al
  __int64 result; // rax
  _WORD *v11; // rax
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // al
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  char v21; // al
  int v22; // eax
  ULONG Size; // [rsp+24h] [rbp-44h] BYREF
  unsigned int *v24; // [rsp+28h] [rbp-40h]
  __int64 v25[7]; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN MappedAsImage; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v5 = a2;
  v25[0] = 0LL;
  MappedAsImage = 0;
  v24 = 0LL;
  v7 = (_WORD *)(a3 + 2412);
  if ( !*(_QWORD *)(a3 + 1408) )
  {
    v8 = 1;
LABEL_43:
    v16 = 2LL;
    goto LABEL_18;
  }
  if ( *v7 == 332 || *v7 == 452 )
  {
    v8 = 1;
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v8 = 1;
  }
  if ( !v9 )
    goto LABEL_43;
  result = MmCheckImageMapping(a3, &MappedAsImage);
  if ( (int)result < 0 )
    return result;
  v11 = RtlImageDirectoryEntryToData(*(PVOID *)(a3 + 1312), MappedAsImage, 0xAu, &Size);
  v12 = v11;
  v24 = (unsigned int *)v11;
  if ( v11 )
  {
    if ( ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    a2 = v24[12];
    v13 = a2;
    if ( (a2 & qword_140D1EFE8[*(unsigned __int16 *)(v27 + 8)]) != a2 )
      v13 = 0LL;
    *(_QWORD *)v27 = v13;
    v12 = v24;
  }
  *(_DWORD *)a1 = *(unsigned __int16 *)(v5 + 92);
  *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(v5 + 72);
  *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(v5 + 74);
  if ( *(_DWORD *)(v5 + 76) )
  {
    if ( v12 )
    {
      v14 = v12[26];
      if ( v14 )
        *(_WORD *)(a1 + 26) = v14;
    }
    v15 = *(_DWORD *)(v5 + 76);
    *(_DWORD *)(a1 + 12) = (unsigned __int8)v15;
    *(_DWORD *)(a1 + 16) = BYTE1(v15);
    *(_WORD *)(a1 + 24) = HIWORD(v15);
    *(_DWORD *)(a1 + 20) = (v15 ^ 0xBFFFFFFF) >> 30;
  }
  v16 = 1LL;
LABEL_18:
  result = MiCreatePebOrTeb(v16, a2, v25);
  if ( (int)result >= 0 )
  {
    v17 = v25[0];
    **(_QWORD **)(a3 + 1408) = v25[0];
    if ( *(_QWORD *)(a3 + 1408) )
    {
      if ( *v7 == 332 || (v18 = 0, *v7 == 452) )
        v18 = 1;
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 32);
        if ( v19 > 0x40000000 )
        {
          v19 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        v20 = *(_QWORD *)(a1 + 40);
        if ( v20 > v19 )
          v20 = 0x2000LL;
        *(_QWORD *)(a1 + 40) = v20;
      }
    }
    if ( !*(_QWORD *)(a3 + 1408) )
      goto LABEL_36;
    if ( *v7 == 332 || (v21 = 0, *v7 == 452) )
      v21 = 1;
    if ( !v21 )
LABEL_36:
      v8 = 0;
    v22 = *(_DWORD *)(a1 + 12);
    if ( v8 )
    {
      *(_DWORD *)(v17 + 164) = v22;
      *(_DWORD *)(v17 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v17 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v17 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v17 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v17 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v17 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v17 + 104) = NtGlobalFlag;
      *(_DWORD *)(v17 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v17 + 112) = qword_140C65B10;
      *(_DWORD *)(v17 + 520) = dword_140D1D1E8;
      *(_DWORD *)(v17 + 128) = qword_140D1D1F8;
      *(_DWORD *)(v17 + 132) = qword_140D1D1F0;
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
      *(_DWORD *)(v17 + 280) = v22;
      *(_DWORD *)(v17 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v17 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v17 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v17 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v17 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v17 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v17 + 188) = NtGlobalFlag;
      *(_DWORD *)(v17 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v17 + 192) = qword_140C65B10;
      *(_QWORD *)(v17 + 792) = (unsigned int)dword_140D1D1E8;
      *(_QWORD *)(v17 + 216) = qword_140D1D1F8;
      *(_QWORD *)(v17 + 224) = qword_140D1D1F0;
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
