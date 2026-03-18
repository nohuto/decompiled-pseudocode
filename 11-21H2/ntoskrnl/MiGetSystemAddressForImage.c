/*
 * XREFs of MiGetSystemAddressForImage @ 0x140761A2C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1402DBCA8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403B529C (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReleasePrivilegedPtes @ 0x1406EBA70 (MiReleasePrivilegedPtes.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     MiBytesToMapSystemImage @ 0x1406F57B8 (MiBytesToMapSystemImage.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiReservePrivilegedPtes @ 0x140761C34 (MiReservePrivilegedPtes.c)
 *     MiFindDataTableEntryBySection @ 0x140761C98 (MiFindDataTableEntryBySection.c)
 *     MiImageSuitableForSystem @ 0x140761CE0 (MiImageSuitableForSystem.c)
 *     MiReturnSystemImageAddress @ 0x140761FC0 (MiReturnSystemImageAddress.c)
 *     MiSelectSystemImageAddress @ 0x140762174 (MiSelectSystemImageAddress.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  int v11; // r11d
  int v12; // r13d
  __int64 v13; // r8
  int v14; // r12d
  unsigned int v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // edx
  unsigned int v23; // eax
  _DWORD v24[2]; // [rsp+30h] [rbp-148h] BYREF
  int v25; // [rsp+38h] [rbp-140h]
  int v26; // [rsp+3Ch] [rbp-13Ch]
  __int64 PteAddress; // [rsp+40h] [rbp-138h]
  ULONG_PTR v28; // [rsp+48h] [rbp-130h]
  int v29; // [rsp+50h] [rbp-128h]
  int v30; // [rsp+58h] [rbp-120h]
  unsigned __int64 v31; // [rsp+60h] [rbp-118h]
  ULONG_PTR v32[10]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v33[14]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = a2;
  v30 = a2;
  v24[0] = 0;
  memset(v33, 0, sizeof(v33));
  memset(v32, 0, sizeof(v32));
  *a3 = 1;
  v6 = MiSectionControlArea(a1);
  v31 = v6;
  v7 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v8 = v7 >> 12;
  v29 = v7 >> 12;
  v10 = MiImageSuitableForSystem(v6, v24);
  if ( v10 && MiFindDataTableEntryBySection(v9) )
  {
    *a3 = 0;
    v11 = 1;
  }
  if ( v10 )
  {
    if ( v11 != 1 && (v4 & 2) == 0 )
    {
      v12 = v4 & 1;
      if ( ((v4 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v10) == 1)
        && ((v4 & 1) != 0 || (unsigned int)MiGetSystemRegionType(v10) != 1) )
      {
        PteAddress = MiGetPteAddress(v10);
        if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) >= 0 )
        {
          v14 = 0;
          goto LABEL_13;
        }
        return 0LL;
      }
    }
  }
  v12 = v4 & 1;
  LODWORD(PteAddress) = v12;
  v16 = v12 + 1;
  v24[1] = v16;
  if ( !v24[0] )
  {
    v26 = MiMapImageInSystemSpace((__int64 *)v6, 3, (__int64)v32);
    if ( v26 < 0 )
      return 0LL;
    v28 = v32[0];
    v25 = 0;
    v18 = RtlImageNtHeader(v32[0]);
    LODWORD(v28) = *(_DWORD *)(v28 + 60);
    v25 = v28;
    if ( *(_WORD *)(v18 + 24) == 523 )
    {
      LOWORD(v33[6]) = 523;
      LODWORD(v33[1]) = *(_DWORD *)(v18 + 60);
      HIDWORD(v33[1]) = *(_DWORD *)(v18 + 56);
      LODWORD(v33[2]) = *(_DWORD *)(v18 + 80);
      v19 = *(_DWORD *)(v18 + 128);
      HIDWORD(v33[2]) = v19;
      v33[0] = *(_QWORD *)(v18 + 48);
      LODWORD(v33[3]) = *(_DWORD *)(v18 + 84);
      HIDWORD(v33[3]) = *(_DWORD *)(v18 + 40);
      v33[4] = *(_QWORD *)(v18 + 96);
      v33[5] = *(_QWORD *)(v18 + 104);
      WORD1(v33[6]) = *(_WORD *)(v18 + 92);
      HIDWORD(v33[6]) = *(_DWORD *)(v18 + 72);
      LODWORD(v33[7]) = *(_DWORD *)(v18 + 64);
      WORD2(v33[7]) = *(_WORD *)(v18 + 94);
      LODWORD(v33[8]) = *(_DWORD *)(v18 + 88);
      HIDWORD(v33[8]) = *(_DWORD *)(v18 + 28);
      v33[13] = 0LL;
      v20 = *(_DWORD *)(v18 + 132);
      if ( v20 > 6 && *(_DWORD *)(v18 + 184) )
      {
        v33[13] = *(_QWORD *)(v18 + 184);
        v20 = *(_DWORD *)(v18 + 132);
      }
      if ( v20 > 0xC )
      {
        v33[9] = *(_QWORD *)(v18 + 232);
        v20 = *(_DWORD *)(v18 + 132);
      }
      if ( v20 <= 0xE )
      {
        v33[10] = 0LL;
      }
      else
      {
        v33[10] = *(_QWORD *)(v18 + 248);
        if ( *(_DWORD *)(v18 + 248) && *(_DWORD *)(v18 + 252) )
          HIDWORD(v33[2]) = v19 | 1;
      }
      if ( *(_DWORD *)(v18 + 132) <= 5u )
        v33[11] = 0LL;
      else
        v33[11] = *(_QWORD *)(v18 + 176);
      if ( *(_DWORD *)(v18 + 132) > 0xAu )
      {
        LODWORD(v33[12]) = *(_DWORD *)(v18 + 216);
        v21 = *(_DWORD *)(v18 + 220);
LABEL_56:
        HIDWORD(v33[12]) = v21;
LABEL_58:
        MiUnmapImageInSystemSpace(v32);
        if ( v26 < 0 )
          return 0LL;
        if ( (int)MiRelocateImage(*(_QWORD *)v6, (__int64)v33, v28, v16, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v6, v24);
        if ( !v24[0] && (*(_BYTE *)(v6 + 62) & 0xC) == 0 )
          return 0LL;
        goto LABEL_16;
      }
    }
    else
    {
      LOWORD(v33[6]) = *(_WORD *)(v18 + 24);
      LODWORD(v33[1]) = *(_DWORD *)(v18 + 60);
      HIDWORD(v33[1]) = *(_DWORD *)(v18 + 56);
      LODWORD(v33[2]) = *(_DWORD *)(v18 + 80);
      v22 = *(_DWORD *)(v18 + 112);
      HIDWORD(v33[2]) = v22;
      v33[0] = *(unsigned int *)(v18 + 52);
      LODWORD(v33[3]) = *(_DWORD *)(v18 + 84);
      HIDWORD(v33[3]) = *(_DWORD *)(v18 + 40);
      v33[4] = *(unsigned int *)(v18 + 96);
      v33[5] = *(unsigned int *)(v18 + 100);
      WORD1(v33[6]) = *(_WORD *)(v18 + 92);
      HIDWORD(v33[6]) = *(_DWORD *)(v18 + 72);
      LODWORD(v33[7]) = *(_DWORD *)(v18 + 64);
      WORD2(v33[7]) = *(_WORD *)(v18 + 94);
      LODWORD(v33[8]) = *(_DWORD *)(v18 + 88);
      HIDWORD(v33[8]) = *(_DWORD *)(v18 + 28);
      v33[13] = 0LL;
      v23 = *(_DWORD *)(v18 + 116);
      if ( v23 > 6 && *(_DWORD *)(v18 + 168) )
      {
        v33[13] = *(_QWORD *)(v18 + 168);
        v23 = *(_DWORD *)(v18 + 116);
      }
      if ( v23 > 0xC )
      {
        v33[9] = *(_QWORD *)(v18 + 216);
        v23 = *(_DWORD *)(v18 + 116);
      }
      if ( v23 <= 0xE )
      {
        v33[10] = 0LL;
      }
      else
      {
        v33[10] = *(_QWORD *)(v18 + 232);
        if ( *(_DWORD *)(v18 + 232) && *(_DWORD *)(v18 + 236) )
          HIDWORD(v33[2]) = v22 | 1;
      }
      if ( *(_DWORD *)(v18 + 116) <= 5u )
        v33[11] = 0LL;
      else
        v33[11] = *(_QWORD *)(v18 + 160);
      if ( *(_DWORD *)(v18 + 116) > 0xAu )
      {
        LODWORD(v33[12]) = *(_DWORD *)(v18 + 200);
        v21 = *(_DWORD *)(v18 + 204);
        goto LABEL_56;
      }
    }
    v33[12] = 0LL;
    goto LABEL_58;
  }
LABEL_16:
  v17 = MiSelectSystemImageAddress(v16, (unsigned int)v8);
  v10 = v17;
  if ( v17 )
  {
    PteAddress = MiGetPteAddress(v17);
    if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) < 0 )
    {
LABEL_64:
      MiReturnSystemImageAddress(v10, (unsigned int)((_DWORD)v8 << 12));
      return 0LL;
    }
    v14 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v6, v10) )
    {
LABEL_63:
      MiReleasePrivilegedPtes();
      goto LABEL_64;
    }
LABEL_13:
    if ( !v12 || (int)MiSessionInsertImage(v10, (__int64 *)v6, v13) >= 0 )
      return v10;
    if ( v14 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v10, 1);
    goto LABEL_63;
  }
  return 0LL;
}
