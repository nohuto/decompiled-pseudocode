/*
 * XREFs of PspAllocateThread @ 0x140740EE0
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x1407712B4 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x1409B5840 (PspCreatePicoThread.c)
 * Callees:
 *     KeSelectInitialIdealProcessorForThread @ 0x14020380C (KeSelectInitialIdealProcessorForThread.c)
 *     ExInitializePushLock @ 0x1402235B0 (ExInitializePushLock.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeInitializeSemaphore @ 0x1402B32C0 (KeInitializeSemaphore.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE500 (KeQuerySystemTimePrecise.c)
 *     KeQueryMaximumGroupCount @ 0x1402BE5F0 (KeQueryMaximumGroupCount.c)
 *     PsAssignThreadId @ 0x1402BEA6C (PsAssignThreadId.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402BF7EC (KeQuerySystemTimeUnsafe.c)
 *     PoEnergyEstimationEnabled @ 0x1402C0B20 (PoEnergyEstimationEnabled.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14030AE8C (KeGetProcessorNodeNumberByIndex.c)
 *     RtlGetExtendedContextLength @ 0x14030D250 (RtlGetExtendedContextLength.c)
 *     KeGetProcessorNodeNumber @ 0x140367B30 (KeGetProcessorNodeNumber.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlLocateExtendedFeature @ 0x140463BB0 (RtlLocateExtendedFeature.c)
 *     PsQueryThreadStartAddress @ 0x1405A3F84 (PsQueryThreadStartAddress.c)
 *     MmCreateTeb @ 0x1406AAF44 (MmCreateTeb.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     MmDeleteTeb @ 0x14076F0DC (MmDeleteTeb.c)
 *     PspSetupUserStack @ 0x140774454 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x14079F8D4 (PspWow64InitThread.c)
 *     MmSecureVirtualMemoryEx @ 0x1407BAE50 (MmSecureVirtualMemoryEx.c)
 *     PspWow64SetupUserStack @ 0x1407DE950 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1407E8654 (PspDeleteUserStack.c)
 *     PspSetupUserShadowStack @ 0x1409B1BBC (PspSetupUserShadowStack.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        size_t a12)
{
  ULONG_PTR v13; // r9
  size_t v15; // r11
  __int64 v16; // r12
  char v17; // r8
  __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // r10d
  _QWORD *v21; // rdx
  signed int v22; // ebx
  __int64 v23; // rdi
  int v24; // ebx
  USHORT MaximumGroupCount; // ax
  __int64 v26; // r12
  unsigned int v27; // r14d
  char *v28; // rdi
  int v29; // r14d
  char *v30; // rcx
  char *v31; // rcx
  int inited; // r14d
  int v33; // r8d
  __int16 v34; // dx
  __int16 v35; // cx
  __int16 v36; // r12
  _BYTE *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v43; // rax
  unsigned __int16 ProcessorNodeNumber; // ax
  unsigned __int16 v45; // ax
  int v46; // ecx
  int v47; // eax
  void *v48; // rcx
  volatile signed __int64 *v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 Pool2; // rax
  _QWORD *ExtendedFeature; // rax
  __int64 v54; // rax
  __int16 v55; // ax
  __int16 v56; // dx
  __int16 v57; // dx
  __int64 v58; // [rsp+20h] [rbp-1D8h]
  char v59; // [rsp+50h] [rbp-1A8h]
  signed int v60; // [rsp+54h] [rbp-1A4h]
  int v61; // [rsp+54h] [rbp-1A4h]
  char v62; // [rsp+58h] [rbp-1A0h]
  int v63; // [rsp+5Ch] [rbp-19Ch]
  __int64 v64; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  __int64 v66; // [rsp+70h] [rbp-188h] BYREF
  _BYTE *v67; // [rsp+78h] [rbp-180h]
  ULONG_PTR v68; // [rsp+80h] [rbp-178h]
  __int64 v69; // [rsp+88h] [rbp-170h]
  ULONG ContextLength; // [rsp+90h] [rbp-168h] BYREF
  __int64 v71; // [rsp+98h] [rbp-160h]
  __int64 v72; // [rsp+A0h] [rbp-158h]
  __int64 CurrentThread; // [rsp+A8h] [rbp-150h]
  __int64 v74; // [rsp+B0h] [rbp-148h]
  size_t Size; // [rsp+B8h] [rbp-140h]
  ULONG_PTR v76; // [rsp+C0h] [rbp-138h]
  __int64 v77; // [rsp+C8h] [rbp-130h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-128h]
  _QWORD *v79; // [rsp+D8h] [rbp-120h]
  __int64 v80; // [rsp+E0h] [rbp-118h]
  char v81; // [rsp+E8h] [rbp-110h] BYREF
  int v82; // [rsp+E9h] [rbp-10Fh]
  __int16 v83; // [rsp+EDh] [rbp-10Bh]
  char v84; // [rsp+EFh] [rbp-109h]
  __int64 v85; // [rsp+F0h] [rbp-108h]
  __int64 v86; // [rsp+F8h] [rbp-100h]
  __int64 v87; // [rsp+100h] [rbp-F8h]
  __int64 v88; // [rsp+110h] [rbp-E8h] BYREF
  __int64 (__fastcall *v89)(void (__fastcall *)(__int64), __int64); // [rsp+118h] [rbp-E0h]
  __int64 v90; // [rsp+120h] [rbp-D8h]
  __int64 v91; // [rsp+128h] [rbp-D0h]
  __int128 v92; // [rsp+130h] [rbp-C8h]
  ULONG_PTR v93; // [rsp+140h] [rbp-B8h]
  int v94; // [rsp+148h] [rbp-B0h]
  int v95; // [rsp+14Ch] [rbp-ACh]
  __int64 v96; // [rsp+150h] [rbp-A8h]
  int v97; // [rsp+160h] [rbp-98h]
  int v98; // [rsp+164h] [rbp-94h]
  int v99; // [rsp+168h] [rbp-90h]
  int v100; // [rsp+16Ch] [rbp-8Ch]
  __int64 v101; // [rsp+170h] [rbp-88h]
  __int64 v102; // [rsp+178h] [rbp-80h]
  _QWORD *v103; // [rsp+180h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v104; // [rsp+188h] [rbp-70h] BYREF

  v13 = a2;
  v68 = a2;
  v76 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v77 = a5;
  v79 = a6;
  v72 = a7;
  v80 = a8;
  v103 = a10;
  v67 = a11;
  v15 = a12;
  Size = a12;
  memset(&v104, 0, sizeof(v104));
  v66 = 0LL;
  Object = 0LL;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  ContextLength = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  v63 = 0;
  v16 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  v17 = *(_BYTE *)(BugCheckParameter1 + 992) & 1;
  v59 = v17;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v74 = v18;
  v64 = v18;
  if ( a4 )
  {
    v19 = 0LL;
    v20 = *(_DWORD *)(a4 + 4);
    v21 = (_QWORD *)((a4 + 320) & -(__int64)((v20 & 0x1000) != 0));
    if ( (v20 & 0x4000) != 0 )
      v19 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      v16 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(BugCheckParameter1 + 1032) & 0x40000;
      v69 = v16;
      v71 = v16;
    }
    v13 = v68;
    if ( (v20 & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
        return 3221225485LL;
      if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x1000) != 0 )
        return 3221225659LL;
      v69 = *(_QWORD *)(a4 + 496) | v16;
      v71 = v69;
    }
    if ( v19 )
    {
      if ( v21 )
      {
        if ( *(unsigned __int8 *)(v19 + 208) != *(_WORD *)(((a4 + 320) & -(__int64)((v20 & 0x1000) != 0)) + 8)
          || *v21 && (*v21 & *(_QWORD *)(v19 + 200)) == 0LL )
        {
          v22 = -1073741776;
          goto LABEL_93;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v20 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v19 + 208);
        *(_QWORD *)(a4 + 320) = qword_140D1EFE8[*(unsigned __int8 *)(v19 + 208)];
      }
      ProcessorNodeNumber = KeGetProcessorNodeNumber(v19);
    }
    else
    {
      if ( !v21 || !*v21 )
        goto LABEL_11;
      v45 = KeSelectInitialIdealProcessorForThread(BugCheckParameter1, v21);
      *(_DWORD *)(a4 + 252) = v45;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      ProcessorNodeNumber = KeGetProcessorNodeNumberByIndex(v45);
      v13 = v68;
      v15 = Size;
    }
    v63 = ProcessorNodeNumber + 1;
LABEL_11:
    v17 = v59;
  }
  *(_DWORD *)(v15 + 384) = 0;
  *(_BYTE *)(v15 + 388) = a3;
  v22 = 0;
  v60 = 0;
  if ( a5 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
      v22 = -1073741811;
      goto LABEL_93;
    }
    v22 = v17 != 0 ? 0xC000000D : 0;
    v60 = v22;
    if ( v17 )
      goto LABEL_93;
  }
  if ( v13 )
  {
    if ( a3 == 1 )
    {
      if ( (v13 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x1DF2;
      v22 = v60;
      v23 = v68;
    }
    else
    {
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x11FF2;
      v23 = v68;
    }
    if ( v22 < 0 )
      goto LABEL_93;
  }
  else
  {
    v23 = v68;
  }
  v62 = PoEnergyEstimationEnabled();
  v24 = v62 != 0 ? 2520 : 2320;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v26 = MaximumGroupCount;
  v27 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v27 = (v62 != 0 ? 2527 : 2327) & 0xFFFFFFF8;
    v24 = v27 + 8 * MaximumGroupCount;
  }
  LODWORD(v68) = (v24 + 7) & 0xFFFFFFF8;
  LODWORD(Size) = v68 + 16 + 16 * MaximumGroupCount;
  v22 = ObCreateObjectEx(a3, PsThreadType, v23, a3, v58, Size, 0, Size, &Object, 0LL);
  if ( v22 < 0 )
  {
LABEL_93:
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)v22;
  }
  v28 = (char *)Object;
  memset(Object, 0, (unsigned int)Size);
  if ( v62 )
  {
    *((_QWORD *)v28 + 201) = v28 + 2320;
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x15u);
    v28 = (char *)Object;
  }
  if ( KiSchedulerAssistThreadFlagEnabled )
  {
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x16u);
    v28 = (char *)Object;
  }
  if ( v27 )
  {
    *((_DWORD *)v28 + 344) |= 0x20000u;
    *((_QWORD *)v28 + 202) = &v28[v27];
  }
  v29 = v68;
  v30 = &v28[(unsigned int)v68];
  *((_QWORD *)v28 + 72) = v30;
  *(_WORD *)v30 = 1;
  *((_WORD *)v30 + 1) = v26;
  *((_DWORD *)v30 + 1) = 0;
  memset(v30 + 8, 0, 8 * v26);
  v31 = &v28[(unsigned int)(v29 + 8 + 8 * v26)];
  *((_QWORD *)v28 + 69) = v31;
  *(_WORD *)v31 = 1;
  *((_WORD *)v31 + 1) = v26;
  *((_DWORD *)v31 + 1) = 0;
  memset(v31 + 8, 0, 8 * v26);
  ExInitializePushLock((PEX_RUNDOWN_REF)v28 + 169);
  *((_QWORD *)v28 + 153) = *(_QWORD *)(BugCheckParameter1 + 1088);
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v28 + 344) |= 4u;
  if ( (*a9 & 0x200) != 0 )
    *((_DWORD *)v28 + 29) |= 0x200000u;
  *((_DWORD *)v28 + 257) = 32;
  *((_QWORD *)v28 + 170) = 0LL;
  *((_DWORD *)v28 + 342) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v28 + 1240), 0, 1);
  *((_QWORD *)v28 + 146) = v28 + 1160;
  *((_QWORD *)v28 + 145) = v28 + 1160;
  *((_QWORD *)v28 + 183) = v28 + 1456;
  *((_QWORD *)v28 + 182) = v28 + 1456;
  *((_QWORD *)v28 + 185) = v28 + 1472;
  *((_QWORD *)v28 + 184) = v28 + 1472;
  *((_QWORD *)v28 + 186) = 0LL;
  *((_QWORD *)v28 + 196) = v28 + 1560;
  *((_QWORD *)v28 + 195) = v28 + 1560;
  *((_QWORD *)v28 + 197) = 0LL;
  *((_QWORD *)v28 + 161) = v28 + 1280;
  *((_QWORD *)v28 + 160) = v28 + 1280;
  *((_QWORD *)v28 + 187) = 0LL;
  *((_QWORD *)v28 + 150) = 0LL;
  *((_QWORD *)v28 + 152) = v28 + 1208;
  *((_QWORD *)v28 + 151) = v28 + 1208;
  *((_QWORD *)v28 + 203) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((_QWORD *)v28 + 144);
  }
  else
  {
    v28 = (char *)Object;
    *((_QWORD *)Object + 144) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v28 + 208) = v28 + 1656;
  *((_QWORD *)v28 + 207) = v28 + 1656;
  *((_QWORD *)v28 + 209) = 0LL;
  *((_QWORD *)v28 + 211) = v28 + 1680;
  *((_QWORD *)v28 + 210) = v28 + 1680;
  BugCheckParameter2 = (ULONG_PTR)(v28 + 1360);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v28 + 1360), 0LL);
  inited = PsAssignThreadId((__int64)v28);
  v61 = inited;
  if ( inited < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v28 + 170);
    KeAbPostRelease((ULONG_PTR)(v28 + 1360));
    v28 = (char *)Object;
    goto LABEL_97;
  }
  if ( !a5 )
  {
    v43 = v72;
    *((_QWORD *)v28 + 148) = v72;
    *((_QWORD *)v28 + 164) = v43;
    v88 = 0LL;
    v90 = v43;
    v91 = v80;
    v92 = 0LL;
    v93 = BugCheckParameter1;
    v94 = v63;
    v95 = 0;
    v89 = PspSystemThreadStartup;
    if ( (*a9 & 0x400) != 0 && v59 )
    {
      v89 = (__int64 (__fastcall *)(void (__fastcall *)(__int64), __int64))PspSecureThreadStartup;
      v95 = 16;
    }
    v41 = v66;
    goto LABEL_54;
  }
  v33 = *a9;
  v34 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v34 = 16 * (v33 & 0x40);
  v35 = v34 | 0x2000;
  if ( (v33 & 0x80u) == 0 )
    v35 = v34;
  v36 = v35 | 0x4000;
  if ( (v33 & 0x100) == 0 )
    v36 = v35;
  v37 = v67;
  if ( v67 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0 )
      *((_DWORD *)v28 + 29) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v81 = 0;
      v86 = 0x8000LL;
      v87 = 0x40000LL;
      v85 = 0LL;
      inited = PspSetupUserStack(BugCheckParameter1, a5, v64, &v81, v63);
      v61 = inited;
      if ( inited < 0 )
      {
LABEL_48:
        v40 = v64;
        goto LABEL_49;
      }
      v46 = (int)v67;
      *v67 ^= (*v67 ^ v81) & 2;
      v40 = v64;
      v47 = PspWow64SetupUserStack(BugCheckParameter1, v38, v64, v46, v63);
    }
    else
    {
      inited = PspSetupUserStack(BugCheckParameter1, a5, v64, v37, v63);
      v61 = inited;
      if ( inited < 0 || (*((_DWORD *)v28 + 29) & 0x100000) == 0 )
        goto LABEL_48;
      v40 = v64;
      v47 = PspSetupUserShadowStack(BugCheckParameter1, v63);
    }
    inited = v47;
    v61 = v47;
LABEL_49:
    if ( inited < 0 )
      goto LABEL_97;
    inited = MmCreateTeb(BugCheckParameter1, v40, (_QWORD *)v28 + 153, v39, &v66);
    v61 = inited;
    if ( inited < 0 )
      goto LABEL_97;
    *((_QWORD *)v28 + 148) = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v28 + 164) = *(_QWORD *)(a5 + 128);
    v41 = v66;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      inited = PspWow64InitThread(BugCheckParameter1);
      v61 = inited;
      if ( inited < 0 )
        goto LABEL_97;
    }
    if ( !v36 )
      goto LABEL_53;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v104);
    *(_WORD *)(v41 + 6126) = v36;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      if ( *(_WORD *)(BugCheckParameter1 + 2412) == 0x8664 )
      {
        v101 = v41 + 0x2000;
        *(_WORD *)(v41 + 14318) = v36;
      }
      else
      {
        v102 = v41 + 0x2000;
        *(_WORD *)(v41 + 12234) = v36;
      }
    }
    inited = 0;
    v61 = 0;
    goto LABEL_64;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 2240) )
  {
    v50 = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v28 + 148) = v50;
    *((_QWORD *)v28 + 164) = v50;
    v51 = v79;
    *((_QWORD *)v28 + 199) = v79[1];
    *((_QWORD *)v28 + 200) = v51[2];
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x1Au);
    RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
    Pool2 = ExAllocatePool2(256LL, ContextLength, 1666413392LL);
    v28 = (char *)Object;
    *((_QWORD *)Object + 205) = Pool2;
    if ( !Pool2 )
    {
      inited = -1073741670;
      v61 = -1073741670;
      goto LABEL_97;
    }
    v41 = v66;
LABEL_53:
    v88 = 0LL;
    v89 = (__int64 (__fastcall *)(void (__fastcall *)(__int64), __int64))PspUserThreadStartup;
    v90 = v72;
    v91 = *((_QWORD *)v28 + 148);
    *(_QWORD *)&v92 = a5;
    *((_QWORD *)&v92 + 1) = v41;
    v93 = BugCheckParameter1;
    v94 = v63;
    v95 = 0;
LABEL_54:
    v96 = v69;
    inited = KeInitThread(v28, &v88);
    v61 = inited;
    if ( inited >= 0 )
    {
      *v103 = v28;
      return 0LL;
    }
    if ( v41 && v67 )
      MmDeleteTeb(BugCheckParameter1, v41);
    goto LABEL_97;
  }
  v41 = *(_QWORD *)(CurrentThread + 240);
  v66 = v41;
  *((_QWORD *)v28 + 148) = PsQueryThreadStartAddress(CurrentThread, 1);
  *((_QWORD *)v28 + 164) = *(_QWORD *)(CurrentThread + 1312);
  *((_DWORD *)v28 + 345) |= 0x10u;
  if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0
    && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
    && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
  {
    ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
    if ( ExtendedFeature )
    {
      if ( (*(_BYTE *)ExtendedFeature & 1) != 0 && ExtendedFeature[1] )
        *((_DWORD *)v28 + 29) |= 0x100000u;
    }
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
  {
    v54 = 14416LL;
    if ( *(_WORD *)(BugCheckParameter1 + 2412) != 0x8664 )
      v54 = 12312LL;
    CurrentThread = v54;
  }
  else
  {
    CurrentThread = 6224LL;
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v104);
  if ( MmSecureVirtualMemoryEx(v41, CurrentThread, 4LL) )
  {
    *(_OWORD *)(v41 + 64) = *(_OWORD *)(v28 + 1224);
    *(_OWORD *)(v41 + 2008) = *(_OWORD *)(v28 + 1224);
    *(_DWORD *)(v41 + 6044) = 0;
    *(_DWORD *)(v41 + 6120) = 0;
    v55 = *(_WORD *)(v41 + 6126) & 0x62C;
    *(_WORD *)(v41 + 6126) = v55;
    *(_WORD *)(v41 + 6126) = v36 | v55 | 0x40;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      if ( *(_WORD *)(BugCheckParameter1 + 2412) == 0x8664 )
      {
        v101 = v41 + 0x2000;
        *(_QWORD *)(v41 + 8256) = *((_QWORD *)v28 + 153);
        *(_QWORD *)(v41 + 8264) = *((_QWORD *)v28 + 154);
        *(_QWORD *)(v41 + 10200) = *((_QWORD *)v28 + 153);
        *(_QWORD *)(v41 + 10208) = *((_QWORD *)v28 + 154);
        *(_DWORD *)(v41 + 14236) = 0;
        *(_DWORD *)(v41 + 14312) = 0;
        v56 = *(_WORD *)(v41 + 14318) & 0x62C;
        *(_WORD *)(v41 + 14318) = v56;
        *(_WORD *)(v41 + 14318) = v36 | v56 | 0x40;
      }
      else
      {
        v102 = v41 + 0x2000;
        v97 = *((_DWORD *)v28 + 306);
        *(_DWORD *)(v41 + 8224) = v97;
        v98 = *((_DWORD *)v28 + 308);
        *(_DWORD *)(v41 + 8228) = v98;
        v99 = *((_DWORD *)v28 + 306);
        *(_DWORD *)(v41 + 9908) = v99;
        v100 = *((_DWORD *)v28 + 308);
        *(_DWORD *)(v41 + 9912) = v100;
        *(_DWORD *)(v41 + 12188) = 0;
        *(_DWORD *)(v41 + 12228) = 0;
        v57 = *(_WORD *)(v41 + 12234) & 0x62C;
        *(_WORD *)(v41 + 12234) = v57;
        *(_WORD *)(v41 + 12234) = v36 | v57 | 0x40;
      }
    }
  }
  else
  {
    inited = -1073741503;
    v61 = -1073741503;
  }
LABEL_64:
  KiUnstackDetachProcess(&v104);
  if ( inited >= 0 )
    goto LABEL_53;
LABEL_97:
  if ( v67 && *v67 )
    PspDeleteUserStack(BugCheckParameter1, v38, v64, v67);
  v48 = (void *)*((_QWORD *)v28 + 205);
  if ( v48 )
  {
    ExFreePoolWithTag(v48, 0x63537350u);
    *((_QWORD *)v28 + 205) = 0LL;
  }
  if ( *((_QWORD *)v28 + 154) )
  {
    v49 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v49);
    KeAbPostRelease((ULONG_PTR)v49);
    inited = v61;
    v28 = (char *)Object;
  }
  if ( !*((_QWORD *)v28 + 68) )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v28);
  return (unsigned int)inited;
}
