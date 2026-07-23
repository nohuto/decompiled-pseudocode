/*
 * XREFs of MiGetSystemAddressForImage @ 0x140696090
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14020B168 (MiFreePrivateFixupEntryForSystemImage.c)
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403AB6D4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiImageSuitableForSystem @ 0x140696284 (MiImageSuitableForSystem.c)
 *     MiFindDataTableEntryBySection @ 0x1406962B4 (MiFindDataTableEntryBySection.c)
 *     MiBytesToMapSystemImage @ 0x140696AE4 (MiBytesToMapSystemImage.c)
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiSelectSystemImageAddress @ 0x140696DA4 (MiSelectSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiReturnSystemImageAddress @ 0x140698C68 (MiReturnSystemImageAddress.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // r12
  _BYTE *v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v10; // r11d
  int v11; // r13d
  __int64 v12; // r8
  int v13; // r12d
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  PIMAGE_NT_HEADERS v17; // rcx
  unsigned int LoaderFlags; // edx
  unsigned int Size; // eax
  int SizeOfHeapReserve; // edx
  int v21; // [rsp+30h] [rbp-148h] BYREF
  _DWORD *v22; // [rsp+38h] [rbp-140h]
  int v23; // [rsp+40h] [rbp-138h]
  int v24; // [rsp+44h] [rbp-134h]
  __int64 PteAddress; // [rsp+48h] [rbp-130h]
  int v26; // [rsp+50h] [rbp-128h]
  int v27; // [rsp+58h] [rbp-120h]
  int v28; // [rsp+60h] [rbp-118h]
  _BYTE *v29; // [rsp+68h] [rbp-110h]
  PVOID BaseOfImage[10]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v31[14]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = a2;
  v27 = a2;
  v21 = 0;
  memset(v31, 0, sizeof(v31));
  memset(BaseOfImage, 0, sizeof(BaseOfImage));
  *a3 = 1;
  v6 = (_BYTE *)MiSectionControlArea(a1);
  v29 = v6;
  v7 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v8 = v7 >> 12;
  v26 = v7 >> 12;
  v9 = MiImageSuitableForSystem(v6, &v21);
  if ( v9 && MiFindDataTableEntryBySection() )
  {
    *a3 = 0;
    v10 = 1;
  }
  if ( !v9
    || v10 == 1
    || (v4 & 2) != 0
    || (v11 = v4 & 1, (v4 & 1) != 0) && (unsigned int)MiGetSystemRegionType(v9) != 1
    || (v4 & 1) == 0 && (unsigned int)MiGetSystemRegionType(v9) == 1 )
  {
    v11 = v4 & 1;
    v28 = v11;
    v15 = v11 + 1;
    LODWORD(PteAddress) = v15;
    if ( v21 )
      goto LABEL_17;
    v24 = MiMapImageInSystemSpace(v6, 3LL, BaseOfImage);
    if ( v24 < 0 )
      return 0LL;
    v22 = BaseOfImage[0];
    v23 = 0;
    v17 = RtlImageNtHeader(BaseOfImage[0]);
    LODWORD(v22) = v22[15];
    v23 = (int)v22;
    LOWORD(v31[6]) = v17->OptionalHeader.Magic;
    LODWORD(v31[1]) = v17->OptionalHeader.FileAlignment;
    HIDWORD(v31[1]) = v17->OptionalHeader.SectionAlignment;
    LODWORD(v31[2]) = v17->OptionalHeader.SizeOfImage;
    if ( LOWORD(v31[6]) == 523 )
    {
      LoaderFlags = v17->OptionalHeader.LoaderFlags;
      HIDWORD(v31[2]) = LoaderFlags;
      v31[0] = v17->OptionalHeader.ImageBase;
      LODWORD(v31[3]) = v17->OptionalHeader.SizeOfHeaders;
      HIDWORD(v31[3]) = v17->OptionalHeader.AddressOfEntryPoint;
      v31[4] = v17->OptionalHeader.SizeOfStackReserve;
      v31[5] = v17->OptionalHeader.SizeOfStackCommit;
      WORD1(v31[6]) = v17->OptionalHeader.Subsystem;
      HIDWORD(v31[6]) = *(_DWORD *)&v17->OptionalHeader.MajorSubsystemVersion;
      LODWORD(v31[7]) = *(_DWORD *)&v17->OptionalHeader.MajorOperatingSystemVersion;
      WORD2(v31[7]) = v17->OptionalHeader.DllCharacteristics;
      LODWORD(v31[8]) = v17->OptionalHeader.CheckSum;
      HIDWORD(v31[8]) = v17->OptionalHeader.SizeOfCode;
      v31[13] = 0LL;
      if ( v17->OptionalHeader.NumberOfRvaAndSizes > 6 && v17->OptionalHeader.DataDirectory[6].VirtualAddress )
        v31[13] = v17->OptionalHeader.DataDirectory[6];
      if ( v17->OptionalHeader.NumberOfRvaAndSizes > 0xC )
        v31[9] = v17->OptionalHeader.DataDirectory[12];
      if ( v17->OptionalHeader.NumberOfRvaAndSizes <= 0xE )
      {
        v31[10] = 0LL;
      }
      else
      {
        v31[10] = v17->OptionalHeader.DataDirectory[14];
        if ( v17->OptionalHeader.DataDirectory[14].VirtualAddress && v17->OptionalHeader.DataDirectory[14].Size )
          HIDWORD(v31[2]) = LoaderFlags | 1;
      }
      if ( v17->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        v31[11] = 0LL;
      else
        v31[11] = v17->OptionalHeader.DataDirectory[5];
      if ( v17->OptionalHeader.NumberOfRvaAndSizes > 0xA )
      {
        LODWORD(v31[12]) = v17->OptionalHeader.DataDirectory[10].VirtualAddress;
        Size = v17->OptionalHeader.DataDirectory[10].Size;
LABEL_56:
        HIDWORD(v31[12]) = Size;
LABEL_58:
        MiUnmapImageInSystemSpace(BaseOfImage);
        if ( v24 < 0 )
          return 0LL;
        if ( (int)MiRelocateImage(*(_QWORD *)v6, (unsigned int)v31, (_DWORD)v22, v15, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v6, &v21);
        if ( !v21 && (v6[62] & 0xC) == 0 )
          return 0LL;
LABEL_17:
        v16 = MiSelectSystemImageAddress(v15, (unsigned int)v8);
        v9 = v16;
        if ( !v16 )
          return 0LL;
        PteAddress = MiGetPteAddress(v16);
        if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) >= 0 )
        {
          v13 = 1;
          if ( (unsigned int)MiAddPrivateFixupEntryForSystemImage(v6, v9) )
            goto LABEL_13;
          MiReleasePrivilegedPtes(PteAddress, (unsigned int)v8);
        }
LABEL_66:
        MiReturnSystemImageAddress(v9, (unsigned int)((_DWORD)v8 << 12));
        return 0LL;
      }
    }
    else
    {
      SizeOfHeapReserve = v17->OptionalHeader.SizeOfHeapReserve;
      HIDWORD(v31[2]) = SizeOfHeapReserve;
      v31[0] = HIDWORD(v17->OptionalHeader.ImageBase);
      LODWORD(v31[3]) = v17->OptionalHeader.SizeOfHeaders;
      HIDWORD(v31[3]) = v17->OptionalHeader.AddressOfEntryPoint;
      v31[4] = LODWORD(v17->OptionalHeader.SizeOfStackReserve);
      v31[5] = HIDWORD(v17->OptionalHeader.SizeOfStackReserve);
      WORD1(v31[6]) = v17->OptionalHeader.Subsystem;
      HIDWORD(v31[6]) = *(_DWORD *)&v17->OptionalHeader.MajorSubsystemVersion;
      LODWORD(v31[7]) = *(_DWORD *)&v17->OptionalHeader.MajorOperatingSystemVersion;
      WORD2(v31[7]) = v17->OptionalHeader.DllCharacteristics;
      LODWORD(v31[8]) = v17->OptionalHeader.CheckSum;
      HIDWORD(v31[8]) = v17->OptionalHeader.SizeOfCode;
      v31[13] = 0LL;
      if ( HIDWORD(v17->OptionalHeader.SizeOfHeapReserve) > 6 && v17->OptionalHeader.DataDirectory[4].VirtualAddress )
        v31[13] = v17->OptionalHeader.DataDirectory[4];
      if ( HIDWORD(v17->OptionalHeader.SizeOfHeapReserve) > 0xC )
        v31[9] = v17->OptionalHeader.DataDirectory[10];
      if ( HIDWORD(v17->OptionalHeader.SizeOfHeapReserve) <= 0xE )
      {
        v31[10] = 0LL;
      }
      else
      {
        v31[10] = v17->OptionalHeader.DataDirectory[12];
        if ( v17->OptionalHeader.DataDirectory[12].VirtualAddress && v17->OptionalHeader.DataDirectory[12].Size )
          HIDWORD(v31[2]) = SizeOfHeapReserve | 1;
      }
      if ( HIDWORD(v17->OptionalHeader.SizeOfHeapReserve) <= 5 )
        v31[11] = 0LL;
      else
        v31[11] = v17->OptionalHeader.DataDirectory[3];
      if ( HIDWORD(v17->OptionalHeader.SizeOfHeapReserve) > 0xA )
      {
        LODWORD(v31[12]) = v17->OptionalHeader.DataDirectory[8].VirtualAddress;
        Size = v17->OptionalHeader.DataDirectory[8].Size;
        goto LABEL_56;
      }
    }
    v31[12] = 0LL;
    goto LABEL_58;
  }
  PteAddress = MiGetPteAddress(v9);
  if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) < 0 )
    return 0LL;
  v13 = 0;
LABEL_13:
  if ( !v11 || (int)MiSessionInsertImage(v9, (__int64)v6, v12) >= 0 )
    return v9;
  if ( v13 == 1 )
    MiFreePrivateFixupEntryForSystemImage(v9, 1);
  MiReleasePrivilegedPtes(PteAddress, (unsigned int)v8);
  if ( v13 == 1 )
    goto LABEL_66;
  return 0LL;
}
