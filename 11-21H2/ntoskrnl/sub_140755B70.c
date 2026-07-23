/*
 * XREFs of sub_140755B70 @ 0x140755B70
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402D7598 @ 0x1402D7598 (sub_1402D7598.c)
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D8E14 @ 0x1406D8E14 (sub_1406D8E14.c)
 *     sub_1407099A4 @ 0x1407099A4 (sub_1407099A4.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140755B70(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  ULONG_PTR v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  _WORD *v12; // rax
  void *v13; // rbx
  __int16 v14; // si
  PIMAGE_NT_HEADERS v15; // rdi
  WORD Characteristics; // r15
  _WORD *v17; // rax
  _WORD *v18; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  DWORD Win32VersionValue; // edx
  __int64 v22; // rbx
  bool v23; // zf
  _QWORD *v24; // rax
  __int64 v25; // rbx
  int v27; // edi
  char v28; // di
  char v29; // di
  __int64 v30; // rbx
  USHORT v31; // [rsp+54h] [rbp-164h]
  _IMAGE_NT_HEADERS64 *v33; // [rsp+60h] [rbp-158h]
  _QWORD v34[18]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v35; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+110h] [rbp-A8h] BYREF
  ULONG Size; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+120h] [rbp-98h] BYREF
  _WORD *v40; // [rsp+128h] [rbp-90h]
  void *v41; // [rsp+130h] [rbp-88h]
  _QWORD *v42; // [rsp+138h] [rbp-80h]
  _BYTE v43[48]; // [rsp+140h] [rbp-78h] BYREF

  v42 = a3;
  v37 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v34, 0, sizeof(v34));
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, sub_1402D7598((__int64)a1));
  v31 = v7;
  *(_WORD *)(a4 + 8) = v7;
  sub_14030D5C0(v8, 0LL, (__int64)v43, v9);
  v36 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  v11 = MmMapViewOfSection(qword_140D3CF00, a1, &v36, 0LL, 0LL, &v35, &v39, 1, 5242880, 2);
  if ( v11 < 0 || (v11 = sub_1407099A4(0LL, v10, &v37), v11 < 0) )
  {
    sub_1402D0930((__int64)v43, 0LL);
    return (unsigned int)v11;
  }
  else
  {
    v12 = sub_140347DB0();
    v13 = (void *)a1[164];
    v41 = v13;
    *(_QWORD *)((char *)&v34[1] + 4) = 10LL;
    LOWORD(v34[3]) = NtBuildNumber;
    HIDWORD(v34[2]) = 2;
    v14 = dword_140C4E588;
    WORD1(v34[3]) = dword_140C4E588;
    v34[4] = qword_140D051F8;
    v34[5] = qword_140D051F0;
    v34[6] = __PAIR64__(NtGlobalFlag, dword_140D06884);
    LODWORD(v34[7]) = dword_140C4E7B0;
    v34[8] = qword_140C50650;
    v34[9] = (unsigned int)dword_140D051D8;
    v34[10] = qword_140D051E8;
    v34[11] = qword_140D051E0;
    LOBYTE(v34[12]) = *(_BYTE *)a2;
    BYTE1(v34[12]) = *(_BYTE *)(a2 + 3);
    v34[13] = *(_QWORD *)(a2 + 8);
    v34[14] = v13;
    LOWORD(v34[15]) = v12[532];
    WORD1(v34[15]) = v12[564];
    if ( *((_QWORD *)v12 + 154) )
      WORD2(v34[15]) = 1701;
    else
      WORD2(v34[15]) = 0;
    if ( a1[171] )
      HIDWORD(v34[7]) = sub_140300B40((__int64)a1);
    else
      HIDWORD(v34[7]) = 0;
    v34[16] = v36;
    LODWORD(v34[17]) = 0;
    sub_1402D6B0C((__int64)&unk_140CE2040, 0xCCD568u, 0, 0, (__int64)&qword_14000FFC8, 0);
    v15 = RtlImageNtHeader(v13);
    v33 = v15;
    Characteristics = v15->FileHeader.Characteristics;
    v17 = RtlImageDirectoryEntryToData(v13, 1u, 0xAu, &Size);
    v18 = v17;
    v40 = v17;
    if ( v17 )
    {
      if ( ((unsigned __int8)v17 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = v40;
      v14 = WORD1(v34[3]);
    }
    Subsystem = v15->OptionalHeader.Subsystem;
    LODWORD(v34[0]) = Subsystem;
    MajorSubsystemVersion = v15->OptionalHeader.MajorSubsystemVersion;
    HIDWORD(v34[0]) = MajorSubsystemVersion;
    LODWORD(v34[1]) = v15->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v15->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v18 )
      {
        if ( v18[38] )
          v14 = v18[38];
        WORD1(v34[3]) = v14;
      }
      HIDWORD(v34[1]) = (unsigned __int8)Win32VersionValue;
      LODWORD(v34[2]) = BYTE1(Win32VersionValue);
      LOWORD(v34[3]) = HIWORD(Win32VersionValue);
      HIDWORD(v34[2]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v18 )
    {
      v22 = *((_QWORD *)v18 + 8);
      *(_QWORD *)a4 = v22;
      v23 = (v22 & KeQueryGroupAffinity(v31)) == v22;
      v24 = (_QWORD *)a4;
      if ( !v23 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v24 = (_QWORD *)a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v28 = _InterlockedExchangeAdd(&dword_140C5064C, 1u) + 1;
      do
      {
        v29 = v28 & 0x3F;
        v30 = 1LL << v29;
        *v24 = 1LL << v29;
        v28 = v29 + 1;
        v23 = (KeQueryGroupAffinity(v31) & v30) == 0;
        v24 = (_QWORD *)a4;
      }
      while ( v23 );
      v15 = v33;
      v14 = WORD1(v34[3]);
      MajorSubsystemVersion = HIDWORD(v34[0]);
      Subsystem = v34[0];
    }
    v25 = v37;
    *(_QWORD *)(v37 + 280) = *(_QWORD *)((char *)&v34[1] + 4);
    *(_WORD *)(v25 + 288) = v34[3];
    *(_DWORD *)(v25 + 292) = HIDWORD(v34[2]);
    *(_WORD *)(v25 + 290) = v14;
    *(_QWORD *)(v25 + 200) = v34[4];
    *(_QWORD *)(v25 + 208) = v34[5];
    *(_DWORD *)(v25 + 184) = dword_140D06884;
    *(_DWORD *)(v25 + 188) = NtGlobalFlag;
    *(_DWORD *)(v25 + 1988) = dword_140C4E7B0;
    *(_QWORD *)(v25 + 192) = qword_140C50650;
    *(_QWORD *)(v25 + 792) = (unsigned int)dword_140D051D8;
    *(_QWORD *)(v25 + 216) = qword_140D051E8;
    *(_QWORD *)(v25 + 224) = qword_140D051E0;
    *(_DWORD *)(v25 + 704) = HIDWORD(v34[7]);
    *(_DWORD *)(v25 + 296) = Subsystem;
    *(_DWORD *)(v25 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v25 + 304) = v34[1];
    *(_BYTE *)v25 = v34[12];
    *(_BYTE *)(v25 + 3) = BYTE1(v34[12]);
    *(_QWORD *)(v25 + 8) = v34[13];
    *(_QWORD *)(v25 + 16) = v41;
    *(_DWORD *)(v25 + 844) = v34[15];
    *(_WORD *)(v25 + 848) = WORD2(v34[15]);
    *(_QWORD *)(v25 + 1976) = v34[16];
    *(_DWORD *)(v25 + 1984) = 0;
    if ( a1[176] && (v27 = sub_1406D8E14((__int64)v34, v15, (__int64)a1, a4), v27 < 0) )
    {
      sub_1402D0930((__int64)v43, 0LL);
      return (unsigned int)v27;
    }
    else
    {
      sub_1402D0930((__int64)v43, 0LL);
      *v42 = v25;
      return 0LL;
    }
  }
}
