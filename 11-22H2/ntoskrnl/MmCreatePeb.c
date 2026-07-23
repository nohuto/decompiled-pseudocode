/*
 * XREFs of MmCreatePeb @ 0x1407A1DAC
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     MmGetSessionId @ 0x1402A3B20 (MmGetSessionId.c)
 *     KeQueryGroupMaskProcess @ 0x140329FA0 (KeQueryGroupMaskProcess.c)
 *     KeQueryGroupAffinity @ 0x14032A0B0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiCreatePebOrTeb @ 0x1406AB22C (MiCreatePebOrTeb.c)
 *     MmMapViewOfSection @ 0x1407A2850 (MmMapViewOfSection.c)
 *     MiInitializeWowPeb @ 0x1407A59AC (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  _WORD *CurrentServerSiloGlobals; // rax
  void *v12; // rsi
  int MajorSubsystemVersion; // r15d
  __int16 v14; // r14
  char v15; // bl
  PIMAGE_NT_HEADERS v16; // rdi
  __int16 Characteristics; // r12
  _WORD *v18; // rax
  _WORD *v19; // rcx
  int Subsystem; // esi
  unsigned int Win32VersionValue; // edx
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rbx
  int v27; // edi
  char v28; // di
  char v29; // di
  __int64 v30; // rbx
  USHORT v31; // [rsp+58h] [rbp-160h]
  _IMAGE_NT_HEADERS64 *v33; // [rsp+68h] [rbp-150h]
  _QWORD v34[18]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v35; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+110h] [rbp-A8h] BYREF
  ULONG Size; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+120h] [rbp-98h] BYREF
  _WORD *v40; // [rsp+128h] [rbp-90h]
  __int64 v41; // [rsp+130h] [rbp-88h]
  void *v42; // [rsp+138h] [rbp-80h]
  _QWORD *v43; // [rsp+140h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v44; // [rsp+148h] [rbp-70h] BYREF

  v43 = a3;
  v6 = a1;
  v41 = a1;
  v37 = 0LL;
  memset(&v44, 0, sizeof(v44));
  memset(v34, 0, sizeof(v34));
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess(v6));
  v31 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0, (__int64)&v44);
  v36 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  v10 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, v6, &v36, 0LL, 0LL, &v35, &v39, 1, 5242880, 2);
  if ( v10 < 0 || (v10 = MiCreatePebOrTeb(0LL, v9, &v37), v10 < 0) )
  {
    KiUnstackDetachProcess(&v44);
    return (unsigned int)v10;
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v12 = *(void **)(v6 + 1312);
    v42 = v12;
    MajorSubsystemVersion = 10;
    *(_QWORD *)((char *)&v34[1] + 4) = 10LL;
    LOWORD(v34[3]) = NtBuildNumber;
    HIDWORD(v34[2]) = 2;
    v14 = CmNtCSDVersion;
    WORD1(v34[3]) = CmNtCSDVersion;
    v34[4] = qword_140D1D208;
    v34[5] = qword_140D1D200;
    v34[6] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    LODWORD(v34[7]) = NtGlobalFlag2;
    v34[8] = qword_140C65B10;
    v34[9] = (unsigned int)dword_140D1D1E8;
    v34[10] = qword_140D1D1F8;
    v34[11] = qword_140D1D1F0;
    LOBYTE(v34[12]) = *(_BYTE *)a2;
    BYTE1(v34[12]) = *(_BYTE *)(a2 + 3);
    v34[13] = *(_QWORD *)(a2 + 8);
    v34[14] = v12;
    LOWORD(v34[15]) = CurrentServerSiloGlobals[532];
    WORD1(v34[15]) = CurrentServerSiloGlobals[564];
    if ( *((_QWORD *)CurrentServerSiloGlobals + 154) )
      WORD2(v34[15]) = 1701;
    else
      WORD2(v34[15]) = 0;
    if ( *(_QWORD *)(v6 + 1368) )
      HIDWORD(v34[7]) = MmGetSessionId(v6);
    else
      HIDWORD(v34[7]) = 0;
    v34[16] = v36;
    LODWORD(v34[17]) = 0;
    v15 = 0;
    if ( (*(_BYTE *)(v6 + 992) & 1) != 0 )
    {
      Subsystem = 3;
      LODWORD(v34[0]) = 3;
      Characteristics = 34;
      *(_QWORD *)((char *)v34 + 4) = 10LL;
      v16 = 0LL;
      v33 = 0LL;
      v23 = (__int64 *)a4;
    }
    else
    {
      v16 = RtlImageNtHeader(v12);
      v33 = v16;
      Characteristics = v16->FileHeader.Characteristics;
      v18 = RtlImageDirectoryEntryToData(v12, 1u, 0xAu, &Size);
      v19 = v18;
      v40 = v18;
      if ( v18 )
      {
        if ( ((unsigned __int8)v18 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = v40;
        v14 = WORD1(v34[3]);
        v15 = 0;
      }
      Subsystem = v16->OptionalHeader.Subsystem;
      LODWORD(v34[0]) = Subsystem;
      MajorSubsystemVersion = v16->OptionalHeader.MajorSubsystemVersion;
      HIDWORD(v34[0]) = MajorSubsystemVersion;
      LODWORD(v34[1]) = v16->OptionalHeader.MinorSubsystemVersion;
      Win32VersionValue = v16->OptionalHeader.Win32VersionValue;
      if ( Win32VersionValue )
      {
        if ( v19 )
        {
          if ( v19[38] )
            v14 = v19[38];
          WORD1(v34[3]) = v14;
        }
        HIDWORD(v34[1]) = (unsigned __int8)Win32VersionValue;
        LODWORD(v34[2]) = BYTE1(Win32VersionValue);
        LOWORD(v34[3]) = HIWORD(Win32VersionValue);
        HIDWORD(v34[2]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
      }
      if ( v19 )
      {
        v22 = *((_QWORD *)v19 + 8);
        v23 = (__int64 *)a4;
        *(_QWORD *)a4 = v22;
        v15 = 1;
      }
      else
      {
        v23 = (__int64 *)a4;
      }
    }
    if ( v15 )
    {
      v24 = *v23;
      if ( (v24 & KeQueryGroupAffinity(v31)) != v24 )
        *(_QWORD *)a4 = 0LL;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v28 = _InterlockedExchangeAdd(&dword_140C65B0C, 1u) + 1;
      do
      {
        v29 = v28 & 0x3F;
        v30 = 1LL << v29;
        *(_QWORD *)a4 = 1LL << v29;
        v28 = v29 + 1;
      }
      while ( (KeQueryGroupAffinity(v31) & v30) == 0 );
      v16 = v33;
      v14 = WORD1(v34[3]);
      MajorSubsystemVersion = HIDWORD(v34[0]);
      Subsystem = v34[0];
      v6 = v41;
    }
    v25 = v37;
    *(_QWORD *)(v37 + 280) = *(_QWORD *)((char *)&v34[1] + 4);
    *(_WORD *)(v25 + 288) = v34[3];
    *(_DWORD *)(v25 + 292) = HIDWORD(v34[2]);
    *(_WORD *)(v25 + 290) = v14;
    *(_QWORD *)(v25 + 200) = v34[4];
    *(_QWORD *)(v25 + 208) = v34[5];
    *(_DWORD *)(v25 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v25 + 188) = NtGlobalFlag;
    *(_DWORD *)(v25 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v25 + 192) = qword_140C65B10;
    *(_QWORD *)(v25 + 792) = (unsigned int)dword_140D1D1E8;
    *(_QWORD *)(v25 + 216) = qword_140D1D1F8;
    *(_QWORD *)(v25 + 224) = qword_140D1D1F0;
    *(_DWORD *)(v25 + 704) = HIDWORD(v34[7]);
    *(_DWORD *)(v25 + 296) = Subsystem;
    *(_DWORD *)(v25 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v25 + 304) = v34[1];
    *(_BYTE *)v25 = v34[12];
    *(_BYTE *)(v25 + 3) = BYTE1(v34[12]);
    *(_QWORD *)(v25 + 8) = v34[13];
    *(_QWORD *)(v25 + 16) = v42;
    *(_DWORD *)(v25 + 844) = v34[15];
    *(_WORD *)(v25 + 848) = WORD2(v34[15]);
    *(_QWORD *)(v25 + 1976) = v34[16];
    *(_DWORD *)(v25 + 1984) = 0;
    if ( *(_QWORD *)(v6 + 1408) && (v27 = MiInitializeWowPeb(v34, v16, v6, a4), v27 < 0) )
    {
      KiUnstackDetachProcess(&v44);
      return (unsigned int)v27;
    }
    else
    {
      KiUnstackDetachProcess(&v44);
      *v43 = v25;
      return 0LL;
    }
  }
}
