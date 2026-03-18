/*
 * XREFs of MiApplyImageHotPatchRequest @ 0x140971DC0
 * Callers:
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 * Callees:
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiDereferenceControlAreaBySection @ 0x140287574 (MiDereferenceControlAreaBySection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     MiSetVadFlags @ 0x14030B950 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReferenceMappedControlArea @ 0x14058D270 (MiReferenceMappedControlArea.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     MmGetFileNameForSection @ 0x14096B158 (MmGetFileNameForSection.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140972818 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x140972D90 (MiDeleteHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1409734B8 (MiGetProcessHotPatchContext.c)
 *     MiGetVadForHotPatchInProgress @ 0x140973534 (MiGetVadForHotPatchInProgress.c)
 *     MiInitializeImageHotPatchContext @ 0x140973AB0 (MiInitializeImageHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x140974B60 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiPrepareToHotPatchVad @ 0x140976DFC (MiPrepareToHotPatchVad.c)
 *     MiReleaseHotPatchResources @ 0x1409778EC (MiReleaseHotPatchResources.c)
 *     RtlEnumerateHotPatchPatches @ 0x1409C04B8 (RtlEnumerateHotPatchPatches.c)
 *     RtlApplyHotPatch @ 0x140A6BF28 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyImageHotPatchRequest(__int64 a1)
{
  __int64 *v2; // r12
  __int64 v3; // r14
  char v4; // di
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *Process; // rcx
  int VadForHotPatchInProgress; // esi
  unsigned int v8; // eax
  PVOID v9; // r15
  __int64 v10; // rdx
  __int64 VadEvent; // rax
  signed __int64 v12; // r9
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  PVOID v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // si
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  signed __int64 v23; // rax
  __int64 *v24; // rcx
  bool v25; // zf
  unsigned int v26; // ecx
  __int64 ProcessHotPatchContext; // rax
  int v28; // r9d
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // r12
  PVOID v32; // rsi
  int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // esi
  UNICODE_STRING v36; // xmm1
  __int64 *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rcx
  PVOID v40; // rbx
  char *v41; // r15
  int v43; // [rsp+28h] [rbp-130h]
  char v44; // [rsp+30h] [rbp-128h]
  int v45; // [rsp+38h] [rbp-120h]
  int v46; // [rsp+40h] [rbp-118h]
  int v47; // [rsp+70h] [rbp-E8h]
  int v48; // [rsp+B0h] [rbp-A8h]
  __int64 v49; // [rsp+B8h] [rbp-A0h]
  __int64 v50; // [rsp+C0h] [rbp-98h]
  int v51; // [rsp+C8h] [rbp-90h]
  __int16 v52; // [rsp+D8h] [rbp-80h]
  int v53; // [rsp+DCh] [rbp-7Ch] BYREF
  struct _KTHREAD *v54; // [rsp+E0h] [rbp-78h]
  int v55; // [rsp+E8h] [rbp-70h] BYREF
  PVOID v56; // [rsp+F0h] [rbp-68h] BYREF
  PVOID P; // [rsp+F8h] [rbp-60h] BYREF
  PVOID v58; // [rsp+100h] [rbp-58h] BYREF
  unsigned int v59; // [rsp+108h] [rbp-50h]
  __int64 v60; // [rsp+110h] [rbp-48h]
  __int64 v61; // [rsp+118h] [rbp-40h]
  __int64 v62; // [rsp+120h] [rbp-38h] BYREF
  __int64 v63; // [rsp+128h] [rbp-30h] BYREF
  signed __int64 v64; // [rsp+130h] [rbp-28h]
  __int64 v65; // [rsp+138h] [rbp-20h] BYREF
  PCUNICODE_STRING StringIn; // [rsp+140h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp-10h] BYREF
  __int128 v68; // [rsp+158h] [rbp+0h] BYREF
  struct _EX_RUNDOWN_REF *v69; // [rsp+168h] [rbp+10h]
  __int64 v70[18]; // [rsp+178h] [rbp+20h] BYREF
  _QWORD v71[8]; // [rsp+208h] [rbp+B0h] BYREF
  int v72[36]; // [rsp+248h] [rbp+F0h] BYREF
  ULONG_PTR v73[10]; // [rsp+2D8h] [rbp+180h] BYREF

  memset(v72, 0, sizeof(v72));
  memset(v70, 0, sizeof(v70));
  v68 = 0LL;
  memset(v73, 0, sizeof(v73));
  v56 = 0LL;
  v58 = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  StringIn = 0LL;
  v62 = 0LL;
  LODWORD(v61) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = 0;
  MiInitializeImageHotPatchContext(v72, 0LL, 0LL);
  MiInitializeImageHotPatchContext(v70, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v60 = 0LL;
  v55 = 0;
  v53 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v69 = Process;
  v54 = CurrentThread;
  if ( *(_DWORD *)a1 != 1 )
    goto LABEL_2;
  if ( *(_QWORD *)(a1 + 8) != -1LL )
    goto LABEL_2;
  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 >= 8 || (v8 & 3) == 0 )
    goto LABEL_2;
  if ( (v8 & 4) != 0 )
  {
    if ( (v8 & 1) != 0 || *(_QWORD *)(a1 + 24) )
      goto LABEL_2;
    if ( (dword_140C533E4 & 2) != 0 )
    {
LABEL_10:
      VadForHotPatchInProgress = -1073740758;
      goto LABEL_92;
    }
  }
  else if ( !*(_QWORD *)(a1 + 24) )
  {
LABEL_2:
    VadForHotPatchInProgress = -1073741811;
LABEL_92:
    MiLogHotPatchOperationStatus(v60, HIDWORD(v60), (unsigned int)&DestinationString, VadForHotPatchInProgress, 0);
    goto LABEL_93;
  }
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_2;
  v4 = ExAcquireRundownProtection(Process + 139) & 1;
  if ( !v4 )
  {
    VadForHotPatchInProgress = -1073741558;
    goto LABEL_92;
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 16), 0LL, &v56, &v55);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_92;
  v9 = v56;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 && !v55 )
  {
    VadForHotPatchInProgress = 1075380276;
    goto LABEL_34;
  }
  v64 = ***((_QWORD ***)v56 + 9);
  v10 = *(_QWORD *)(v64 + 56);
  LODWORD(v60) = *(_DWORD *)(v10 + 60);
  HIDWORD(v60) = *(_DWORD *)(v10 + 72);
  VadEvent = MiLocateVadEvent((__int64)v56, 512LL);
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
LABEL_21:
      VadForHotPatchInProgress = -1073741670;
      goto LABEL_34;
    }
    *((_DWORD *)Pool + 16) = 512;
    v15 = MiAllocatePool(256, 0x48uLL, 0x4E455048u);
    v14[1] = v15;
    if ( !v15 )
    {
      ExFreePoolWithTag(v14, 0);
      goto LABEL_21;
    }
    MiInsertVadEvent((__int64)v56, v14, 1);
    v3 = v14[1];
    v12 = v64;
    v55 = 2;
    *(_QWORD *)(v3 + 32) = v60;
  }
  *(_DWORD *)(v3 + 68) |= 1u;
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), -1LL, -1LL);
  v17 = *(_QWORD *)(v12 + 56);
  v64 = v16;
  v18 = *(_WORD *)(v17 + 48);
  v52 = v18;
  if ( v18 != -31132 && v18 != 332 && v18 != -21916 )
  {
    VadForHotPatchInProgress = -1073741701;
    goto LABEL_34;
  }
  CurrentThread = v54;
  MiUnlockVad((__int64)v54, (__int64)v56);
  v63 = 0LL;
  v19 = *(_DWORD *)(a1 + 4);
  v59 = 0;
  if ( (v19 & 4) != 0 )
  {
LABEL_52:
    if ( v18 == 332
      && ((((*((unsigned int *)v56 + 7) | ((unsigned __int64)*((unsigned __int8 *)v56 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL
       || v58
       && (((*((unsigned int *)v58 + 7) | ((unsigned __int64)*((unsigned __int8 *)v58 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL) )
    {
      VadForHotPatchInProgress = -1073741799;
LABEL_90:
      v2 = 0LL;
      goto LABEL_91;
    }
    if ( (_DWORD)v64 == -1 || (_DWORD)v61 == -1 )
    {
      VadForHotPatchInProgress = -1073739516;
      goto LABEL_90;
    }
    ProcessHotPatchContext = MiGetProcessHotPatchContext(v69, 1LL);
    v61 = ProcessHotPatchContext;
    if ( !ProcessHotPatchContext )
    {
      VadForHotPatchInProgress = -1073741670;
      goto LABEL_90;
    }
    if ( v58 )
    {
      v29 = v61;
      v2 = 0LL;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   v61,
                                   (_DWORD)v58,
                                   (unsigned int)v70,
                                   v28,
                                   v43,
                                   v18,
                                   (__int64)P,
                                   0LL,
                                   *(_DWORD *)(a1 + 4) & 1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_91;
      v18 = v52;
    }
    else
    {
      v29 = ProcessHotPatchContext;
    }
    v2 = 0LL;
    VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                 v29,
                                 (_DWORD)v56,
                                 (unsigned int)v72,
                                 v28,
                                 v43,
                                 v18,
                                 (__int64)P,
                                 v3,
                                 1);
    if ( VadForHotPatchInProgress >= 0 )
    {
      v30 = *(_DWORD *)(a1 + 4);
      if ( (v30 & 1) == 0 )
      {
LABEL_68:
        if ( (v30 & 2) != 0 )
        {
          v34 = v62;
          if ( (v30 & 4) == 0 )
          {
            DWORD2(v68) = 0;
            *(_QWORD *)&v68 = *(_QWORD *)&v72[2];
            RtlEnumerateHotPatchPatches(P, v62, MiDisableXfgOnPatchedFunctions, &v68);
          }
          v2 = 0LL;
          VadForHotPatchInProgress = MiApplyImageHotPatch((__int64)v72, (__int64)v70, v3, (__int64)P, v34);
          if ( VadForHotPatchInProgress < 0 )
            goto LABEL_91;
        }
        --v54->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v29 + 16, 0LL);
        v45 = VadForHotPatchInProgress;
        v35 = v59;
        MiLogHotPatchOperation(
          v3,
          *(_DWORD *)(v3 + 32),
          *(_DWORD *)(v3 + 36),
          v59,
          (__int64)&v63,
          (__int64)&DestinationString,
          v45,
          (*(_DWORD *)(a1 + 4) & 2) == 0);
        if ( (*(_DWORD *)(a1 + 4) & 2) != 0 )
        {
          v36 = *(UNICODE_STRING *)(v3 + 40);
          *(_QWORD *)(v3 + 56) = v63;
          *(_DWORD *)(v3 + 64) = v35;
          *(UNICODE_STRING *)(v3 + 40) = DestinationString;
          DestinationString = v36;
          if ( !*(_QWORD *)v3 )
          {
            v37 = *(__int64 **)(v29 + 8);
            if ( *v37 != v29 )
              goto LABEL_88;
            *(_QWORD *)v3 = v29;
            *(_QWORD *)(v3 + 8) = v37;
            *v37 = v3;
            *(_QWORD *)(v29 + 8) = v3;
          }
        }
        if ( (*(_DWORD *)(a1 + 4) & 4) == 0 )
          goto LABEL_81;
        v38 = *(_QWORD *)v3;
        if ( !*(_QWORD *)v3 )
          goto LABEL_81;
        if ( *(_QWORD *)(v38 + 8) == v3 )
        {
          v39 = *(_QWORD **)(v3 + 8);
          if ( *v39 == v3 )
          {
            *v39 = v38;
            *(_QWORD *)(v38 + 8) = v39;
            *(_QWORD *)v3 = 0LL;
LABEL_81:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v29 + 16);
            KeAbPostRelease(v29 + 16);
            CurrentThread = v54;
            v25 = v54->SpecialApcDisable++ == -1;
            if ( v25
              && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            VadForHotPatchInProgress = 0;
            v2 = 0LL;
            goto LABEL_93;
          }
        }
LABEL_88:
        __fastfail(3u);
      }
      v31 = v62;
      v32 = P;
      *(_QWORD *)&v68 = v70[1];
      DWORD2(v68) = 1;
      RtlEnumerateHotPatchPatches(P, v62, MiDisableXfgOnPatchedFunctions, &v68);
      LODWORD(v65) = 0;
      v33 = RtlApplyHotPatch(
              v72[18],
              v72[2],
              0,
              0,
              0LL,
              v44,
              0LL,
              v46,
              v70[9],
              v70[1],
              v70[10],
              SHIDWORD(v70[4]),
              (__int64)&v65,
              v47,
              (__int64)v32,
              v31,
              2,
              v52,
              0LL,
              0LL,
              0LL,
              v48,
              v49,
              v50,
              v51);
      v2 = 0LL;
      VadForHotPatchInProgress = v33;
      if ( v33 >= 0 )
      {
        v30 = *(_DWORD *)(a1 + 4);
        v53 = 3;
        goto LABEL_68;
      }
    }
LABEL_91:
    CurrentThread = v54;
    goto LABEL_92;
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 24), 1LL, &v58, &v53);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_92;
  v9 = v58;
  v20 = ***((_QWORD ***)v58 + 9);
  v21 = *(_QWORD *)(v20 + 56);
  if ( v52 == *(_WORD *)(v21 + 48) )
  {
    LODWORD(v63) = *(_DWORD *)(v21 + 60);
    HIDWORD(v63) = *(_DWORD *)(v21 + 72);
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), -1LL, -1LL);
    v24 = (__int64 *)*((_QWORD *)v9 + 9);
    v61 = v23;
    v2 = (__int64 *)*v24;
    MiReferenceMappedControlArea(*v24);
    CurrentThread = v54;
    MiUnlockVad((__int64)v54, (__int64)v58);
    VadForHotPatchInProgress = MiMapImageInSystemSpace(v2, 1, (__int64)v73);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_92;
    if ( (*(_DWORD *)(a1 + 4) & 2) != 0 )
    {
      memset(v71, 0, sizeof(v71));
      LODWORD(v71[7]) = 32;
      v71[5] = v2;
      VadForHotPatchInProgress = MmGetFileNameForSection((__int64)v71, (__int64 *)&StringIn);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_92;
      VadForHotPatchInProgress = RtlDuplicateUnicodeString(0, StringIn, &DestinationString);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_92;
    }
    MiDereferenceControlAreaBySection((__int64)v2, 1u);
    v2 = 0LL;
    if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
      v25 = v53 == 0;
    else
      v25 = v53 == 3;
    if ( !v25 )
    {
      VadForHotPatchInProgress = -1073700861;
      goto LABEL_92;
    }
    VadForHotPatchInProgress = MiCaptureHotPatchInfo(
                                 (unsigned int)v73,
                                 v64,
                                 *(_DWORD *)(v3 + 32),
                                 *(_DWORD *)(v3 + 36),
                                 v52,
                                 (__int64)&P,
                                 (__int64)&v62);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_92;
    v26 = *((_DWORD *)P + 2);
    v59 = v26;
    if ( (dword_140C533E4 & 2) != 0 && *(_DWORD *)(v3 + 64) >= v26 )
      goto LABEL_10;
    v18 = v52;
    goto LABEL_52;
  }
  VadForHotPatchInProgress = -1073741621;
LABEL_34:
  if ( v9 )
  {
    v22 = (__int64)v9;
    CurrentThread = v54;
    MiUnlockVad((__int64)v54, v22);
  }
  else
  {
    CurrentThread = v54;
  }
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_92;
LABEL_93:
  v40 = v56;
  if ( v56 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v56);
    MiSetVadFlags((__int64)v40, 4LL, v55);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 68) &= ~1u;
      v3 &= -(__int64)((*(_DWORD *)(v3 + 68) & 2) != 0);
    }
    MiUnlockAndDereferenceVad((char *)v56);
  }
  v41 = (char *)v58;
  if ( v58 )
  {
    MiLockVad((__int64)v54, (__int64)v58);
    MiSetVadFlags((__int64)v41, 4LL, v53);
    MiUnlockAndDereferenceVad(v41);
  }
  if ( v3 )
    MiDeleteHotPatchEntry((PVOID)v3);
  MiReleaseHotPatchResources(v72);
  MiReleaseHotPatchResources(v70);
  if ( (v4 & 1) != 0 )
    ExReleaseRundownProtection(v69 + 139);
  if ( v73[0] )
    MiUnmapImageInSystemSpace(v73);
  if ( v2 )
    MiDereferenceControlAreaBySection((__int64)v2, 1u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( StringIn )
    ExFreePoolWithTag((PVOID)StringIn, 0);
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)VadForHotPatchInProgress;
}
