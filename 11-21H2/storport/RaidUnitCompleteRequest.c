/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C0006E70
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetryCollectErrorData @ 0x1C0005CD8 (StorpTelemetryCollectErrorData.c)
 *     StorSubmitIoGatewayItem @ 0x1C00062BC (StorSubmitIoGatewayItem.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     StorUnmapSenseInfo @ 0x1C0008570 (StorUnmapSenseInfo.c)
 *     StorpTelemetryCollectPerfData @ 0x1C00086D0 (StorpTelemetryCollectPerfData.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0009308 (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C000936C (RiNormalizeDeviceQueue.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C0009650 (RiDeleteDeviceQueueEntry.c)
 *     RaUnitAsyncError @ 0x1C000BF68 (RaUnitAsyncError.c)
 *     RaidDmaPutScatterGatherList @ 0x1C000CD30 (RaidDmaPutScatterGatherList.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0020D78 (TranslateResultToScsiRequestBlock.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     GetZoneCountFromUnit @ 0x1C0022DA4 (GetZoneCountFromUnit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C0036324 (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C003DC3C (StorRemoveEventQueue.c)
 *     StorRemoveEventQueueInternal @ 0x1C003DD00 (StorRemoveEventQueueInternal.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x1C003DD94 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0040644 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004C4B8 (RaidSrbExGetBidirectionalData.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C004FEDC (McTemplateK0dud_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuussssx_EtwWriteTransfer @ 0x1C0050760 (McTemplateK0zqjuuussssx_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x1C0053EFC (RaidLogRequestComplete.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C00582AC (RaidFreeRemappedScatterGatherListMdl.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C005AD24 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C005B01C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  IRP *v5; // rcx
  _BYTE *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rdi
  unsigned int *v11; // r15
  __int64 v12; // rbx
  __int64 *v13; // rdi
  KSPIN_LOCK *v14; // rbx
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v16; // rcx
  char v17; // al
  int v18; // r9d
  __int64 *v19; // rcx
  KSPIN_LOCK v20; // r8
  __int64 **v21; // rax
  __int64 *v22; // rcx
  KSPIN_LOCK v23; // rdx
  __int64 **v24; // rax
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // r11d
  unsigned int v29; // r10d
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  char v39; // r13
  char v40; // bl
  char v41; // al
  _BYTE *v42; // r15
  unsigned __int8 v43; // r12
  char v44; // di
  unsigned int v45; // r11d
  __int64 v46; // r10
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r8
  int v51; // ecx
  int v52; // ecx
  unsigned __int64 v53; // rcx
  unsigned int v54; // r11d
  unsigned int v55; // ebx
  __int64 v56; // r10
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // r8
  int v61; // ecx
  int v62; // ecx
  PIRP v63; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char CompletionFilter; // bl
  unsigned __int8 v66; // bl
  __int64 v67; // rdi
  _QWORD *v68; // rcx
  unsigned int HighestNodeNumber; // r8d
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  int v72; // ecx
  bool v73; // zf
  unsigned int v74; // r11d
  unsigned int v75; // r9d
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // r10
  __int64 v79; // r8
  int v80; // ecx
  int v81; // ecx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // r15
  _BYTE *v84; // rbx
  unsigned __int64 v85; // rax
  _IO_STACK_LOCATION *v86; // rax
  _IO_SECURITY_CONTEXT *v87; // rdi
  _SECURITY_QUALITY_OF_SERVICE *v88; // rbx
  __int64 v89; // r13
  int v90; // edx
  int v91; // ecx
  int v92; // r9d
  __int64 v93; // rcx
  __int64 v94; // r12
  __int64 BidirectionalData; // rax
  __int64 v96; // rax
  int v97; // r12d
  bool v98; // r12
  __int64 *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  void (__fastcall *v102)(__int64, _QWORD, bool); // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  struct _MDL *v105; // rcx
  int AccessState_high; // eax
  unsigned __int64 v107; // r8
  signed __int32 v108; // eax
  signed __int32 v109; // ett
  __int64 Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v112; // cl
  __int64 v113; // rax
  __int64 v114; // rdi
  BOOLEAN IsAddressValid; // al
  unsigned int v116; // ecx
  char v117; // al
  _BYTE *v118; // rcx
  char v119; // al
  int v120; // ecx
  __int64 v121; // rax
  _BYTE *v122; // rcx
  __int64 v123; // rdx
  char v124; // al
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  const int *v128; // r8
  unsigned int v129; // eax
  __int64 v130; // r9
  const int *v131; // rdi
  unsigned __int64 v132; // rdi
  __int64 v133; // rax
  ULONG *v134; // rax
  void *v135; // rcx
  IRP *v136; // rbx
  char v137; // al
  __int64 v138; // rcx
  int v139; // ebx
  bool v140; // r12
  __int64 v141; // rax
  __int64 v142; // r14
  unsigned int v143; // edi
  KSPIN_LOCK *v144; // rbx
  unsigned __int64 v145; // rbx
  KIRQL v146; // al
  KIRQL v147; // bl
  __int64 v148; // r15
  __int64 i; // rbx
  unsigned __int8 v150; // [rsp+70h] [rbp-90h]
  unsigned int v151; // [rsp+74h] [rbp-8Ch]
  int v152; // [rsp+74h] [rbp-8Ch]
  _BYTE *v153; // [rsp+78h] [rbp-88h]
  __int64 v154; // [rsp+78h] [rbp-88h]
  __int64 v156; // [rsp+80h] [rbp-80h]
  char v157; // [rsp+88h] [rbp-78h]
  unsigned int v158; // [rsp+8Ch] [rbp-74h]
  unsigned int v159; // [rsp+90h] [rbp-70h]
  unsigned int v160; // [rsp+90h] [rbp-70h]
  PIRP Irp; // [rsp+98h] [rbp-68h]
  int v162; // [rsp+A0h] [rbp-60h]
  bool v163; // [rsp+A0h] [rbp-60h]
  __int64 v164; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v166; // [rsp+B8h] [rbp-48h]
  __int64 v167; // [rsp+C0h] [rbp-40h]
  __int64 v168; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v170; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v171; // [rsp+F8h] [rbp-8h]
  int v172; // [rsp+100h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE v173; // [rsp+108h] [rbp+8h] BYREF
  __int128 v174; // [rsp+120h] [rbp+20h] BYREF
  __int128 v175; // [rsp+130h] [rbp+30h] BYREF

  v4 = a1;
  v5 = *(IRP **)(a1 + 160);
  v6 = 0LL;
  v165 = 0LL;
  v167 = v4;
  v7 = *(_QWORD *)(v4 + 168);
  v8 = *(_QWORD *)(v4 + 224);
  v157 = *(_BYTE *)(v4 + 16);
  v164 = 0LL;
  Irp = v5;
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    LODWORD(a4) = *(_DWORD *)(v7 + 20);
    v166 = *(_QWORD *)(v7 + 104);
    v168 = v4 + 800;
    v162 = *(_DWORD *)(v7 + 24);
    v158 = *(_DWORD *)(v7 + 60);
    v151 = a4;
    v159 = *(_DWORD *)(v7 + 32);
  }
  else
  {
    v151 = *(unsigned __int8 *)(v7 + 2);
    v166 = *(_QWORD *)(v7 + 56);
    v168 = *(_QWORD *)(v7 + 32);
    v159 = *(unsigned __int8 *)(v7 + 8);
    v162 = *(_DWORD *)(v7 + 12);
    v158 = *(_DWORD *)(v7 + 16);
  }
  SecurityContext = v5->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
  {
LABEL_31:
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C00799E1 & 1) != 0 )
        StorEtwIORequestServiceTimeEventData(v4, 0LL, 0LL);
      if ( *(_DWORD *)(v8 + 1812) && (byte_1C00799E3 & 2) != 0 )
        StorEtwLogoRequestServiceTimeEventData(v4, 0LL, 0LL);
    }
    goto LABEL_37;
  }
  v11 = *(unsigned int **)(v8 + 504);
  v12 = (SecurityQos[7].Length + 1LL) << 6;
  v13 = (__int64 *)&SecurityQos[4];
  v14 = (KSPIN_LOCK *)((char *)v11 + v12);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v16 = v14 + 5;
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v16, &LockHandle);
    v17 = *((_BYTE *)v13 - 32);
    v18 = *v11;
    if ( (v17 & 2) == 0 )
    {
LABEL_23:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_27;
    }
    *((_BYTE *)v13 - 32) = v17 & 0xFD;
    v19 = (__int64 *)*v13;
    v20 = *v14;
    if ( *(__int64 **)(*v13 + 8) == v13 )
    {
      v21 = (__int64 **)v13[1];
      if ( *v21 == v13 )
      {
        *v21 = v19;
        v19[1] = (__int64)v21;
        if ( (v13[6] & 1) == 0 )
        {
LABEL_18:
          if ( (v18 & 4) == 0 && (__int64 *)v20 == v13 )
          {
            if ( (KSPIN_LOCK *)*v14 == v14 )
              v25 = -1;
            else
              v25 = *(_DWORD *)(*v14 + 32);
            *((_DWORD *)v14 + 12) = v25;
          }
          goto LABEL_23;
        }
        v22 = v13 + 2;
        if ( (__int64 *)v14[4] == v13 + 2 )
          v14[4] = *v22;
        v23 = *v22;
        if ( *(__int64 **)(*v22 + 8) == v22 )
        {
          v24 = (__int64 **)v13[3];
          if ( *v24 == v22 )
          {
            *v24 = (__int64 *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            *((_DWORD *)v13 + 12) &= ~1u;
            goto LABEL_18;
          }
        }
      }
    }
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
  StorRemoveEventQueueInternal(v14, *v11, v13);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_27:
  if ( StorEtwLoggingEnabled )
  {
    v174 = 0LL;
    IoGetActivityIdIrp(Irp, &v174);
    if ( byte_1C00799E2 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v27, v26, (unsigned int)&v174, a4, 4);
    v4 = a1;
    goto LABEL_31;
  }
LABEL_37:
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v6 = (_BYTE *)(v7 + 72);
    goto LABEL_57;
  }
  v153 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v28 = *(_DWORD *)(v7 + 56);
    v29 = 0;
    if ( !v28 )
    {
      v6 = 0LL;
      goto LABEL_58;
    }
    do
    {
      v30 = *(unsigned int *)(v7 + 4LL * v29 + 120);
      if ( (unsigned int)v30 < 0x80 )
        goto LABEL_51;
      v31 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v30 >= (unsigned int)v31 )
        goto LABEL_51;
      a4 = v30 + v7;
      v32 = (unsigned int)v30;
      v33 = *(_DWORD *)(v30 + v7) - 64;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 && v32 + 40 <= v31 )
          {
            if ( !*(_DWORD *)(a4 + 12) )
              break;
            v6 = (_BYTE *)(a4 + 32);
            goto LABEL_57;
          }
          goto LABEL_51;
        }
        v35 = v32 + 56;
      }
      else
      {
        v35 = v32 + 40;
      }
      if ( v35 <= v31 )
      {
        if ( !*(_BYTE *)(a4 + 10) )
          break;
        v6 = (_BYTE *)(a4 + 24);
LABEL_57:
        v153 = v6;
        break;
      }
LABEL_51:
      ++v29;
    }
    while ( v29 < v28 );
  }
LABEL_58:
  if ( *(_DWORD *)(v8 + 2244) )
  {
    if ( v6 )
    {
      v36 = (unsigned __int8)*v6;
      if ( !v151 )
      {
        if ( (unsigned __int8)(v36 - 8) <= 0x3Au
          && (v37 = 0x400200500000005LL, _bittest64(&v37, (unsigned int)(v36 - 8)))
          || (unsigned __int8)(v36 + 120) <= 0x22u && (v38 = 0x500000205LL, _bittest64(&v38, (unsigned int)(v36 + 120))) )
        {
          StorpTelemetryCollectPerfData(a1, v7, v8, a4, v36);
        }
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v6 )
  {
LABEL_102:
    v63 = Irp;
    goto LABEL_103;
  }
  v39 = 0;
  v150 = *(_BYTE *)(v7 + 3);
  v40 = 0;
  v41 = *(_BYTE *)(v7 + 2);
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  if ( v41 != 40 )
  {
    v54 = v150;
    v44 = *(_BYTE *)(v7 + 4);
    LOBYTE(v54) = v150 & 0x3F;
    if ( !v41 )
    {
      v42 = *(_BYTE **)(v7 + 32);
      v43 = *(_BYTE *)(v7 + 11);
    }
    goto LABEL_93;
  }
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v45 = *(_DWORD *)(v7 + 56);
    v46 = 0LL;
    if ( v45 )
    {
      while ( 1 )
      {
        v47 = *(unsigned int *)(v7 + 4 * v46 + 120);
        if ( (unsigned int)v47 < 0x80 )
          goto LABEL_78;
        v48 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v47 >= (unsigned int)v48 )
          goto LABEL_78;
        v49 = v47 + v7;
        v50 = (unsigned int)v47;
        v51 = *(_DWORD *)(v47 + v7) - 64;
        if ( !v51 )
          goto LABEL_76;
        v52 = v51 - 1;
        if ( v52 )
          break;
        v53 = v50 + 56;
LABEL_77:
        if ( v53 <= v48 )
        {
          v44 = *(_BYTE *)(v49 + 8);
          goto LABEL_82;
        }
LABEL_78:
        v46 = (unsigned int)(v46 + 1);
        if ( (unsigned int)v46 >= v45 )
          goto LABEL_82;
      }
      if ( v52 != 1 )
        goto LABEL_78;
LABEL_76:
      v53 = v50 + 40;
      goto LABEL_77;
    }
  }
LABEL_82:
  v54 = v150;
  LOBYTE(v54) = v150 & 0x3F;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_93;
  v55 = *(_DWORD *)(v7 + 56);
  v56 = 0LL;
  if ( !v55 )
    goto LABEL_92;
  while ( 1 )
  {
    v57 = *(unsigned int *)(v7 + 4 * v56 + 120);
    if ( (unsigned int)v57 < 0x80 )
      goto LABEL_122;
    v58 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v57 >= (unsigned int)v58 )
      goto LABEL_122;
    v59 = v57 + v7;
    v60 = (unsigned int)v57;
    v61 = *(_DWORD *)(v57 + v7) - 64;
    if ( !v61 )
      break;
    v62 = v61 - 1;
    if ( !v62 )
    {
      v71 = v60 + 56;
      goto LABEL_121;
    }
    if ( v62 == 1 && v60 + 40 <= v58 )
    {
      v42 = *(_BYTE **)(v59 + 24);
      goto LABEL_91;
    }
LABEL_122:
    v56 = (unsigned int)(v56 + 1);
    if ( (unsigned int)v56 >= v55 )
      goto LABEL_92;
  }
  v71 = v60 + 40;
LABEL_121:
  if ( v71 > v58 )
    goto LABEL_122;
  v42 = *(_BYTE **)(v59 + 16);
LABEL_91:
  v43 = *(_BYTE *)(v59 + 9);
LABEL_92:
  v40 = 0;
LABEL_93:
  if ( (v150 & 0x80u) == 0 )
  {
    if ( v44 != 2 && (unsigned __int8)v54 <= 0x12u )
    {
      v72 = 262211;
      if ( _bittest(&v72, v54) )
        goto LABEL_101;
    }
  }
  else
  {
    if ( v42 && v43 >= 8u && (unsigned __int8)((*v42 & 0x7F) - 112) <= 1u )
    {
      v40 = v42[12];
      v39 = v42[2] & 0xF;
    }
    if ( (_BYTE)v54 == 1 && !v39 && !v40 )
    {
LABEL_101:
      v6 = v153;
      goto LABEL_102;
    }
  }
  v63 = Irp;
  StorpTelemetryCollectErrorData(v8, (int)Irp, a1, v7);
  v6 = v153;
LABEL_103:
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  CurrentStackLocation = v63->Tail.Overlay.CurrentStackLocation;
  CompletionFilter = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v66 = CompletionFilter & 3;
  v67 = *(_QWORD *)(v8 + 24);
  if ( (v66 & 1) != 0
    && *(char *)(v8 + 449) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1736)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v8 + 1744), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1736));
  }
  if ( v66 >= 2u )
  {
    v68 = *(_QWORD **)(v67 + 4832);
    if ( v68 )
      PoFxIdleComponent(*v68, 0LL, 0LL);
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v159 / *(_DWORD *)(v8 + 584) < HighestNodeNumber + 1 )
    HighestNodeNumber = v159 / *(_DWORD *)(v8 + 584);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 576) + 16LL * v159));
  v160 = 0;
  if ( (v162 & 0x102) != 0x102 && (v162 & 0x80010) == 0 )
  {
    if ( v151 > 0x20 || (v70 = 0x1000D0000LL, !_bittest64(&v70, v151)) )
      v160 = 1;
  }
  if ( (*(_BYTE *)(v8 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    v73 = *(_BYTE *)(v7 + 2) == 40;
    *(_BYTE *)(v7 + 3) = 56;
    if ( v73 )
    {
      if ( !*(_DWORD *)(v7 + 20) )
      {
        v74 = *(_DWORD *)(v7 + 56);
        v75 = 0;
        if ( v74 )
        {
          while ( 1 )
          {
            v76 = *(unsigned int *)(v7 + 4LL * v75 + 120);
            if ( (unsigned int)v76 < 0x80 )
              goto LABEL_144;
            v77 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v76 >= (unsigned int)v77 )
              goto LABEL_144;
            v78 = v76 + v7;
            v79 = (unsigned int)v76;
            v80 = *(_DWORD *)(v76 + v7) - 64;
            if ( !v80 )
              goto LABEL_142;
            v81 = v80 - 1;
            if ( v81 )
              break;
            v82 = v79 + 56;
LABEL_143:
            if ( v82 <= v77 )
            {
              *(_BYTE *)(v78 + 8) = 0;
              goto LABEL_149;
            }
LABEL_144:
            if ( ++v75 >= v74 )
              goto LABEL_149;
          }
          if ( v81 != 1 )
            goto LABEL_144;
LABEL_142:
          v82 = v79 + 40;
          goto LABEL_143;
        }
      }
    }
    else
    {
      *(_BYTE *)(v7 + 4) = 0;
    }
LABEL_149:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 2104));
  }
  v83 = -1LL;
  if ( (*(_BYTE *)(v7 + 3) & 0x3F) == 1 )
  {
    v163 = 0;
    if ( v6
      && *v6 == 29
      && (*(_BYTE *)(v7 + 2) != 40 ? (v84 = *(_BYTE **)(v7 + 24)) : (v84 = *(_BYTE **)(v7 + 64)), v84) )
    {
      v73 = MmIsAddressValid(v84) == 0;
      v85 = v158;
      if ( !v73 && v158 >= 9 && *v84 == 14 )
        v163 = v84[8] == 15;
    }
    else
    {
      v85 = v158;
    }
    Irp->IoStatus.Information = v85;
    v86 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v87 = v86->Parameters.Create.SecurityContext;
    if ( BYTE2(v87->SecurityQos) == 40 )
      v88 = v87[4].SecurityQos;
    else
      v88 = v87[2].SecurityQos;
    v89 = *(_QWORD *)&v88[18].ContextTrackingMode;
    if ( (v88[1].ImpersonationLevel & 2) != 0 )
    {
      StorRemoveEventQueue(*(_QWORD *)(v89 + 504), &v88[4]);
      if ( StorEtwLoggingEnabled )
      {
        v175 = 0LL;
        IoGetActivityIdIrp(Irp, &v175);
        if ( byte_1C00799E2 < 0 )
          McTemplateK0dud_EtwWriteTransfer(v91, v90, (unsigned int)&v175, v92, 4);
      }
    }
    StorUnmapSenseInfo(v88, *(_QWORD *)(*(_QWORD *)(v89 + 24) + 8LL));
    v93 = *(_QWORD *)(v89 + 24);
    if ( *(_QWORD *)(v93 + 5480) )
      RaidAdapterReleaseCryptoKeyResources(v93, v88);
    if ( BYTE2(v87->SecurityQos) == 40 )
    {
      if ( (v88[1].ImpersonationLevel & 0x40) != 0 )
      {
        TranslateResultToScsiRequestBlock(*(_QWORD *)&v88[62].ContextTrackingMode, v87);
        *(_QWORD *)(*(_QWORD *)&v88[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v88[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v88[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v88[15].ImpersonationLevel;
        *(_QWORD *)(*(_QWORD *)&v88[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v88[62].ContextTrackingMode + 40LL) = 0LL;
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v88[62].ContextTrackingMode;
        LOBYTE(v88[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v88[62].ContextTrackingMode = 0LL;
      }
      else
      {
        v87[4].SecurityQos = 0LL;
        *(_QWORD *)&v87[2].DesiredAccess = *(_QWORD *)&v88[15].ImpersonationLevel;
        v87[4].AccessState = 0LL;
        v94 = *(_QWORD *)&v88[16].Length;
        if ( v94 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v87);
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = v94;
        }
      }
    }
    else
    {
      v87[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v88[14].ContextTrackingMode;
      v87[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v88[15].ImpersonationLevel;
      v87[2].AccessState = 0LL;
      *(_QWORD *)&v87[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v88[9].ImpersonationLevel )
    {
      v96 = *(_QWORD *)&v88[14].Length;
      if ( *(_BYTE *)(v96 + 2) == 40 )
        v97 = *(_DWORD *)(v96 + 24) >> 6;
      else
        LOBYTE(v97) = *(_BYTE *)(v96 + 12) >> 6;
      v98 = (v97 & 1) == 0;
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(v88);
      v99 = (__int64 *)(*(_QWORD *)&v88[18].Length + 752LL);
      if ( *(_QWORD *)&v88[18].Length != -752LL )
      {
        v100 = *v99;
        if ( *v99 )
        {
          v101 = *(_QWORD *)(v100 + 8);
          if ( v101 )
          {
            v102 = *(void (__fastcall **)(__int64, _QWORD, bool))(v101 + 96);
            if ( v102 )
              v102(v100, *(_QWORD *)&v88[9].ImpersonationLevel, v98);
          }
        }
      }
      v103 = *(_QWORD *)&v88[12].ContextTrackingMode;
      *(_QWORD *)&v88[9].ImpersonationLevel = 0LL;
      *(_QWORD *)&v88[12].Length = 0LL;
      if ( v103 )
      {
        RaidDmaPutScatterGatherList(*(_QWORD *)&v88[18].Length + 752LL, v103, 0LL);
        *(_QWORD *)&v88[12].ContextTrackingMode = 0LL;
      }
    }
    v104 = *(_QWORD *)&v88[8].ContextTrackingMode;
    if ( v104 && (v88[1].ImpersonationLevel & 1) != 0 )
    {
      if ( (*(_BYTE *)(v104 + 10) & 2) != 0 )
      {
        MmUnlockPages((PMDL)v104);
        v104 = *(_QWORD *)&v88[8].ContextTrackingMode;
      }
      IoFreeMdl((PMDL)v104);
      LOBYTE(v88[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v88[8].ContextTrackingMode = 0LL;
    }
    v105 = *(struct _MDL **)&v88[11].ImpersonationLevel;
    if ( v105 )
    {
      MmUnlockPages(v105);
      IoFreeMdl(*(PMDL *)&v88[11].ImpersonationLevel);
      *(_QWORD *)&v88[11].ImpersonationLevel = 0LL;
    }
    if ( BYTE2(v87->SecurityQos) == 40 )
      AccessState_high = (int)v87[1].SecurityQos;
    else
      AccessState_high = HIDWORD(v87->AccessState);
    if ( (AccessState_high & 0x4000) == 0 )
    {
      v107 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v108 = *(_DWORD *)(v107 + *(_QWORD *)(v89 + 32));
      if ( (v108 & 1) != 0 )
      {
LABEL_205:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v89 + 912), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v89 + 464), 0, 0);
      }
      else
      {
        while ( 1 )
        {
          v109 = v108;
          v108 = _InterlockedCompareExchange((volatile signed __int32 *)(v107 + *(_QWORD *)(v89 + 32)), v108 - 2, v108);
          if ( v109 == v108 )
            break;
          if ( (v108 & 1) != 0 )
            goto LABEL_205;
        }
      }
    }
    if ( v153 && *v153 == 59 && (v153[1] & 0x1F) == 0xF || v163 )
    {
      Pool = RaidAllocatePool(64LL, 16LL, 1230463314LL, *(_QWORD *)(v8 + 8));
      if ( Pool )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v8 + 8));
        *(_QWORD *)Pool = WorkItem;
        if ( WorkItem )
        {
          *(_QWORD *)(Pool + 8) = Irp;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 912));
          IoQueueWorkItem(*(PIO_WORKITEM *)Pool, RaidUpdateUnitIdentityWorkRoutine, CriticalWorkQueue, (PVOID)Pool);
          v112 = 1;
          goto LABEL_287;
        }
        ExFreePoolWithTag((PVOID)Pool, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
      goto LABEL_274;
    }
    if ( (*(_BYTE *)(v8 + 128) & 2) != 0 && v153 )
    {
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v113 = *(_QWORD *)(v7 + 64);
      else
        v113 = *(_QWORD *)(v7 + 24);
      v114 = a1;
      if ( v113 )
      {
        IsAddressValid = MmIsAddressValid(*(PVOID *)(a1 + 184));
        v116 = v151;
        if ( IsAddressValid )
        {
          v117 = *v153;
          if ( !v151 && (v117 == 37 || v117 == -98) && !*(_DWORD *)(v8 + 812) )
            goto LABEL_231;
          if ( FeatureServicingSMRCapacityEnabled && !v151 && v117 == -98 )
          {
            *(_QWORD *)(v8 + 3328) = 0xFFFFFFFFLL;
            v117 = *v153;
LABEL_231:
            v118 = *(_BYTE **)(a1 + 184);
            HIDWORD(v154) = 0;
            if ( v117 == 37 )
            {
              HIBYTE(v152) = v118[4];
              BYTE2(v152) = v118[5];
              BYTE1(v152) = v118[6];
              LOBYTE(v152) = v118[7];
              BYTE3(v154) = *v118;
              BYTE2(v154) = v118[1];
              BYTE1(v154) = v118[2];
              v119 = v118[3];
            }
            else
            {
              HIBYTE(v152) = v118[8];
              BYTE2(v152) = v118[9];
              BYTE1(v152) = v118[10];
              LOBYTE(v152) = v118[11];
              HIBYTE(v154) = *v118;
              BYTE6(v154) = v118[1];
              BYTE5(v154) = v118[2];
              BYTE4(v154) = v118[3];
              BYTE3(v154) = v118[4];
              BYTE2(v154) = v118[5];
              BYTE1(v154) = v118[6];
              v119 = v118[7];
            }
            v120 = v152;
            LOBYTE(v154) = v119;
            if ( v152 )
            {
              if ( ((v152 - 1) & v152) != 0 )
              {
                do
                  v120 &= v120 - 1;
                while ( ((v120 - 1) & v120) != 0 );
              }
            }
            else
            {
              v120 = 512;
            }
            *(_QWORD *)(v8 + 3328) = v154;
            *(_DWORD *)(v8 + 812) = v120;
LABEL_274:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
            {
              v136 = Irp;
            }
            else
            {
              v136 = Irp;
              if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                WPP_SF_qqD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  23LL,
                  &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
                  v8,
                  Irp,
                  Irp->IoStatus.Status);
            }
            if ( (qword_1C00793A8 & 0x10) != 0 )
              RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v136, v7);
            RaidCompleteRequestEx(v136);
            v112 = 1;
            goto LABEL_287;
          }
        }
LABEL_241:
        if ( (*(_BYTE *)(v8 + 128) & 2) != 0 && v153 && !v116 && *v153 == 0x95 && !v153[1] && *(_DWORD *)(v8 + 812) )
        {
          v121 = *(_BYTE *)(v7 + 2) == 40 ? *(_QWORD *)(v7 + 64) : *(_QWORD *)(v7 + 24);
          if ( v121 && MmIsAddressValid(*(PVOID *)(v114 + 184)) )
          {
            v122 = *(_BYTE **)(v114 + 184);
            v123 = *(unsigned int *)(v8 + 812);
            HIBYTE(v156) = v122[72];
            BYTE6(v156) = v122[73];
            BYTE5(v156) = v122[74];
            BYTE4(v156) = v122[75];
            BYTE3(v156) = v122[76];
            BYTE2(v156) = v122[77];
            BYTE1(v156) = v122[78];
            v124 = v122[79];
            v125 = *(_QWORD *)(v8 + 3280);
            LOBYTE(v156) = v124;
            v126 = v156 * (unsigned int)v123;
            if ( v125 != v126 )
            {
              *(_QWORD *)(v8 + 3280) = v126;
              v125 = v156 * (unsigned int)v123;
            }
            if ( v125 )
            {
              if ( !*(_QWORD *)(v8 + 3304) )
              {
                if ( FeatureServicingSMRCapacityEnabled )
                  LODWORD(v132) = GetZoneCountFromUnit(v8);
                else
                  v132 = v123 * *(_QWORD *)(v8 + 3328) / v125;
                v133 = RaidAllocatePool(64LL, (unsigned int)v132, 1381654866LL, *(_QWORD *)(v8 + 8));
                *(_QWORD *)(v8 + 3304) = v133;
                if ( v133
                  && (v134 = (ULONG *)RaidAllocatePool(
                                        64LL,
                                        ((_DWORD)v132 + 3) & 0xFFFFFFFC,
                                        1381654866LL,
                                        *(_QWORD *)(v8 + 8))) != 0LL )
                {
                  RtlInitializeBitMap((PRTL_BITMAP)(v8 + 3312), v134, v132);
                  RtlClearAllBits((PRTL_BITMAP)(v8 + 3312));
                }
                else
                {
                  v135 = *(void **)(v8 + 3304);
                  if ( v135 )
                  {
                    ExFreePoolWithTag(v135, 0x525A6152u);
                    *(_QWORD *)(v8 + 3304) = 0LL;
                  }
                  *(_BYTE *)(v8 + 451) |= 1u;
                  IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v8 + 8));
                }
              }
            }
            else
            {
              v127 = *(_QWORD *)(v8 + 152);
              v128 = 0LL;
              if ( v127 )
              {
                v128 = (const int *)(v127 + 90);
              }
              else
              {
                v130 = *(_QWORD *)(v8 + 144);
                if ( v130 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 568LL) + 184LL) & 0x40) != 0 )
                  v128 = (const int *)(v130 + 41);
              }
              if ( (byte_1C00799E4 & 2) != 0 )
              {
                v131 = &dword_1C006A660;
                if ( v128 )
                  v131 = v128;
                v129 = *(_DWORD *)(v8 + 96);
                McTemplateK0zqjuuussssx_EtwWriteTransfer(
                  v129 >> 8,
                  *(_QWORD *)(v8 + 24) + 4936,
                  v8 + 186,
                  *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4592LL),
                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
                  *(_QWORD *)(v8 + 24) + 4936LL,
                  v129,
                  SBYTE1(v129),
                  SBYTE2(v129),
                  v8 + 160,
                  v8 + 169,
                  v8 + 186,
                  (__int64)v131,
                  0);
              }
            }
          }
        }
        goto LABEL_274;
      }
    }
    else
    {
      v114 = a1;
    }
    v116 = v151;
    goto LABEL_241;
  }
  if ( (*(_BYTE *)(v8 + 128) & 2) != 0 )
  {
    v137 = IsZonedWriteRequest(v8, 0LL, a1, 0LL);
    v138 = *(_QWORD *)(v8 + 24);
    if ( v137 )
    {
      ++*(_DWORD *)(v138 + 5512);
      ++*(_DWORD *)(v8 + 2156);
    }
    else
    {
      ++*(_DWORD *)(v138 + 5516);
    }
  }
  v112 = RaUnitAsyncError(v8, a1);
LABEL_287:
  if ( (v157 & 0x1C) != 0xC && v112 )
  {
    v139 = (unsigned __int8)StorRemoveIoGatewayItem(&v165, &v164);
    if ( v164 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v164 + 64) + 32LL) + 648LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v164 + 64) + 32LL) + 640LL),
        v164 - 120,
        &v165,
        0LL);
    if ( v139 )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24), 0LL);
    v140 = 0;
    v171 = 0LL;
    v172 = 0;
    v141 = *(_QWORD *)(v8 + 24);
    v170 = 0LL;
    if ( v141 )
    {
      v142 = *(_QWORD *)(v8 + 504);
      if ( v142 )
      {
        if ( *(_QWORD *)(v141 + 4776) )
        {
          v143 = 0;
          memset(&v173, 0, sizeof(v173));
          if ( *(_DWORD *)(v142 + 8) )
          {
            do
            {
              v144 = (KSPIN_LOCK *)(v142 + ((v143 + 1LL) << 6));
              KeAcquireInStackQueuedSpinLock(v144 + 5, &v173);
              if ( (KSPIN_LOCK *)*v144 != v144 && *(_QWORD *)(*v144 + 40) < v83 )
                v83 = *(_QWORD *)(*v144 + 40);
              KeReleaseInStackQueuedSpinLock(&v173);
              ++v143;
            }
            while ( v143 < *(_DWORD *)(v142 + 8) );
          }
          v145 = 0LL;
          if ( v83 != -1LL )
            v145 = v83;
          if ( v145 )
            v140 = KeQueryUnbiasedInterruptTime() - v145 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4776LL);
        }
      }
    }
    v146 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 728));
    if ( !v160
      && !*(_DWORD *)(v8 + 688)
      && *(_DWORD *)(v8 + 696) == v160
      && *(_DWORD *)(v8 + 676) == v160
      && *(_DWORD *)(v8 + 672) == v160 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 732));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v146);
    }
    else
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v146);
      v147 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728));
      RiDeleteDeviceQueueEntry(v8 + 656, v160);
      v148 = RiNormalizeDeviceQueue(v8 + 656, v140);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728), v147);
      if ( v148 )
      {
        if ( StorEtwLoggingEnabled )
        {
          if ( byte_1C00799E2 < 0 )
          {
            v174 = 0LL;
            IoGetActivityIdIrp(v148 - 120, &v174);
            if ( byte_1C00799E2 < 0 )
              McTemplateK0pquuqqd_EtwWriteTransfer(
                *(_DWORD *)(v8 + 672) + *(_DWORD *)(v8 + 676),
                ((*(_BYTE *)(v148 + 22) & 6) != 0) + 1,
                (unsigned int)&v174,
                v8 + 656,
                ((*(_BYTE *)(v148 + 22) & 6) != 0) + 1,
                5,
                0,
                *(_BYTE *)(v8 + 672) + *(_BYTE *)(v8 + 676),
                *(_DWORD *)(v8 + 732));
          }
        }
        if ( !StorSubmitIoGatewayItem(*(_QWORD *)(v8 + 664), v148, &v170) )
          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v8 + 648))(
            *(_QWORD *)(v8 + 640),
            v148 - 120,
            &v170,
            0LL);
      }
      if ( v160 )
      {
        for ( i = RaidNormalizeDeviceQueue(v8 + 656); i; i = RaidNormalizeDeviceQueue(v8 + 656) )
        {
          if ( !StorSubmitIoGatewayItem(*(_QWORD *)(v8 + 664), i, &v170) )
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v8 + 648))(
              *(_QWORD *)(v8 + 640),
              i - 120,
              &v170,
              0LL);
        }
      }
    }
  }
}
