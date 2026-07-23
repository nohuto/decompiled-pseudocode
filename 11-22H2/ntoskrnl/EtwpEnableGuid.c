/*
 * XREFs of EtwpEnableGuid @ 0x140780210
 * Callers:
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x14080BDF4 (EtwpEnableTrace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x14028C060 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadProcessId @ 0x1402AF870 (PsGetCurrentThreadProcessId.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031CDCC (EtwpEnableMetaProviderGuid.c)
 *     MmDetachSession @ 0x140355CB0 (MmDetachSession.c)
 *     MmAttachSession @ 0x140355D50 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF870 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF9A4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x14077E16C (EtwpProviderArrivalCallback.c)
 *     EtwpCreateUmReplyObject @ 0x14077EFDC (EtwpCreateUmReplyObject.c)
 *     EtwpValidateEnableNotification @ 0x140780B38 (EtwpValidateEnableNotification.c)
 *     EtwpFreeFilterInfo @ 0x140780CA8 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140780D88 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpEnableDisableSpecialGuids @ 0x14078128C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpIsRegEntryAllowed @ 0x1407813B8 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x140781500 (EtwpSendDataBlock.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1407818F4 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpCalculateUpdateNotification @ 0x1407819B0 (EtwpCalculateUpdateNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x140781CF8 (EtwpUnreferenceDataBlock.c)
 *     EtwpAddGuidEntry @ 0x140781D88 (EtwpAddGuidEntry.c)
 *     EtwpBuildNotificationPacket @ 0x1407820C4 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x140782148 (EtwpAllocDataBlock.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140854370 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A6F4A (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpEventWriteCaptureState @ 0x1409E3434 (EtwpEventWriteCaptureState.c)
 *     EtwpEventWriteProviderEnabled @ 0x1409E3830 (EtwpEventWriteProviderEnabled.c)
 *     EtwpAllocateStackwalkApcPool @ 0x1409E8AE4 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E8C0C (EtwpReferenceStackLookasideList.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1409EC580 (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  int v6; // esi
  ULONG_PTR v7; // rdi
  _WORD *v8; // r15
  int v9; // eax
  int v10; // r8d
  int updated; // ebx
  unsigned int v12; // r12d
  int v13; // ebx
  unsigned int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v16; // rsi
  int CurrentThreadProcessId; // eax
  char v18; // di
  GUID *v19; // rdx
  unsigned int v20; // r15d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // r8d
  _QWORD *GuidEntryByGuid; // rax
  struct _KTHREAD *v25; // rax
  int v26; // ecx
  char v27; // r15
  __int16 v28; // cx
  char v29; // al
  __int64 v30; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  void *v34; // rbx
  size_t v35; // rcx
  int v36; // eax
  int v37; // r12d
  _DWORD *v38; // rdx
  unsigned __int8 i; // cl
  unsigned int v40; // r12d
  __int64 v41; // rcx
  _QWORD *v42; // r13
  _QWORD *v43; // rax
  __int64 v44; // r13
  int v45; // r8d
  int v46; // r9d
  char v47; // r15
  char v48; // bl
  int v49; // r9d
  int v50; // edx
  int v51; // r8d
  char v52; // al
  __int16 v53; // cx
  void *v54; // rdx
  _QWORD *v55; // rbx
  __int64 v56; // rcx
  unsigned int v57; // r13d
  const EVENT_DESCRIPTOR *v58; // r12
  int v59; // ecx
  __int64 v60; // r8
  __int64 v61; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v63; // rbx
  __int64 v64; // r10
  _BYTE *v65; // r8
  _DWORD *v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  _KPROCESS *v70; // rbx
  const EVENT_DESCRIPTOR *v71; // r15
  __int64 v72; // r8
  signed __int32 v73; // eax
  __int64 v74; // rcx
  signed __int32 v75; // ett
  struct _KTHREAD *v76; // rax
  _KPROCESS *SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v79; // bx
  struct _KTHREAD *v80; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rax
  unsigned int v84; // [rsp+28h] [rbp-D8h]
  char v85; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v86; // [rsp+51h] [rbp-AFh]
  char v87; // [rsp+52h] [rbp-AEh]
  _WORD v88[6]; // [rsp+53h] [rbp-ADh] BYREF
  _WORD *v89; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v90; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v91; // [rsp+70h] [rbp-90h] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h]
  void *v93; // [rsp+80h] [rbp-80h]
  int v94; // [rsp+88h] [rbp-78h]
  int v95; // [rsp+8Ch] [rbp-74h]
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v97; // [rsp+98h] [rbp-68h]
  _QWORD *v98; // [rsp+A0h] [rbp-60h]
  _QWORD *v99; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h]
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v104; // [rsp+D0h] [rbp-30h]
  __int128 v105; // [rsp+D8h] [rbp-28h] BYREF
  int v106; // [rsp+E8h] [rbp-18h]
  unsigned int *v107; // [rsp+F0h] [rbp-10h]
  _QWORD *v108; // [rsp+F8h] [rbp-8h]
  _BYTE v109[112]; // [rsp+100h] [rbp+0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v110; // [rsp+170h] [rbp+70h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v111; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v112[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v113[8]; // [rsp+1D4h] [rbp+D4h] BYREF
  int v114; // [rsp+1DCh] [rbp+DCh]

  v102 = a2;
  v92 = a1;
  v104 = a2 + 40;
  v3 = a2 + 72;
  Handle = 0LL;
  Object = 0LL;
  v6 = a1;
  Src = 0LL;
  v95 = 0;
  v87 = 0;
  v106 = 0;
  LOBYTE(v94) = 0;
  v7 = 0LL;
  v88[0] = 0;
  v105 = 0LL;
  v85 = 0;
  v8 = 0LL;
  v91 = 0LL;
  v89 = 0LL;
  memset(v109, 0, 0x68uLL);
  v9 = *(_DWORD *)(v3 + 8) & 0x20;
  v90 = 0;
  *(_DWORD *)((char *)&v88[2] + 1) = v9;
  LOBYTE(v10) = a3;
  v86 = v9 != 0 ? 2 : 0;
  updated = EtwpValidateEnableNotification(v6, a2, v10, (unsigned int)&v105, (__int64)&v91, (__int64)v109);
  if ( updated < 0 )
    goto LABEL_128;
  v12 = *(_DWORD *)v3;
  v97 = v12;
  if ( v12 == 2 )
  {
    v13 = a2 + 40;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE) )
      EtwpEventWriteCaptureState(v69, v3, a2 + 40);
  }
  else
  {
    v13 = a2 + 40;
  }
  v14 = *(_DWORD *)(a2 + 116);
  if ( v14 - 1 <= 1 )
  {
    v64 = *(unsigned int *)(a2 + 116);
    v65 = &v112[-a2 - 120];
    v66 = (_DWORD *)(a2 + 128);
    do
    {
      v67 = a2 + *((_QWORD *)v66 - 1);
      *(_DWORD *)&v113[(_QWORD)v66 - 120 - a2] = v66[1];
      v68 = *v66;
      *(_QWORD *)((char *)v66 + (_QWORD)v65 - 8) = v67;
      *(_DWORD *)((char *)v66 + (_QWORD)v65) = v68;
      v66 += 4;
      --v64;
    }
    while ( v64 );
  }
  else
  {
    v14 = 0;
    v114 = 0;
  }
  if ( !*(_DWORD *)((char *)&v88[2] + 1) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                v92,
                v13,
                *(unsigned __int16 *)(v3 + 6),
                v12,
                *(_DWORD *)(v3 + 16),
                (__int64)v112,
                v14,
                (__int64)&v85);
    KeLeaveCriticalRegion();
    if ( !v85 )
    {
      v84 = v14;
      v16 = v91;
      updated = EtwpEnableMetaProviderGuid((__int64)v91, a2 + 40, v12, *(_QWORD *)(v3 + 16), (__int64)v112, v84);
      if ( updated != -1073741163 )
        goto LABEL_37;
      v8 = v89;
      goto LABEL_10;
    }
LABEL_128:
    v16 = v91;
    goto LABEL_37;
  }
  v16 = v91;
LABEL_10:
  if ( (*(_WORD *)(v3 + 6) & 0xFFFD) == 0 )
  {
    updated = -1073741790;
    goto LABEL_101;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v18 = BYTE2(v106);
  v19 = (GUID *)&PrivateLoggerNotificationGuid;
  v20 = v86;
  v21 = BYTE2(v106) == 0;
  v22 = v92;
  v23 = v86;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v21 )
    v19 = (GUID *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v22, v19, v23);
  if ( GuidEntryByGuid )
  {
    if ( v12 == 1 || (v7 = (ULONG_PTR)GuidEntryByGuid, !v12) )
    {
      v7 = (ULONG_PTR)GuidEntryByGuid;
      if ( v16 )
      {
        v32 = *(_QWORD *)&EventTracingProvGuid.Data1 - *(_QWORD *)(a2 + 40);
        if ( *(_QWORD *)&EventTracingProvGuid.Data1 == *(_QWORD *)(a2 + 40) )
          v32 = *(_QWORD *)EventTracingProvGuid.Data4 - *(_QWORD *)(a2 + 48);
        if ( !v32 )
        {
          v71 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
          if ( v12 != 1 )
            v71 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v71) )
          {
            if ( v12 == 1 )
              EtwpEventWriteProviderEnabled(
                (unsigned int)&EventTracingProvGuid,
                (_DWORD)v71,
                v72,
                (_DWORD)v16 + 136,
                (__int64)&EventTracingProvGuid,
                *(_QWORD *)(v3 + 16),
                *(_QWORD *)(v3 + 24),
                *(_DWORD *)(v3 + 8),
                *(_BYTE *)(v3 + 4));
            else
              EtwpEventWriteTemplateSessAndProv(&EventTracingProvGuid, v71, v72, 2LL, v16 + 34, &EventTracingProvGuid);
          }
        }
      }
    }
  }
  else
  {
    if ( v18 || v12 != 1 )
    {
      updated = -1073741163;
      v7 = 0LL;
      goto LABEL_37;
    }
    v7 = EtwpAddGuidEntry(v92, a2 + 40, v20);
    if ( !v7 )
    {
      updated = -1073741801;
      goto LABEL_37;
    }
  }
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 408, 0LL);
  v26 = *(_DWORD *)((char *)&v88[2] + 1);
  v27 = 1;
  *(_QWORD *)(v7 + 416) = KeGetCurrentThread();
  HIBYTE(v88[0]) = 1;
  if ( v12 == 1 && (*(_BYTE *)(v7 + 91) & 1) != 0 && !v26 && *(_WORD *)(v3 + 6) != *(_WORD *)(v7 + 88) )
  {
    v33 = 0x4719A4EB910C653DLL - *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 40) == 0x4719A4EB910C653DLL )
      v33 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v7 + 48);
    if ( !v33 )
    {
      v16 = v91;
      updated = -1073741053;
      goto LABEL_36;
    }
    v26 = *(_DWORD *)((char *)&v88[2] + 1);
  }
  v16 = v91;
  if ( v91 && (v91[204] & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_36;
  }
  if ( v26 )
  {
    updated = EtwpAcquireTokenAccessInformation(v91);
    if ( updated )
      goto LABEL_36;
  }
  *(_DWORD *)(a2 + 112) = v12;
  v28 = *(_WORD *)(v3 + 6);
  *(_WORD *)(a2 + 104) = v28;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(v3 + 4);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(v3 + 16);
  v29 = BYTE2(v106);
  v30 = *(_QWORD *)(v3 + 16);
  if ( BYTE2(v106) )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v28 & 0x7FFF;
  }
  if ( !*(_QWORD *)(v3 + 16) )
    *(_QWORD *)(v3 + 16) = -1LL;
  if ( !*(_BYTE *)(v3 + 4) )
    *(_BYTE *)(v3 + 4) = -1;
  if ( v12 != 2 && !v29 )
  {
    updated = EtwpUpdateGuidEnableInfo(v7, (__int64)v88);
    if ( updated < 0 )
    {
LABEL_36:
      *(_QWORD *)(v7 + 416) = 0LL;
      ExReleasePushLockEx((__int64 *)(v7 + 408), 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_37;
    }
    *(_OWORD *)v3 = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v7 + 112);
    if ( (*(_DWORD *)(v3 + 8) & 4) != 0 )
    {
      EtwpAllocateStackwalkApcPool(v16);
      _m_prefetchw(v16 + 204);
      v73 = v16[204];
      do
      {
        v74 = v73 | 0x2000u;
        v75 = v73;
        v73 = _InterlockedCompareExchange((volatile signed __int32 *)v16 + 204, v74, v73);
      }
      while ( v75 != v73 );
      if ( (v73 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v74, 0x2000LL);
      v16 = v91;
    }
  }
  if ( *(_QWORD *)(v7 + 56) == v7 + 56 && (*(_QWORD *)(v7 + 400) || *(_QWORD *)(v7 + 16) == v7 + 16) )
  {
    updated = 0;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v7, &Handle, &Object);
    if ( updated < 0 )
      goto LABEL_36;
    *(_QWORD *)(a2 + 24) = Object;
  }
  LOBYTE(v30) = -1;
  if ( (int)EtwpBuildNotificationPacket(v7, a2, v30, &Src) < 0 )
  {
    updated = -1073741801;
    goto LABEL_104;
  }
  v34 = Src;
  v35 = *((unsigned int *)Src + 1);
  v107 = (unsigned int *)((char *)Src + 4);
  v36 = EtwpAllocDataBlock(v35, Src);
  v8 = v89;
  if ( v36 < 0 )
    goto LABEL_145;
  v37 = v94;
  v38 = (_DWORD *)(v7 + 128);
  v92 = (__int64)v89;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v38 )
      v37 = (unsigned __int8)v37 | (1 << i);
    v38 += 8;
  }
  v94 = v37;
  v40 = v97;
  v85 = 0;
  v99 = 0LL;
  if ( !*(_QWORD *)(v7 + 400) )
  {
    v41 = *(_QWORD *)(v7 + 16);
    if ( v41 != v7 + 16 )
      v99 = (_QWORD *)(v41 - 16);
  }
  v42 = (_QWORD *)v7;
  v101 = (_QWORD *)v7;
  while ( 1 )
  {
    v43 = (_QWORD *)v42[7];
    v108 = v42 + 7;
    v98 = v43;
    if ( v43 != v42 + 7 )
      break;
LABEL_93:
    if ( v42 != (_QWORD *)v7 )
    {
      v42[52] = 0LL;
      ExReleasePushLockEx(v42 + 51, 0LL);
      KeLeaveCriticalRegion();
    }
    v55 = v99;
    if ( !v99 )
    {
      v56 = v102;
      updated = 0;
      *(_DWORD *)(v102 + 20) = v95;
      *(_QWORD *)(v56 + 24) = Handle;
      if ( v16 && v40 <= 1 )
      {
        v57 = v97;
        v58 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
        if ( v97 != 1 )
          v58 = &ETW_EVENT_PROVIDER_DISABLED;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v58) )
        {
          if ( v57 == 1 )
            EtwpEventWriteProviderEnabled(
              v59,
              (_DWORD)v58,
              v60,
              (_DWORD)v16 + 136,
              v104,
              *(_QWORD *)(v3 + 16),
              *(_QWORD *)(v3 + 24),
              *(_DWORD *)(v3 + 8),
              *(_BYTE *)(v3 + 4));
          else
            EtwpEventWriteTemplateSessAndProv(v104, v58, v60, 2LL, v16 + 34, v104);
        }
      }
      goto LABEL_101;
    }
    v80 = KeGetCurrentThread();
    v85 = 1;
    v42 = v99;
    v101 = v99;
    --v80->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v55 + 51), 0LL);
    v16 = v91;
    v81 = 0LL;
    v8 = v89;
    v55[52] = KeGetCurrentThread();
    v82 = v55[2];
    v34 = Src;
    v83 = (_QWORD *)(v82 - 16);
    if ( v83 != (_QWORD *)v7 )
      v81 = v83;
    v99 = v81;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)((char *)&v88[2] + 1) )
    {
      v44 = (__int64)(v43 - 2);
      v76 = KeGetCurrentThread();
      --v76->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v44 + 32) + 408LL, 0LL);
      v16 = v91;
      v8 = v89;
      v34 = Src;
      *(_QWORD *)(*(_QWORD *)(v44 + 32) + 416LL) = KeGetCurrentThread();
      v43 = v98;
      v87 = 1;
    }
    else
    {
      v44 = (__int64)v43;
    }
    v98 = (_QWORD *)*v43;
    if ( !(unsigned __int8)EtwpIsRegEntryAllowed(v44, (_DWORD)v16, (unsigned int)&v105, v102, (__int64)v109, v85, v86) )
      goto LABEL_89;
    v93 = v34;
    if ( BYTE2(v106) )
      break;
    if ( v40 == 2 )
      goto LABEL_82;
    v47 = v85;
    if ( v85 )
    {
      if ( *(_DWORD *)((char *)&v88[2] + 1) )
        v48 = *(_BYTE *)(v44 + 103);
      else
        v48 = *(_BYTE *)(v44 + 102);
    }
    else if ( *(_DWORD *)((char *)&v88[2] + 1) )
    {
      v48 = *(_BYTE *)(v44 + 101);
    }
    else
    {
      v48 = *(_BYTE *)(v44 + 100);
    }
    LOBYTE(v46) = v86;
    LOBYTE(v45) = v88[0];
    EtwpUpdateRegEntryEnableMask(v44, (_DWORD)v16, v45, v46, v85, v40);
    LOBYTE(v49) = v94;
    LOBYTE(v50) = v88[0];
    LOBYTE(v51) = v48;
    v52 = EtwpCalculateUpdateNotification(v44, v50, v51, v49, v86, v47, v40, (__int64)&v89);
    v8 = v89;
    if ( v52 )
    {
      if ( v89 )
      {
        v93 = v89;
        if ( v89 != (_WORD *)v92 )
        {
          EtwpUnreferenceDataBlock(v92);
          v92 = (__int64)v8;
        }
      }
      else
      {
        v8 = (_WORD *)v92;
        v89 = (_WORD *)v92;
      }
      if ( v40 == 1 )
      {
LABEL_82:
        v53 = *(_WORD *)(v44 + 98);
        if ( (v53 & 8) != 0 || (v53 & 0x20) != 0 || (v16[204] & 0x2000000) != 0 )
        {
          if ( (v53 & 1) != 0 )
          {
            v70 = 0LL;
            memset(&v110, 0, sizeof(v110));
            if ( (v53 & 0x10) == 0 )
              goto LABEL_126;
            SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(v44 + 56));
            v70 = SessionById;
            if ( !SessionById )
              goto LABEL_85;
            if ( (int)MmAttachSession(SessionById, (__int64)&v110) >= 0 )
            {
LABEL_126:
              EtwpProviderArrivalCallback((__int64)v16, 0, v44);
              if ( !v70 )
                goto LABEL_85;
              MmDetachSession((__int64)v70, &v110);
            }
            ObfDereferenceObject(v70);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v44 + 80) + 1112LL)) )
          {
            v61 = *(_QWORD *)(v44 + 80);
            memset(&v111, 0, sizeof(v111));
            ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v61);
            v63 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KiStackAttachProcess(*(_KPROCESS **)(v44 + 80), 0, (__int64)&v111);
            EtwpProviderArrivalCallback((__int64)v16, 1, v44);
            KiUnstackDetachProcess(&v111);
            PsDetachSiloFromCurrentThread(v63);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v44 + 80) + 1112LL));
          }
        }
      }
LABEL_85:
      v54 = v93;
LABEL_86:
      if ( (int)EtwpSendDataBlock(v44, v54) >= 0 && (*(_BYTE *)(v44 + 98) & 2) != 0 )
        ++v95;
      goto LABEL_89;
    }
    if ( !v89 )
    {
      v8 = (_WORD *)v92;
      v89 = (_WORD *)v92;
    }
LABEL_89:
    if ( v87 )
    {
      *(_QWORD *)(*(_QWORD *)(v44 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v44 + 32) + 408LL), 0LL);
      KeLeaveCriticalRegion();
      v87 = 0;
    }
    v43 = v98;
    if ( v98 == v108 )
    {
      v42 = v101;
      goto LABEL_93;
    }
    v34 = Src;
  }
  ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v44 + 80));
  if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(v3 + 6) & 0x7FFF, &v90) )
    goto LABEL_89;
  v79 = v90;
  if ( v90 == v8[39] )
  {
LABEL_160:
    v54 = v8;
    goto LABEL_86;
  }
  if ( (int)EtwpAllocDataBlock(*v107, Src) >= 0 )
  {
    EtwpUnreferenceDataBlock(v92);
    v8 = v89;
    v92 = (__int64)v89;
    v89[39] = v79 | 0x8000;
    v8[52] = v79;
    goto LABEL_160;
  }
  v8 = (_WORD *)v92;
  if ( v87 )
  {
    *(_QWORD *)(*(_QWORD *)(v44 + 32) + 416LL) = 0LL;
    ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v44 + 32) + 408LL), 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_145:
  updated = -1073741801;
LABEL_101:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
  v27 = HIBYTE(v88[0]);
LABEL_104:
  if ( Src )
    EtwpUnreferenceDataBlock(Src);
  if ( v27 )
    goto LABEL_36;
LABEL_37:
  if ( v16 )
    EtwpReleaseLoggerContext(v16, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry((__int64 *)v7);
  EtwpFreeFilterInfo(v109);
  return (unsigned int)updated;
}
