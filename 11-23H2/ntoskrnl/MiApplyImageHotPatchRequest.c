/*
 * XREFs of MiApplyImageHotPatchRequest @ 0x140A35890
 * Callers:
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiSetVadFlags @ 0x140287940 (MiSetVadFlags.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14029FB3C (MiDereferenceControlAreaBySection.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReferenceMappedControlArea @ 0x140628DAC (MiReferenceMappedControlArea.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140A36468 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x140A36A00 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x140A3725C (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x140A37540 (MiGetProcessHotPatchContext.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A375BC (MiGetVadForHotPatchInProgress.c)
 *     MiInitializeImageHotPatchContext @ 0x140A37B34 (MiInitializeImageHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x140A38DAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A39208 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140A3A600 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchVad @ 0x140A3B19C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B2C8 (MiProcessPatchImageCfg.c)
 *     MiReleaseHotPatchResources @ 0x140A3BF50 (MiReleaseHotPatchResources.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A766B4 (RtlEnumerateHotPatchPatches.c)
 *     RtlApplyHotPatch @ 0x140AAD5E0 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyImageHotPatchRequest(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r14
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rbx
  struct _EX_RUNDOWN_REF *Process; // rdx
  int VadForHotPatchInProgress; // esi
  unsigned int v8; // eax
  PVOID v9; // r15
  __int64 v10; // rcx
  __int64 VadEvent; // rax
  __int64 v12; // r8
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  PVOID v15; // rax
  __int64 v16; // r9
  signed __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // si
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  signed __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  char v28; // dl
  int v29; // r8d
  UNICODE_STRING *v30; // r15
  char v31; // r13
  int v32; // eax
  PVOID v33; // r15
  bool v34; // zf
  unsigned int v35; // ecx
  int v36; // r9d
  int v37; // ecx
  PVOID v38; // r15
  int v39; // eax
  __int64 v40; // r12
  volatile signed __int32 *v41; // r15
  __int64 v42; // rax
  unsigned int v43; // esi
  UNICODE_STRING v44; // xmm1
  __int64 *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rcx
  struct _EX_RUNDOWN_REF *v48; // r13
  PVOID v49; // r15
  char *v50; // r15
  PVOID v51; // rbx
  PVOID v52; // rdi
  UNICODE_STRING *v53; // rcx
  int v55; // [rsp+20h] [rbp-130h]
  char v56; // [rsp+28h] [rbp-128h]
  int v57; // [rsp+30h] [rbp-120h]
  int v58; // [rsp+38h] [rbp-118h]
  int v59; // [rsp+68h] [rbp-E8h]
  int v60; // [rsp+A8h] [rbp-A8h]
  __int64 v61; // [rsp+B0h] [rbp-A0h]
  __int64 v62; // [rsp+B8h] [rbp-98h]
  int v63; // [rsp+C0h] [rbp-90h]
  int v64; // [rsp+D8h] [rbp-78h] BYREF
  PVOID v65; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-68h]
  PVOID v67; // [rsp+F0h] [rbp-60h] BYREF
  PVOID P; // [rsp+F8h] [rbp-58h] BYREF
  int v69; // [rsp+100h] [rbp-50h]
  unsigned int v70; // [rsp+104h] [rbp-4Ch]
  __int64 v71; // [rsp+108h] [rbp-48h] BYREF
  PVOID v72; // [rsp+110h] [rbp-40h] BYREF
  __int64 v73; // [rsp+118h] [rbp-38h] BYREF
  PVOID Object; // [rsp+120h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp-28h] BYREF
  __int64 v76; // [rsp+130h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+138h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp-10h] BYREF
  __int128 v79; // [rsp+150h] [rbp+0h] BYREF
  signed __int64 v80; // [rsp+160h] [rbp+10h]
  signed __int64 v81; // [rsp+168h] [rbp+18h]
  PEX_RUNDOWN_REF RunRef; // [rsp+170h] [rbp+20h]
  _QWORD v83[10]; // [rsp+180h] [rbp+30h] BYREF
  __int64 v84[18]; // [rsp+1D0h] [rbp+80h] BYREF
  int v85[52]; // [rsp+260h] [rbp+110h] BYREF
  __int64 ProcessHotPatchContext; // [rsp+340h] [rbp+1F0h]
  __int64 v88; // [rsp+340h] [rbp+1F0h]
  char v89; // [rsp+348h] [rbp+1F8h]
  UNICODE_STRING *v90; // [rsp+348h] [rbp+1F8h]
  __int64 v91; // [rsp+350h] [rbp+200h]
  __int16 v92; // [rsp+350h] [rbp+200h]
  int v93; // [rsp+358h] [rbp+208h] BYREF

  v1 = a1;
  memset(v85, 0, 0x90uLL);
  memset(v84, 0, sizeof(v84));
  v79 = 0LL;
  memset(v83, 0, sizeof(v83));
  v65 = 0LL;
  v67 = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  LODWORD(v81) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LOBYTE(v4) = 0;
  MiInitializeImageHotPatchContext(v85, 0LL, 0LL);
  MiInitializeImageHotPatchContext(v84, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v66 = 0LL;
  v64 = 0;
  v93 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v77 = Process;
  if ( *(_DWORD *)v1 != 1 )
  {
    VadForHotPatchInProgress = -1073741811;
    goto LABEL_110;
  }
  if ( *(_QWORD *)(v1 + 8) != -1LL )
    goto LABEL_4;
  v8 = *(_DWORD *)(v1 + 4);
  v69 = 8;
  if ( v8 >= 8 || (v8 & 3) == 0 )
    goto LABEL_4;
  if ( (v8 & 4) != 0 )
  {
    if ( (v8 & 1) != 0 || *(_QWORD *)(v1 + 24) )
      goto LABEL_4;
    if ( (qword_140C69880 & 2) != 0 )
      goto LABEL_11;
  }
  else if ( !*(_QWORD *)(v1 + 24) )
  {
LABEL_4:
    VadForHotPatchInProgress = -1073741811;
    goto LABEL_110;
  }
  if ( !*(_QWORD *)(v1 + 16) )
    goto LABEL_4;
  RunRef = Process + 139;
  v4 = ExAcquireRundownProtection_0(Process + 139) & 1;
  if ( !v4 )
  {
    VadForHotPatchInProgress = -1073741558;
    goto LABEL_110;
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(v1 + 16), 0LL, &v65, &v64);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_110;
  v9 = v65;
  if ( (*(_DWORD *)(v1 + 4) & 4) != 0 && !v64 )
  {
    VadForHotPatchInProgress = 1075380276;
    goto LABEL_35;
  }
  v91 = ***((_QWORD ***)v65 + 9);
  v10 = *(_QWORD *)(v91 + 56);
  LODWORD(v66) = *(_DWORD *)(v10 + 60);
  HIDWORD(v66) = *(_DWORD *)(v10 + 72);
  v89 = *(_BYTE *)(v91 + 15) >> 4;
  VadEvent = MiLocateVadEvent((__int64)v65, 512LL);
  if ( VadEvent )
  {
    v3 = *(_QWORD *)(VadEvent + 8);
  }
  else
  {
    Pool = MiAllocatePool(64, 0x48uLL, 0x6248694Du);
    v14 = Pool;
    if ( !Pool )
    {
LABEL_22:
      VadForHotPatchInProgress = -1073741670;
      goto LABEL_35;
    }
    *((_DWORD *)Pool + 16) = 512;
    v15 = MiAllocatePool(256, 0x48uLL, 0x4E455048u);
    v14[1] = v15;
    if ( !v15 )
    {
      ExFreePoolWithTag(v14, 0);
      goto LABEL_22;
    }
    MiInsertVadEvent((__int64)v65, v14, 1LL, v16);
    v3 = v14[1];
    v12 = v91;
    v64 = 2;
    *(_QWORD *)(v3 + 32) = v66;
  }
  *(_DWORD *)(v3 + 68) |= 1u;
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), -1LL, -1LL);
  v18 = *(_QWORD *)(v12 + 56);
  v80 = v17;
  v19 = *(_WORD *)(v18 + 48);
  v92 = v19;
  if ( v19 != -31132 && v19 != 332 && v19 != -21916 )
  {
    VadForHotPatchInProgress = -1073741701;
    goto LABEL_35;
  }
  MiUnlockVad((__int64)CurrentThread, (__int64)v65);
  v73 = 0LL;
  v20 = *(_DWORD *)(v1 + 4);
  v70 = 0;
  if ( (v20 & 4) != 0 )
  {
LABEL_66:
    if ( v19 == 332
      && ((((*((unsigned int *)v65 + 7) | ((unsigned __int64)*((unsigned __int8 *)v65 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL
       || v67
       && (((*((unsigned int *)v67 + 7) | ((unsigned __int64)*((unsigned __int8 *)v67 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL) )
    {
      VadForHotPatchInProgress = -1073741799;
LABEL_109:
      v2 = 0LL;
      goto LABEL_110;
    }
    if ( (_DWORD)v80 == -1 || (_DWORD)v81 == -1 )
    {
      VadForHotPatchInProgress = -1073739516;
      goto LABEL_109;
    }
    ProcessHotPatchContext = MiGetProcessHotPatchContext(v77, 1LL);
    v37 = ProcessHotPatchContext;
    if ( !ProcessHotPatchContext )
    {
      VadForHotPatchInProgress = -1073741670;
      goto LABEL_109;
    }
    if ( v67 )
    {
      v2 = 0LL;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   ProcessHotPatchContext,
                                   (_DWORD)v67,
                                   (unsigned int)v84,
                                   v36,
                                   v55,
                                   v19,
                                   (__int64)P,
                                   0LL,
                                   *(_DWORD *)(v1 + 4) & 1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
      v37 = ProcessHotPatchContext;
      v19 = v92;
    }
    v38 = P;
    v2 = 0LL;
    VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                 v37,
                                 (_DWORD)v65,
                                 (unsigned int)v85,
                                 v36,
                                 v55,
                                 v19,
                                 (__int64)P,
                                 v3,
                                 1);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_110;
    if ( (*(_DWORD *)(v1 + 4) & 1) != 0 )
    {
      DWORD2(v79) = 1;
      *(_QWORD *)&v79 = v84[1];
      RtlEnumerateHotPatchPatches(v38, v71, MiDisableXfgOnPatchedFunctions, &v79);
      VadForHotPatchInProgress = MiProcessPatchImageCfg(v67, v38, v71);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
      LODWORD(v76) = 0;
      VadForHotPatchInProgress = RtlApplyHotPatch(
                                   v85[18],
                                   v85[2],
                                   0,
                                   0,
                                   0LL,
                                   v56,
                                   0LL,
                                   v58,
                                   v84[9],
                                   v84[1],
                                   v84[10],
                                   SHIDWORD(v84[4]),
                                   (__int64)&v76,
                                   v59,
                                   (__int64)v38,
                                   v71,
                                   2,
                                   v92,
                                   0LL,
                                   0LL,
                                   0LL,
                                   v60,
                                   v61,
                                   v62,
                                   v63);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
      v93 = 3;
    }
    v39 = *(_DWORD *)(v1 + 4);
    if ( (v39 & 2) != 0 )
    {
      if ( (v39 & 4) == 0 )
      {
        DWORD2(v79) = 0;
        *(_QWORD *)&v79 = *(_QWORD *)&v85[2];
        RtlEnumerateHotPatchPatches(P, v71, MiDisableXfgOnPatchedFunctions, &v79);
      }
      v2 = 0LL;
      VadForHotPatchInProgress = MiApplyImageHotPatch((__int64)v85, (__int64)v84, v3, (__int64)P, v71);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_110;
    }
    v40 = ProcessHotPatchContext;
    --CurrentThread->SpecialApcDisable;
    v41 = (volatile signed __int32 *)(ProcessHotPatchContext + 16);
    v42 = KeAbPreAcquire(ProcessHotPatchContext + 16, 0LL);
    v88 = v42;
    if ( _interlockedbittestandset64(v41, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v40 + 16), v42, v40 + 16);
      v42 = v88;
    }
    if ( v42 )
      *(_BYTE *)(v42 + 18) = 1;
    v57 = VadForHotPatchInProgress;
    v43 = v70;
    MiLogHotPatchOperation(
      v3,
      *(_DWORD *)(v3 + 32),
      *(_DWORD *)(v3 + 36),
      v70,
      (__int64)&v73,
      (__int64)&DestinationString,
      v57,
      ((*(_DWORD *)(v1 + 4) >> 1) & 1) == 0);
    if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
    {
      v44 = *(UNICODE_STRING *)(v3 + 40);
      *(_QWORD *)(v3 + 56) = v73;
      *(_DWORD *)(v3 + 64) = v43;
      *(UNICODE_STRING *)(v3 + 40) = DestinationString;
      DestinationString = v44;
      if ( !*(_QWORD *)v3 )
      {
        v45 = *(__int64 **)(v40 + 8);
        if ( *v45 != v40 )
          goto LABEL_107;
        *(_QWORD *)v3 = v40;
        *(_QWORD *)(v3 + 8) = v45;
        *v45 = v3;
        *(_QWORD *)(v40 + 8) = v3;
      }
    }
    if ( (*(_DWORD *)(v1 + 4) & 4) == 0 )
      goto LABEL_100;
    v46 = *(_QWORD *)v3;
    if ( !*(_QWORD *)v3 )
      goto LABEL_100;
    if ( *(_QWORD *)(v46 + 8) == v3 )
    {
      v47 = *(_QWORD **)(v3 + 8);
      if ( *v47 == v3 )
      {
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
        *(_QWORD *)v3 = 0LL;
LABEL_100:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v40 + 16));
        KeAbPostRelease(v40 + 16);
        v34 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v34
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        VadForHotPatchInProgress = 0;
        v2 = 0LL;
LABEL_106:
        v48 = RunRef;
        goto LABEL_111;
      }
    }
LABEL_107:
    __fastfail(3u);
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(v1 + 24), 1LL, &v67, &v93);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_110;
  v9 = v67;
  v21 = ***((_QWORD ***)v67 + 9);
  v22 = *(_QWORD *)(v21 + 56);
  if ( v92 != *(_WORD *)(v22 + 48) )
  {
    VadForHotPatchInProgress = -1073741621;
LABEL_35:
    if ( v9 )
      MiUnlockVad((__int64)CurrentThread, (__int64)v9);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_110;
    goto LABEL_106;
  }
  LODWORD(v73) = *(_DWORD *)(v22 + 60);
  HIDWORD(v73) = *(_DWORD *)(v22 + 72);
  v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), -1LL, -1LL);
  v24 = (__int64 *)*((_QWORD *)v9 + 9);
  v81 = v23;
  v2 = *v24;
  MiReferenceMappedControlArea(*v24);
  MiUnlockVad((__int64)CurrentThread, (__int64)v67);
  if ( qword_140C37980 )
  {
    LOBYTE(v25) = 8;
    LOBYTE(v26) = v89;
    v27 = qword_140C37980(v26, v25);
    v28 = 8;
    if ( v27 )
      v28 = v89;
    LOBYTE(v69) = v28;
  }
  VadForHotPatchInProgress = MiGetAllRegisteredPatches(v77, (unsigned int)v66, HIDWORD(v66), &v72);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_110;
  v30 = (UNICODE_STRING *)v72;
  VadForHotPatchInProgress = 0;
  v90 = (UNICODE_STRING *)v72;
  if ( !v72 )
    goto LABEL_56;
  v31 = v69;
  while ( 1 )
  {
    LOBYTE(v29) = v31;
    v32 = MiOpenHotPatchFile((int)v30 + 32, 0, v29, (unsigned int)&Handle, (__int64)&Object, (__int64)v83, 0LL);
    if ( v32 < 0 )
    {
      if ( VadForHotPatchInProgress >= 0 )
        VadForHotPatchInProgress = v32;
      goto LABEL_51;
    }
    v33 = Object;
    if ( MiSectionControlArea((__int64)Object) == v2 )
      break;
    MiUnmapImageInSystemSpace((__int64)v83);
    v83[0] = 0LL;
    ObfDereferenceObject(v33);
    Object = 0LL;
    ObCloseHandle(Handle, 0);
    Handle = 0LL;
    v30 = v90;
LABEL_51:
    v30 = *(UNICODE_STRING **)&v30->Length;
    v90 = v30;
    if ( !v30 )
      goto LABEL_54;
  }
  v30 = v90;
LABEL_54:
  v1 = a1;
  if ( !v30 )
  {
    if ( VadForHotPatchInProgress >= 0 )
LABEL_56:
      VadForHotPatchInProgress = -1073740588;
    goto LABEL_110;
  }
  MiDereferenceControlAreaBySection(v2, 1u);
  v2 = 0LL;
  DestinationString = v30[2];
  RtlInitUnicodeString(v30 + 2, 0LL);
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
    v34 = v93 == 0;
  else
    v34 = v93 == 3;
  if ( !v34 )
  {
    VadForHotPatchInProgress = -1073700861;
    goto LABEL_110;
  }
  VadForHotPatchInProgress = MiCaptureHotPatchInfo(
                               (unsigned int)v83,
                               v80,
                               *(_DWORD *)(v3 + 32),
                               *(_DWORD *)(v3 + 36),
                               v92,
                               (__int64)&P,
                               (__int64)&v71);
  if ( VadForHotPatchInProgress >= 0 )
  {
    v35 = *((_DWORD *)P + 2);
    v70 = v35;
    if ( (qword_140C69880 & 2) == 0 || *(_DWORD *)(v3 + 64) < v35 )
    {
      v19 = v92;
      goto LABEL_66;
    }
LABEL_11:
    VadForHotPatchInProgress = -1073740758;
  }
LABEL_110:
  MiLogHotPatchOperationStatus(v66, HIDWORD(v66), (unsigned int)&DestinationString, VadForHotPatchInProgress, 0);
  v48 = v77 + 139;
LABEL_111:
  v49 = v65;
  if ( v65 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v65);
    MiSetVadFlags((__int64)v49, 4LL, v64);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 68) &= ~1u;
      v3 &= -(__int64)((*(_DWORD *)(v3 + 68) & 2) != 0);
    }
    MiUnlockAndDereferenceVad((char *)v65);
  }
  v50 = (char *)v67;
  if ( v67 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v67);
    MiSetVadFlags((__int64)v50, 4LL, v93);
    MiUnlockAndDereferenceVad(v50);
  }
  if ( v3 )
    MiDeleteHotPatchEntry((PVOID)v3);
  MiReleaseHotPatchResources(v85);
  MiReleaseHotPatchResources(v84);
  if ( (v4 & 1) != 0 )
    ExReleaseRundownProtection_0(v48);
  if ( v83[0] )
    MiUnmapImageInSystemSpace((__int64)v83);
  if ( v2 )
    MiDereferenceControlAreaBySection(v2, 1u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v72 )
  {
    do
    {
      v51 = v72;
      v53 = (UNICODE_STRING *)((char *)v72 + 32);
      v72 = *(PVOID *)v72;
      v52 = v72;
      RtlFreeUnicodeString(v53);
      ExFreePoolWithTag(v51, 0);
    }
    while ( v52 );
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)VadForHotPatchInProgress;
}
