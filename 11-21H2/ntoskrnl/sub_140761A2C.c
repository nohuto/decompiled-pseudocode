/*
 * XREFs of sub_140761A2C @ 0x140761A2C
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1402DBCA8 @ 0x1402DBCA8 (sub_1402DBCA8.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403B529C @ 0x1403B529C (sub_1403B529C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EBA70 @ 0x1406EBA70 (sub_1406EBA70.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1406F57B8 @ 0x1406F57B8 (sub_1406F57B8.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_140761C34 @ 0x140761C34 (sub_140761C34.c)
 *     sub_140761C98 @ 0x140761C98 (sub_140761C98.c)
 *     sub_140761CE0 @ 0x140761CE0 (sub_140761CE0.c)
 *     sub_140761FC0 @ 0x140761FC0 (sub_140761FC0.c)
 *     sub_140762174 @ 0x140762174 (sub_140762174.c)
 */

unsigned __int64 __fastcall sub_140761A2C(__int64 a1, int a2, _DWORD *a3)
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
  PIMAGE_NT_HEADERS v18; // rcx
  DWORD LoaderFlags; // edx
  unsigned int NumberOfRvaAndSizes; // eax
  DWORD Size; // eax
  int SizeOfHeapReserve; // edx
  unsigned int SizeOfHeapReserve_high; // eax
  _DWORD v24[2]; // [rsp+30h] [rbp-148h] BYREF
  int v25; // [rsp+38h] [rbp-140h]
  int v26; // [rsp+3Ch] [rbp-13Ch]
  __int64 v27; // [rsp+40h] [rbp-138h]
  _DWORD *v28; // [rsp+48h] [rbp-130h]
  int v29; // [rsp+50h] [rbp-128h]
  int v30; // [rsp+58h] [rbp-120h]
  unsigned __int64 v31; // [rsp+60h] [rbp-118h]
  PVOID BaseOfImage[10]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v33[14]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = a2;
  v30 = a2;
  v24[0] = 0;
  memset(v33, 0, sizeof(v33));
  memset(BaseOfImage, 0, sizeof(BaseOfImage));
  *a3 = 1;
  v6 = sub_140287970(a1);
  v31 = v6;
  v7 = sub_1406F57B8((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v8 = v7 >> 12;
  v29 = v7 >> 12;
  v10 = sub_140761CE0(v6, v24);
  if ( v10 && sub_140761C98(v9) )
  {
    *a3 = 0;
    v11 = 1;
  }
  if ( v10 )
  {
    if ( v11 != 1 && (v4 & 2) == 0 )
    {
      v12 = v4 & 1;
      if ( ((v4 & 1) == 0 || (unsigned int)sub_14027B080(v10) == 1)
        && ((v4 & 1) != 0 || (unsigned int)sub_14027B080(v10) != 1) )
      {
        v27 = sub_140313C70(v10);
        if ( (int)sub_140761C34(v6, v27, (unsigned int)v8, v4 & 0x20) >= 0 )
        {
          v14 = 0;
          goto LABEL_13;
        }
        return 0LL;
      }
    }
  }
  v12 = v4 & 1;
  LODWORD(v27) = v12;
  v16 = v12 + 1;
  v24[1] = v16;
  if ( !v24[0] )
  {
    v26 = sub_1406F3884((__int64 *)v6, 3, (__int64)BaseOfImage);
    if ( v26 < 0 )
      return 0LL;
    v28 = BaseOfImage[0];
    v25 = 0;
    v18 = RtlImageNtHeader(BaseOfImage[0]);
    LODWORD(v28) = v28[15];
    v25 = (int)v28;
    if ( v18->OptionalHeader.Magic == 523 )
    {
      LOWORD(v33[6]) = 523;
      LODWORD(v33[1]) = v18->OptionalHeader.FileAlignment;
      HIDWORD(v33[1]) = v18->OptionalHeader.SectionAlignment;
      LODWORD(v33[2]) = v18->OptionalHeader.SizeOfImage;
      LoaderFlags = v18->OptionalHeader.LoaderFlags;
      HIDWORD(v33[2]) = LoaderFlags;
      v33[0] = v18->OptionalHeader.ImageBase;
      LODWORD(v33[3]) = v18->OptionalHeader.SizeOfHeaders;
      HIDWORD(v33[3]) = v18->OptionalHeader.AddressOfEntryPoint;
      v33[4] = v18->OptionalHeader.SizeOfStackReserve;
      v33[5] = v18->OptionalHeader.SizeOfStackCommit;
      WORD1(v33[6]) = v18->OptionalHeader.Subsystem;
      HIDWORD(v33[6]) = *(_DWORD *)&v18->OptionalHeader.MajorSubsystemVersion;
      LODWORD(v33[7]) = *(_DWORD *)&v18->OptionalHeader.MajorOperatingSystemVersion;
      WORD2(v33[7]) = v18->OptionalHeader.DllCharacteristics;
      LODWORD(v33[8]) = v18->OptionalHeader.CheckSum;
      HIDWORD(v33[8]) = v18->OptionalHeader.SizeOfCode;
      v33[13] = 0LL;
      NumberOfRvaAndSizes = v18->OptionalHeader.NumberOfRvaAndSizes;
      if ( NumberOfRvaAndSizes > 6 && v18->OptionalHeader.DataDirectory[6].VirtualAddress )
      {
        v33[13] = v18->OptionalHeader.DataDirectory[6];
        NumberOfRvaAndSizes = v18->OptionalHeader.NumberOfRvaAndSizes;
      }
      if ( NumberOfRvaAndSizes > 0xC )
      {
        v33[9] = v18->OptionalHeader.DataDirectory[12];
        NumberOfRvaAndSizes = v18->OptionalHeader.NumberOfRvaAndSizes;
      }
      if ( NumberOfRvaAndSizes <= 0xE )
      {
        v33[10] = 0LL;
      }
      else
      {
        v33[10] = v18->OptionalHeader.DataDirectory[14];
        if ( v18->OptionalHeader.DataDirectory[14].VirtualAddress && v18->OptionalHeader.DataDirectory[14].Size )
          HIDWORD(v33[2]) = LoaderFlags | 1;
      }
      if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        v33[11] = 0LL;
      else
        v33[11] = v18->OptionalHeader.DataDirectory[5];
      if ( v18->OptionalHeader.NumberOfRvaAndSizes > 0xA )
      {
        LODWORD(v33[12]) = v18->OptionalHeader.DataDirectory[10].VirtualAddress;
        Size = v18->OptionalHeader.DataDirectory[10].Size;
LABEL_56:
        HIDWORD(v33[12]) = Size;
LABEL_58:
        sub_1406F39F8((ULONG_PTR *)BaseOfImage);
        if ( v26 < 0 )
          return 0LL;
        if ( (int)sub_1407074F0(*(_QWORD *)v6, (__int64)v33, (int)v28, v16, -1LL, 1) < 0 )
          return 0LL;
        sub_140761CE0(v6, v24);
        if ( !v24[0] && (*(_BYTE *)(v6 + 62) & 0xC) == 0 )
          return 0LL;
        goto LABEL_16;
      }
    }
    else
    {
      LOWORD(v33[6]) = v18->OptionalHeader.Magic;
      LODWORD(v33[1]) = v18->OptionalHeader.FileAlignment;
      HIDWORD(v33[1]) = v18->OptionalHeader.SectionAlignment;
      LODWORD(v33[2]) = v18->OptionalHeader.SizeOfImage;
      SizeOfHeapReserve = v18->OptionalHeader.SizeOfHeapReserve;
      HIDWORD(v33[2]) = SizeOfHeapReserve;
      v33[0] = HIDWORD(v18->OptionalHeader.ImageBase);
      LODWORD(v33[3]) = v18->OptionalHeader.SizeOfHeaders;
      HIDWORD(v33[3]) = v18->OptionalHeader.AddressOfEntryPoint;
      v33[4] = LODWORD(v18->OptionalHeader.SizeOfStackReserve);
      v33[5] = HIDWORD(v18->OptionalHeader.SizeOfStackReserve);
      WORD1(v33[6]) = v18->OptionalHeader.Subsystem;
      HIDWORD(v33[6]) = *(_DWORD *)&v18->OptionalHeader.MajorSubsystemVersion;
      LODWORD(v33[7]) = *(_DWORD *)&v18->OptionalHeader.MajorOperatingSystemVersion;
      WORD2(v33[7]) = v18->OptionalHeader.DllCharacteristics;
      LODWORD(v33[8]) = v18->OptionalHeader.CheckSum;
      HIDWORD(v33[8]) = v18->OptionalHeader.SizeOfCode;
      v33[13] = 0LL;
      SizeOfHeapReserve_high = HIDWORD(v18->OptionalHeader.SizeOfHeapReserve);
      if ( SizeOfHeapReserve_high > 6 && v18->OptionalHeader.DataDirectory[4].VirtualAddress )
      {
        v33[13] = v18->OptionalHeader.DataDirectory[4];
        SizeOfHeapReserve_high = HIDWORD(v18->OptionalHeader.SizeOfHeapReserve);
      }
      if ( SizeOfHeapReserve_high > 0xC )
      {
        v33[9] = v18->OptionalHeader.DataDirectory[10];
        SizeOfHeapReserve_high = HIDWORD(v18->OptionalHeader.SizeOfHeapReserve);
      }
      if ( SizeOfHeapReserve_high <= 0xE )
      {
        v33[10] = 0LL;
      }
      else
      {
        v33[10] = v18->OptionalHeader.DataDirectory[12];
        if ( v18->OptionalHeader.DataDirectory[12].VirtualAddress && v18->OptionalHeader.DataDirectory[12].Size )
          HIDWORD(v33[2]) = SizeOfHeapReserve | 1;
      }
      if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) <= 5 )
        v33[11] = 0LL;
      else
        v33[11] = v18->OptionalHeader.DataDirectory[3];
      if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) > 0xA )
      {
        LODWORD(v33[12]) = v18->OptionalHeader.DataDirectory[8].VirtualAddress;
        Size = v18->OptionalHeader.DataDirectory[8].Size;
        goto LABEL_56;
      }
    }
    v33[12] = 0LL;
    goto LABEL_58;
  }
LABEL_16:
  v17 = sub_140762174(v16, (unsigned int)v8);
  v10 = v17;
  if ( v17 )
  {
    v27 = sub_140313C70(v17);
    if ( (int)sub_140761C34(v6, v27, (unsigned int)v8, v4 & 0x20) < 0 )
    {
LABEL_64:
      sub_140761FC0(v10, (unsigned int)((_DWORD)v8 << 12));
      return 0LL;
    }
    v14 = 1;
    if ( !(unsigned int)sub_1403B529C((_DWORD *)v6, v10) )
    {
LABEL_63:
      sub_1406EBA70();
      goto LABEL_64;
    }
LABEL_13:
    if ( !v12 || (int)sub_1402D9A54(v10, (__int64 *)v6, v13) >= 0 )
      return v10;
    if ( v14 == 1 )
      sub_1402DBCA8(v10, 1);
    goto LABEL_63;
  }
  return 0LL;
}
