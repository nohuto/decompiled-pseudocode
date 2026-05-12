/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C0001770
 * Callers:
 *     <none>
 * Callees:
 *     RiFlushDeviceLists @ 0x1C0001008 (RiFlushDeviceLists.c)
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorUnmapSenseInfo @ 0x1C00033E0 (StorUnmapSenseInfo.c)
 *     StorpTelemetryCollectPerfData @ 0x1C0003500 (StorpTelemetryCollectPerfData.c)
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidDmaPutScatterGatherList @ 0x1C0008B74 (RaidDmaPutScatterGatherList.c)
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0014E64 (StorpTelemetryCollectErrorData.c)
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 *     RaidNormalizeDeviceQueue @ 0x1C00195C4 (RaidNormalizeDeviceQueue.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     GetZoneCountFromUnit @ 0x1C0022258 (GetZoneCountFromUnit.c)
 *     McTemplateK0zqjuuussssxx_EtwWriteTransfer @ 0x1C00226BC (McTemplateK0zqjuuussssxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C0037598 (RaidAdapterReleaseCryptoKeyResources.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C003FF00 (StorRemoveEventQueue.c)
 *     StorRemoveEventQueueInternal @ 0x1C003FFC0 (StorRemoveEventQueueInternal.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x1C0040054 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0043034 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004FE78 (RaidSrbExGetBidirectionalData.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1C004FEF4 (McTemplateK0zx_EtwWriteTransfer.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C005C3CC (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x1C006086C (RaidLogRequestComplete.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C00651AC (RaidFreeRemappedScatterGatherListMdl.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0067CB4 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0067FFC (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  IRP *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  unsigned int *v10; // r15
  __int64 v11; // rbx
  __int64 *v12; // r14
  KSPIN_LOCK *v13; // rbx
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v15; // rcx
  char v16; // al
  int v17; // r9d
  __int64 *v18; // rcx
  KSPIN_LOCK v19; // r8
  __int64 **v20; // rax
  __int64 *v21; // rcx
  KSPIN_LOCK v22; // rdx
  __int64 **v23; // rax
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  _BYTE *v27; // r15
  unsigned int v28; // r11d
  unsigned int i; // r10d
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  char v39; // al
  char v40; // bl
  unsigned int v41; // r11d
  unsigned __int8 v42; // r12
  char v43; // r14
  _BYTE *v44; // r15
  unsigned int v45; // r11d
  unsigned int v46; // r9d
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r10
  __int64 v50; // r8
  int v51; // ecx
  int v52; // ecx
  unsigned __int64 v53; // rcx
  unsigned int v54; // ebx
  unsigned int v55; // r10d
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r8
  int v60; // ecx
  int v61; // ecx
  char v62; // al
  unsigned __int64 v63; // rcx
  PIRP v64; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 v66; // bl
  __int64 v67; // r14
  _QWORD *v68; // rcx
  unsigned int HighestNodeNumber; // r8d
  __int64 v70; // rcx
  int v71; // ecx
  bool v72; // zf
  unsigned int v73; // r11d
  unsigned int v74; // r9d
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // r10
  __int64 v78; // r8
  int v79; // ecx
  int v80; // ecx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r12
  _BYTE *v83; // rbx
  unsigned __int64 v84; // rax
  _IO_STACK_LOCATION *v85; // rax
  _IO_SECURITY_CONTEXT *v86; // r15
  _SECURITY_QUALITY_OF_SERVICE *v87; // r14
  __int64 v88; // r13
  int v89; // edx
  int v90; // ecx
  int v91; // r9d
  __int64 v92; // rcx
  __int64 v93; // r13
  LARGE_INTEGER v94; // rax
  LARGE_INTEGER v95; // rbx
  unsigned int AccessState; // r9d
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int64 DesiredAccess; // rax
  __int64 v100; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v102; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // r9
  __int64 v106; // r9
  __int64 v107; // rbx
  __int64 BidirectionalData; // rax
  __int64 v109; // rax
  int v110; // ebx
  bool v111; // bl
  __int64 *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  void (__fastcall *v115)(__int64, _QWORD, bool); // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  struct _MDL *v118; // rcx
  int AccessState_high; // eax
  unsigned __int64 v120; // r8
  signed __int32 v121; // eax
  signed __int32 v122; // ett
  __int64 Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v125; // cl
  __int64 v126; // rax
  __int64 v127; // r14
  BOOLEAN IsAddressValid; // al
  unsigned int v129; // ecx
  char v130; // al
  _DWORD *v131; // rdx
  _BYTE *v132; // rcx
  char v133; // al
  int v134; // ecx
  __int64 v135; // rax
  _BYTE *v136; // rcx
  char v137; // al
  __int64 v138; // rcx
  char v139; // r15
  __int64 v140; // rax
  __int64 v141; // rcx
  unsigned int v142; // eax
  const int *v143; // r8
  __int64 v144; // r9
  const int *v145; // r14
  const int *v146; // r14
  __int64 ZoneCountFromUnit; // r14
  __int64 v148; // rax
  ULONG *v149; // rax
  void *v150; // rcx
  IRP *v151; // rbx
  char v152; // al
  __int64 v153; // rcx
  int v154; // ebx
  bool v155; // r13
  __int64 v156; // rax
  __int64 v157; // r14
  unsigned int v158; // esi
  KSPIN_LOCK *v159; // rbx
  unsigned __int64 v160; // rbx
  char *v161; // rsi
  KIRQL v162; // al
  signed __int64 v163; // r8
  char v164; // r14
  char v165; // r12
  signed __int64 v166; // r9
  PSLIST_ENTRY v167; // rax
  struct _EX_RUNDOWN_REF *v168; // r15
  volatile LONG *v169; // r14
  BOOL v170; // r12d
  signed __int64 v171; // r8
  char v172; // r12
  signed __int64 v173; // r9
  PSLIST_ENTRY v174; // rax
  signed __int64 v175; // rsi
  signed __int64 v176; // rax
  int v177; // eax
  __int64 v178; // rax
  signed __int64 v179; // r14
  signed __int64 v180; // rax
  __int64 j; // rsi
  char v182; // [rsp+80h] [rbp-80h]
  char v183; // [rsp+80h] [rbp-80h]
  char v184; // [rsp+81h] [rbp-7Fh]
  KIRQL v185; // [rsp+81h] [rbp-7Fh]
  unsigned int v186; // [rsp+84h] [rbp-7Ch]
  int v187; // [rsp+84h] [rbp-7Ch]
  __int64 v188; // [rsp+88h] [rbp-78h]
  unsigned int v189; // [rsp+90h] [rbp-70h]
  BOOL v190; // [rsp+90h] [rbp-70h]
  int v191; // [rsp+94h] [rbp-6Ch]
  bool v192; // [rsp+94h] [rbp-6Ch]
  _BYTE *v193; // [rsp+98h] [rbp-68h]
  __int64 v194; // [rsp+98h] [rbp-68h]
  PIRP Irp; // [rsp+A0h] [rbp-60h]
  unsigned int v196; // [rsp+A8h] [rbp-58h]
  __int64 v197; // [rsp+A8h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v199; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v200; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v201; // [rsp+C8h] [rbp-38h]
  __int64 v202; // [rsp+D0h] [rbp-30h]
  __int64 v203; // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v205; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v206; // [rsp+108h] [rbp+8h]
  int v207; // [rsp+110h] [rbp+10h]
  struct _KLOCK_QUEUE_HANDLE v208; // [rsp+118h] [rbp+18h] BYREF
  __int128 v209; // [rsp+130h] [rbp+30h] BYREF
  __int128 v210; // [rsp+140h] [rbp+40h] BYREF

  v4 = a1;
  v188 = a1;
  v5 = *(IRP **)(a1 + 160);
  v200 = 0LL;
  v202 = v4;
  v6 = *(_QWORD *)(v4 + 168);
  v7 = *(_QWORD *)(v4 + 224);
  v184 = *(_BYTE *)(v4 + 16);
  v199 = 0LL;
  Irp = v5;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    LODWORD(a4) = *(_DWORD *)(v6 + 20);
    v201 = *(_QWORD *)(v6 + 104);
    v203 = v4 + 800;
    v191 = *(_DWORD *)(v6 + 24);
    v196 = *(_DWORD *)(v6 + 60);
    v186 = a4;
    v189 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v186 = *(unsigned __int8 *)(v6 + 2);
    v201 = *(_QWORD *)(v6 + 56);
    v203 = *(_QWORD *)(v6 + 32);
    v189 = *(unsigned __int8 *)(v6 + 8);
    v191 = *(_DWORD *)(v6 + 12);
    v196 = *(_DWORD *)(v6 + 16);
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
      if ( (byte_1C0092A01 & 1) != 0 )
        StorEtwIORequestServiceTimeEventData(v4, 0LL, 0LL);
      if ( *(_DWORD *)(v7 + 1860) && (byte_1C0092A03 & 2) != 0 )
        StorEtwLogoRequestServiceTimeEventData(v4, 0LL, 0LL);
    }
    goto LABEL_37;
  }
  v10 = *(unsigned int **)(v7 + 504);
  v11 = (SecurityQos[7].Length + 1LL) << 6;
  v12 = (__int64 *)&SecurityQos[4];
  v13 = (KSPIN_LOCK *)((char *)v10 + v11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v15 = v13 + 5;
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v15, &LockHandle);
    v16 = *((_BYTE *)v12 - 32);
    v17 = *v10;
    if ( (v16 & 2) == 0 )
    {
LABEL_23:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_27;
    }
    *((_BYTE *)v12 - 32) = v16 & 0xFD;
    v18 = (__int64 *)*v12;
    v19 = *v13;
    if ( *(__int64 **)(*v12 + 8) == v12 )
    {
      v20 = (__int64 **)v12[1];
      if ( *v20 == v12 )
      {
        *v20 = v18;
        v18[1] = (__int64)v20;
        if ( (v12[6] & 1) == 0 )
        {
LABEL_18:
          if ( (v17 & 4) == 0 && (__int64 *)v19 == v12 )
          {
            if ( (KSPIN_LOCK *)*v13 == v13 )
              v24 = -1;
            else
              v24 = *(_DWORD *)(*v13 + 32);
            *((_DWORD *)v13 + 12) = v24;
          }
          goto LABEL_23;
        }
        v21 = v12 + 2;
        if ( (__int64 *)v13[4] == v12 + 2 )
          v13[4] = *v21;
        v22 = *v21;
        if ( *(__int64 **)(*v21 + 8) == v21 )
        {
          v23 = (__int64 **)v12[3];
          if ( *v23 == v21 )
          {
            *v23 = (__int64 *)v22;
            *(_QWORD *)(v22 + 8) = v23;
            *((_DWORD *)v12 + 12) &= ~1u;
            goto LABEL_18;
          }
        }
      }
    }
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock(v15, &LockHandle);
  StorRemoveEventQueueInternal(v13, *v10, v12);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_27:
  if ( StorEtwLoggingEnabled )
  {
    v209 = 0LL;
    IoGetActivityIdIrp(Irp, &v209);
    if ( byte_1C0092A02 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v26, v25, (unsigned int)&v209, a4, 4);
    v4 = v188;
    goto LABEL_31;
  }
LABEL_37:
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v27 = (_BYTE *)(v6 + 72);
    goto LABEL_56;
  }
  v27 = 0LL;
  v193 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v28 = *(_DWORD *)(v6 + 56);
    for ( i = 0; i < v28; ++i )
    {
      v30 = *(unsigned int *)(v6 + 4LL * i + 120);
      if ( (unsigned int)v30 < 0x80 )
        continue;
      v31 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v30 >= (unsigned int)v31 )
        continue;
      a4 = v30 + v6;
      v32 = (unsigned int)v30;
      v33 = *(_DWORD *)(v30 + v6) - 64;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 && v32 + 40 <= v31 )
          {
            if ( !*(_DWORD *)(a4 + 12) )
              break;
            v27 = (_BYTE *)(a4 + 32);
            goto LABEL_56;
          }
          continue;
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
        v27 = (_BYTE *)(a4 + 24);
LABEL_56:
        v193 = v27;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v7 + 2292) )
  {
    if ( v27 )
    {
      v36 = (unsigned __int8)*v27;
      if ( !v186 )
      {
        if ( (unsigned __int8)(v36 - 8) <= 0x3Au
          && (v37 = 0x400200500000005LL, _bittest64(&v37, (unsigned int)(v36 - 8)))
          || (unsigned __int8)(v36 + 120) <= 0x22u && (v38 = 0x500000205LL, _bittest64(&v38, (unsigned int)(v36 + 120))) )
        {
          StorpTelemetryCollectPerfData(v188, v6, v7, a4, v36);
        }
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v27 )
  {
LABEL_111:
    v64 = Irp;
    goto LABEL_112;
  }
  v39 = *(_BYTE *)(v6 + 2);
  v40 = 0;
  v41 = *(unsigned __int8 *)(v6 + 3);
  v42 = 0;
  v43 = 0;
  v182 = *(_BYTE *)(v6 + 3);
  v44 = 0LL;
  if ( v39 != 40 )
  {
    v43 = *(_BYTE *)(v6 + 4);
    LOBYTE(v41) = v41 & 0x3F;
    if ( !v39 )
    {
      v44 = *(_BYTE **)(v6 + 32);
      v42 = *(_BYTE *)(v6 + 11);
    }
    goto LABEL_93;
  }
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_82;
  v45 = *(_DWORD *)(v6 + 56);
  v46 = 0;
  if ( !v45 )
    goto LABEL_81;
  while ( 1 )
  {
    v47 = *(unsigned int *)(v6 + 4LL * v46 + 120);
    if ( (unsigned int)v47 < 0x80 )
      goto LABEL_77;
    v48 = *(unsigned int *)(v6 + 16);
    if ( (unsigned int)v47 >= (unsigned int)v48 )
      goto LABEL_77;
    v49 = v47 + v6;
    v50 = (unsigned int)v47;
    v51 = *(_DWORD *)(v47 + v6) - 64;
    if ( !v51 )
    {
LABEL_75:
      v53 = v50 + 40;
      goto LABEL_76;
    }
    v52 = v51 - 1;
    if ( !v52 )
      break;
    if ( v52 == 1 )
      goto LABEL_75;
LABEL_77:
    if ( ++v46 >= v45 )
      goto LABEL_81;
  }
  v53 = v50 + 56;
LABEL_76:
  if ( v53 > v48 )
    goto LABEL_77;
  v43 = *(_BYTE *)(v49 + 8);
LABEL_81:
  v41 = (unsigned __int8)v182;
LABEL_82:
  LOBYTE(v41) = v41 & 0x3F;
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_93;
  v54 = *(_DWORD *)(v6 + 56);
  v55 = 0;
  if ( !v54 )
    goto LABEL_92;
  while ( 2 )
  {
    v56 = *(unsigned int *)(v6 + 4LL * v55 + 120);
    if ( (unsigned int)v56 < 0x80 )
      goto LABEL_101;
    v57 = *(unsigned int *)(v6 + 16);
    if ( (unsigned int)v56 >= (unsigned int)v57 )
      goto LABEL_101;
    v58 = v56 + v6;
    v59 = (unsigned int)v56;
    v60 = *(_DWORD *)(v56 + v6) - 64;
    if ( v60 )
    {
      v61 = v60 - 1;
      if ( v61 )
      {
        if ( v61 == 1 && v59 + 40 <= v57 )
        {
          v44 = *(_BYTE **)(v58 + 24);
          goto LABEL_91;
        }
        goto LABEL_101;
      }
      v63 = v59 + 56;
    }
    else
    {
      v63 = v59 + 40;
    }
    if ( v63 > v57 )
    {
LABEL_101:
      if ( ++v55 >= v54 )
        goto LABEL_92;
      continue;
    }
    break;
  }
  v44 = *(_BYTE **)(v58 + 16);
LABEL_91:
  v42 = *(_BYTE *)(v58 + 9);
LABEL_92:
  v40 = 0;
LABEL_93:
  if ( v182 >= 0 )
  {
    if ( v43 != 2 && (unsigned __int8)v41 <= 0x12u )
    {
      v71 = 262211;
      if ( _bittest(&v71, v41) )
        goto LABEL_110;
    }
  }
  else
  {
    if ( v44 && v42 >= 0x12u && (unsigned __int8)((*v44 & 0x7F) - 112) <= 1u )
    {
      v62 = v44[12];
      v40 = v44[2] & 0xF;
    }
    else
    {
      v62 = 0;
    }
    if ( (_BYTE)v41 == 1 && !v40 && !v62 )
    {
LABEL_110:
      v27 = v193;
      goto LABEL_111;
    }
  }
  v64 = Irp;
  StorpTelemetryCollectErrorData(v7, Irp, v188, v6);
  v27 = v193;
LABEL_112:
  if ( (*(_BYTE *)(v188 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v7, *(unsigned int *)(v188 + 748));
    *(_BYTE *)(v188 + 17) &= ~2u;
  }
  CurrentStackLocation = v64->Tail.Overlay.CurrentStackLocation;
  v66 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v67 = *(_QWORD *)(v7 + 24);
  if ( (v66 & 1) != 0
    && *(char *)(v7 + 449) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1784)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v7 + 1792), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1784));
  }
  if ( v66 >= 2u )
  {
    v68 = *(_QWORD **)(v67 + 4896);
    if ( v68 )
      PoFxIdleComponent(*v68, 0LL, 0LL);
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v189 / *(_DWORD *)(v7 + 584) < HighestNodeNumber + 1 )
    HighestNodeNumber = v189 / *(_DWORD *)(v7 + 584);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v7 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v7 + 576) + 16LL * v189));
  v190 = 0;
  if ( (v191 & 0x102) != 0x102 && (v191 & 0x80010) == 0 )
  {
    if ( v186 > 0x20 || (v70 = 0x1000D0000LL, !_bittest64(&v70, v186)) )
      v190 = 1;
  }
  if ( (*(_BYTE *)(v7 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6, 1LL) )
  {
    v72 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v72 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v73 = *(_DWORD *)(v6 + 56);
        v74 = 0;
        if ( v73 )
        {
          while ( 1 )
          {
            v75 = *(unsigned int *)(v6 + 4LL * v74 + 120);
            if ( (unsigned int)v75 < 0x80 )
              goto LABEL_145;
            v76 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v75 >= (unsigned int)v76 )
              goto LABEL_145;
            v77 = v75 + v6;
            v78 = (unsigned int)v75;
            v79 = *(_DWORD *)(v75 + v6) - 64;
            if ( !v79 )
              goto LABEL_143;
            v80 = v79 - 1;
            if ( v80 )
              break;
            v81 = v78 + 56;
LABEL_144:
            if ( v81 <= v76 )
            {
              *(_BYTE *)(v77 + 8) = 0;
              goto LABEL_150;
            }
LABEL_145:
            if ( ++v74 >= v73 )
              goto LABEL_150;
          }
          if ( v80 != 1 )
            goto LABEL_145;
LABEL_143:
          v81 = v78 + 40;
          goto LABEL_144;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_150:
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 2152));
  }
  v82 = -1LL;
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) == 1 )
  {
    v192 = 0;
    if ( v27
      && *v27 == 29
      && (*(_BYTE *)(v6 + 2) != 40 ? (v83 = *(_BYTE **)(v6 + 24)) : (v83 = *(_BYTE **)(v6 + 64)), v83) )
    {
      v72 = MmIsAddressValid(v83) == 0;
      v84 = v196;
      if ( !v72 && v196 >= 9 && *v83 == 14 )
        v192 = v83[8] == 15;
    }
    else
    {
      v84 = v196;
    }
    Irp->IoStatus.Information = v84;
    v85 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v86 = v85->Parameters.Create.SecurityContext;
    if ( BYTE2(v86->SecurityQos) == 40 )
      v87 = v86[4].SecurityQos;
    else
      v87 = v86[2].SecurityQos;
    v88 = *(_QWORD *)&v87[18].ContextTrackingMode;
    v197 = v88;
    if ( (v87[1].ImpersonationLevel & 2) != 0 )
    {
      StorRemoveEventQueue(*(_QWORD *)(v88 + 504), &v87[4]);
      if ( StorEtwLoggingEnabled )
      {
        v210 = 0LL;
        IoGetActivityIdIrp(Irp, &v210);
        if ( byte_1C0092A02 < 0 )
          McTemplateK0dud_EtwWriteTransfer(v90, v89, (unsigned int)&v210, v91, 4);
      }
    }
    StorUnmapSenseInfo(v87, *(_QWORD *)(*(_QWORD *)(v88 + 24) + 8LL));
    v92 = *(_QWORD *)(v88 + 24);
    if ( *(_QWORD *)(v92 + 5544) )
      RaidAdapterReleaseCryptoKeyResources(v92, v87);
    if ( BYTE2(v86->SecurityQos) == 40 )
    {
      if ( (v87[1].ImpersonationLevel & 0x40) != 0 )
      {
        v93 = *(_QWORD *)&v87[62].ContextTrackingMode;
        PerformanceFrequency.QuadPart = 1LL;
        if ( v93 )
        {
          if ( UseQPCTime )
            v94 = KeQueryPerformanceCounter(&PerformanceFrequency);
          else
            v94.QuadPart = KeQueryUnbiasedInterruptTime();
          v95 = v94;
          *(_BYTE *)(v93 + 3) = BYTE3(v86->SecurityQos);
          *(_DWORD *)(v93 + 12) = v86[1].SecurityQos;
          if ( ((__int64)v86[1].SecurityQos & 0x40) != 0 )
            *(_DWORD *)(v93 + 16) = HIDWORD(v86[2].AccessState);
          if ( BYTE3(v86->SecurityQos) == 48 )
            *(_DWORD *)(v93 + 64) = v86[1].FullCreateOptions;
          if ( !v86->FullCreateOptions )
          {
            AccessState = (unsigned int)v86[2].AccessState;
            v97 = 0LL;
            if ( AccessState )
            {
              while ( 1 )
              {
                v98 = *((unsigned int *)&v86[5].SecurityQos + v97);
                if ( (unsigned int)v98 >= 0x80 )
                {
                  DesiredAccess = v86->DesiredAccess;
                  if ( (unsigned int)v98 <= (unsigned int)DesiredAccess )
                  {
                    v100 = (__int64)v86 + v98;
                    if ( *(_DWORD *)((char *)&v86->SecurityQos + v98) == 64 && v98 + 40 <= DesiredAccess )
                      break;
                  }
                }
                v97 = (unsigned int)(v97 + 1);
                if ( (unsigned int)v97 >= AccessState )
                  goto LABEL_189;
              }
              *(_BYTE *)(v93 + 4) = *(_BYTE *)(v100 + 8);
              *(_QWORD *)(v93 + 32) = *(_QWORD *)(v100 + 16);
              *(_BYTE *)(v93 + 11) = *(_BYTE *)(v100 + 9);
            }
            else
            {
LABEL_189:
              *(_BYTE *)(v93 + 3) = 48;
              *(_DWORD *)(v93 + 64) = -1073741811;
            }
          }
          if ( UseQPCTime )
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          else
            PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
          if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v95.QuadPart )
            v104 = PerformanceCounter.QuadPart - v95.QuadPart;
          else
            v104 = PerformanceCounter.QuadPart - v95.QuadPart - 1;
          if ( UseQPCTime )
          {
            LowPart = PerformanceFrequency.LowPart;
            LOBYTE(v105) = 0;
            if ( PerformanceFrequency.QuadPart && v104 )
            {
              v106 = v104 / PerformanceFrequency.QuadPart;
              v104 = 1000 * (v104 % PerformanceFrequency.QuadPart);
              v102.QuadPart = 10000 * (v104 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
              v105 = 10000 * (v104 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                   + 10000 * (1000 * v106 + v104 / PerformanceFrequency.QuadPart);
            }
          }
          else
          {
            LOBYTE(v105) = v104;
          }
          if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
            McTemplateK0zx_EtwWriteTransfer(
              LowPart,
              v102.LowPart,
              v104,
              (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
              v105);
        }
        v88 = v197;
        *(_QWORD *)(*(_QWORD *)&v87[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v87[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v87[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v87[15].ImpersonationLevel;
        *(_QWORD *)(*(_QWORD *)&v87[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v87[62].ContextTrackingMode + 40LL) = 0LL;
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v87[62].ContextTrackingMode;
        LOBYTE(v87[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v87[62].ContextTrackingMode = 0LL;
      }
      else
      {
        v86[4].SecurityQos = 0LL;
        *(_QWORD *)&v86[2].DesiredAccess = *(_QWORD *)&v87[15].ImpersonationLevel;
        v86[4].AccessState = 0LL;
        v107 = *(_QWORD *)&v87[16].Length;
        if ( v107 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v86);
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = v107;
        }
      }
    }
    else
    {
      v86[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v87[14].ContextTrackingMode;
      v86[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v87[15].ImpersonationLevel;
      v86[2].AccessState = 0LL;
      *(_QWORD *)&v86[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v87[9].ImpersonationLevel )
    {
      v109 = *(_QWORD *)&v87[14].Length;
      if ( *(_BYTE *)(v109 + 2) == 40 )
        v110 = *(_DWORD *)(v109 + 24) >> 6;
      else
        LOBYTE(v110) = *(_BYTE *)(v109 + 12) >> 6;
      v111 = (v110 & 1) == 0;
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(v87);
      v112 = (__int64 *)(*(_QWORD *)&v87[18].Length + 760LL);
      if ( *(_QWORD *)&v87[18].Length != -760LL )
      {
        v113 = *v112;
        if ( *v112 )
        {
          v114 = *(_QWORD *)(v113 + 8);
          if ( v114 )
          {
            v115 = *(void (__fastcall **)(__int64, _QWORD, bool))(v114 + 96);
            if ( v115 )
              v115(v113, *(_QWORD *)&v87[9].ImpersonationLevel, v111);
          }
        }
      }
      v116 = *(_QWORD *)&v87[12].ContextTrackingMode;
      *(_QWORD *)&v87[9].ImpersonationLevel = 0LL;
      *(_QWORD *)&v87[12].Length = 0LL;
      if ( v116 )
      {
        RaidDmaPutScatterGatherList(*(_QWORD *)&v87[18].Length + 760LL, v116, 0LL);
        *(_QWORD *)&v87[12].ContextTrackingMode = 0LL;
      }
    }
    v117 = *(_QWORD *)&v87[8].ContextTrackingMode;
    if ( v117 && (v87[1].ImpersonationLevel & 1) != 0 )
    {
      if ( (*(_BYTE *)(v117 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v117);
      IoFreeMdl(*(PMDL *)&v87[8].ContextTrackingMode);
      LOBYTE(v87[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v87[8].ContextTrackingMode = 0LL;
    }
    v118 = *(struct _MDL **)&v87[11].ImpersonationLevel;
    if ( v118 )
    {
      MmUnlockPages(v118);
      IoFreeMdl(*(PMDL *)&v87[11].ImpersonationLevel);
      *(_QWORD *)&v87[11].ImpersonationLevel = 0LL;
    }
    if ( BYTE2(v86->SecurityQos) == 40 )
      AccessState_high = (int)v86[1].SecurityQos;
    else
      AccessState_high = HIDWORD(v86->AccessState);
    if ( (AccessState_high & 0x4000) == 0 )
    {
      v120 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v121 = *(_DWORD *)(v120 + *(_QWORD *)(v88 + 32));
      if ( (v121 & 1) != 0 )
      {
LABEL_238:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 968), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v88 + 464), 0, 0);
      }
      else
      {
        while ( 1 )
        {
          v122 = v121;
          v121 = _InterlockedCompareExchange((volatile signed __int32 *)(v120 + *(_QWORD *)(v88 + 32)), v121 - 2, v121);
          if ( v122 == v121 )
            break;
          if ( (v121 & 1) != 0 )
            goto LABEL_238;
        }
      }
    }
    if ( v193 && *v193 == 59 && (v193[1] & 0x1F) == 0xF || v192 )
    {
      Pool = RaidAllocatePool(64LL, 16LL, 1230463314LL, *(_QWORD *)(v7 + 8));
      if ( Pool )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v7 + 8));
        *(_QWORD *)Pool = WorkItem;
        if ( WorkItem )
        {
          *(_QWORD *)(Pool + 8) = Irp;
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 968));
          IoQueueWorkItem(*(PIO_WORKITEM *)Pool, RaidUpdateUnitIdentityWorkRoutine, CriticalWorkQueue, (PVOID)Pool);
          v125 = 1;
          goto LABEL_328;
        }
        ExFreePoolWithTag((PVOID)Pool, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v7 + 24) + 32LL), BusRelations);
      goto LABEL_315;
    }
    if ( (*(_BYTE *)(v7 + 128) & 2) != 0 && v193 )
    {
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v126 = *(_QWORD *)(v6 + 64);
      else
        v126 = *(_QWORD *)(v6 + 24);
      v127 = v188;
      if ( v126 )
      {
        IsAddressValid = MmIsAddressValid(*(PVOID *)(v188 + 184));
        v129 = v186;
        if ( IsAddressValid )
        {
          v130 = *v193;
          if ( !v186 && (v130 == 37 || v130 == -98) )
          {
            v131 = (_DWORD *)(v7 + 868);
            if ( !*(_DWORD *)(v7 + 868) )
            {
              v132 = *(_BYTE **)(v188 + 184);
              HIDWORD(v188) = 0;
              if ( v130 == 37 )
              {
                HIBYTE(v187) = v132[4];
                BYTE2(v187) = v132[5];
                BYTE1(v187) = v132[6];
                LOBYTE(v187) = v132[7];
                BYTE3(v188) = *v132;
                BYTE2(v188) = v132[1];
                BYTE1(v188) = v132[2];
                v133 = v132[3];
LABEL_264:
                v134 = v187;
                LOBYTE(v188) = v133;
                if ( v187 )
                {
                  if ( ((v187 - 1) & v187) != 0 )
                  {
                    do
                      v134 &= v134 - 1;
                    while ( ((v134 - 1) & v134) != 0 );
                    v131 = (_DWORD *)(v7 + 868);
                  }
                  *(_QWORD *)(v7 + 3376) = v188;
                  *v131 = v134;
                }
                else
                {
                  *v131 = 512;
                  *(_QWORD *)(v7 + 3376) = v188;
                }
                goto LABEL_315;
              }
LABEL_263:
              HIBYTE(v187) = v132[8];
              BYTE2(v187) = v132[9];
              BYTE1(v187) = v132[10];
              LOBYTE(v187) = v132[11];
              HIBYTE(v188) = *v132;
              BYTE6(v188) = v132[1];
              BYTE5(v188) = v132[2];
              BYTE4(v188) = v132[3];
              BYTE3(v188) = v132[4];
              BYTE2(v188) = v132[5];
              BYTE1(v188) = v132[6];
              v133 = v132[7];
              goto LABEL_264;
            }
            if ( v130 == -98 && *(_QWORD *)(v7 + 3376) == 0xFFFFFFFFLL )
            {
              v132 = *(_BYTE **)(v188 + 184);
              v131 = (_DWORD *)(v7 + 868);
              goto LABEL_263;
            }
          }
        }
LABEL_274:
        if ( (*(_BYTE *)(v7 + 128) & 2) == 0
          || !v193
          || v129
          || *v193 != 0x95
          || v193[1]
          || !*(_DWORD *)(v7 + 868)
          || FeatureServicingScsiPassthroughRobustness && (*(_DWORD *)(v7 + 3396) & 1) != 0 )
        {
          goto LABEL_315;
        }
        v135 = *(_BYTE *)(v6 + 2) == 40 ? *(_QWORD *)(v6 + 64) : *(_QWORD *)(v6 + 24);
        if ( !v135 || !MmIsAddressValid(*(PVOID *)(v127 + 184)) )
          goto LABEL_315;
        v136 = *(_BYTE **)(v127 + 184);
        HIBYTE(v194) = v136[72];
        BYTE6(v194) = v136[73];
        BYTE5(v194) = v136[74];
        BYTE4(v194) = v136[75];
        BYTE3(v194) = v136[76];
        BYTE2(v194) = v136[77];
        BYTE1(v194) = v136[78];
        v137 = v136[79];
        v138 = *(_QWORD *)(v7 + 3328);
        LOBYTE(v194) = v137;
        v139 = v137;
        v140 = v194 * *(unsigned int *)(v7 + 868);
        if ( v138 != v140 )
        {
          *(_QWORD *)(v7 + 3328) = v140;
          v138 = v140;
        }
        if ( v138 )
        {
          if ( *(_QWORD *)(v7 + 3352) )
            goto LABEL_315;
          ZoneCountFromUnit = (unsigned int)GetZoneCountFromUnit(v7);
          v148 = RaidAllocatePool(64LL, ZoneCountFromUnit, 1381654866LL, *(_QWORD *)(v7 + 8));
          *(_QWORD *)(v7 + 3352) = v148;
          if ( v148 )
          {
            v149 = (ULONG *)RaidAllocatePool(
                              64LL,
                              ((_DWORD)ZoneCountFromUnit + 3) & 0xFFFFFFFC,
                              1381654866LL,
                              *(_QWORD *)(v7 + 8));
            if ( v149 )
            {
              RtlInitializeBitMap((PRTL_BITMAP)(v7 + 3360), v149, ZoneCountFromUnit);
              RtlClearAllBits((PRTL_BITMAP)(v7 + 3360));
              if ( FeatureServicingScsiPassthroughRobustness )
                *(_DWORD *)(v7 + 3396) |= 1u;
              goto LABEL_315;
            }
          }
          v150 = *(void **)(v7 + 3352);
          if ( v150 )
          {
            ExFreePoolWithTag(v150, 0x525A6152u);
            *(_QWORD *)(v7 + 3352) = 0LL;
          }
          *(_BYTE *)(v7 + 451) |= 1u;
        }
        else
        {
          v141 = *(_QWORD *)(v7 + 152);
          v142 = *(_DWORD *)(v7 + 96);
          v143 = 0LL;
          if ( v141 )
          {
            v143 = (const int *)(v141 + 90);
          }
          else
          {
            v144 = *(_QWORD *)(v7 + 144);
            if ( v144 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 568LL) + 184LL) & 0x40) != 0 )
              v143 = (const int *)(v144 + 41);
          }
          if ( FeatureServicingScsiPassthroughRobustness )
          {
            if ( (byte_1C0092A04 & 4) != 0 )
            {
              v145 = &dword_1C0081784;
              if ( v143 )
                v145 = v143;
              McTemplateK0zqjuuussssxx_EtwWriteTransfer(
                v142 >> 8,
                *(_QWORD *)(v7 + 24) + 5000,
                v7 + 186,
                *(_QWORD *)(*(_QWORD *)(v7 + 24) + 4656LL),
                *(_DWORD *)(*(_QWORD *)(v7 + 24) + 56LL),
                *(_QWORD *)(v7 + 24) + 5000LL,
                v142,
                SBYTE1(v142),
                SBYTE2(v142),
                v7 + 160,
                v7 + 169,
                v7 + 186,
                (__int64)v145,
                0,
                v139);
            }
          }
          else
          {
            if ( (byte_1C0092A04 & 4) == 0 )
              goto LABEL_315;
            v146 = &dword_1C0081784;
            if ( v143 )
              v146 = v143;
            McTemplateK0zqjuuussssxx_EtwWriteTransfer(
              BYTE1(v142),
              v7 + 169,
              v7 + 160,
              *(_QWORD *)(*(_QWORD *)(v7 + 24) + 4656LL),
              *(_DWORD *)(*(_QWORD *)(v7 + 24) + 56LL),
              *(_QWORD *)(v7 + 24) + 5000LL,
              v142,
              SBYTE1(v142),
              SBYTE2(v142),
              v7 + 160,
              v7 + 169,
              v7 + 186,
              (__int64)v146,
              0,
              0);
          }
          if ( !FeatureServicingScsiPassthroughRobustness )
          {
LABEL_315:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
            {
              v151 = Irp;
            }
            else
            {
              v151 = Irp;
              if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                WPP_SF_qqD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  23LL,
                  &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
                  v7,
                  Irp,
                  Irp->IoStatus.Status);
            }
            if ( (qword_1C0092468 & 0x10) != 0 )
              RaidLogRequestComplete(*(_QWORD *)(v7 + 24), v151, v6);
            RaidCompleteRequestEx(v151);
            v125 = 1;
            goto LABEL_328;
          }
          *(_DWORD *)(v7 + 3396) |= 2u;
        }
        IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v7 + 8));
        goto LABEL_315;
      }
    }
    else
    {
      v127 = v188;
    }
    v129 = v186;
    goto LABEL_274;
  }
  if ( (*(_BYTE *)(v7 + 128) & 2) != 0 )
  {
    v152 = IsZonedWriteRequest(v7, 0LL, v188, 0LL);
    v153 = *(_QWORD *)(v7 + 24);
    if ( v152 )
    {
      ++*(_DWORD *)(v153 + 5576);
      ++*(_DWORD *)(v7 + 2204);
    }
    else
    {
      ++*(_DWORD *)(v153 + 5580);
    }
  }
  v125 = RaUnitAsyncError(v7, v188);
LABEL_328:
  if ( (v184 & 0x1C) == 0xC || !v125 )
    return;
  v154 = (unsigned __int8)StorRemoveIoGatewayItem(&v200, &v199);
  if ( v199 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v199 + 64) + 32LL) + 648LL))(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v199 + 64) + 32LL) + 640LL),
      v199 - 120,
      &v200,
      0LL);
  if ( v154 )
    RaidAdapterRestartQueues(*(_QWORD *)(v7 + 24), 0LL);
  v155 = 0;
  v206 = 0LL;
  v207 = 0;
  v156 = *(_QWORD *)(v7 + 24);
  v205 = 0LL;
  if ( v156 )
  {
    v157 = *(_QWORD *)(v7 + 504);
    if ( v157 )
    {
      if ( *(_QWORD *)(v156 + 4840) )
      {
        v158 = 0;
        memset(&v208, 0, sizeof(v208));
        if ( *(_DWORD *)(v157 + 8) )
        {
          do
          {
            v159 = (KSPIN_LOCK *)(v157 + ((v158 + 1LL) << 6));
            KeAcquireInStackQueuedSpinLock(v159 + 5, &v208);
            if ( (KSPIN_LOCK *)*v159 != v159 && *(_QWORD *)(*v159 + 40) < v82 )
              v82 = *(_QWORD *)(*v159 + 40);
            KeReleaseInStackQueuedSpinLock(&v208);
            ++v158;
          }
          while ( v158 < *(_DWORD *)(v157 + 8) );
        }
        v160 = 0LL;
        if ( v82 != -1LL )
          v160 = v82;
        if ( v160 )
          v155 = KeQueryUnbiasedInterruptTime() - v160 > *(_QWORD *)(*(_QWORD *)(v7 + 24) + 4840LL);
      }
    }
  }
  v161 = 0LL;
  v162 = KfRaiseIrql(2u);
  v163 = *(_QWORD *)(v7 + 744);
  v164 = 0;
  v165 = 0;
  v185 = v162;
  v183 = 0;
  if ( (v163 & 1) != 0 )
    goto LABEL_373;
  while ( 1 )
  {
    v166 = v163;
    if ( (unsigned int)(v163 / 0x100000000LL) )
      break;
    v163 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 744), v163 - 2, v163);
    if ( v166 == v163 )
      goto LABEL_368;
LABEL_365:
    if ( (v163 & 1) != 0 )
      goto LABEL_369;
  }
  if ( v155 )
    goto LABEL_369;
  if ( ExQueryDepthSList((PSLIST_HEADER)(v7 + 768)) )
  {
    if ( !v165 && !v164 )
    {
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 736)) )
        goto LABEL_373;
      v164 = 1;
    }
  }
  else
  {
    if ( !v165 )
    {
      if ( v164 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 736));
        v164 = 0;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 728));
      v165 = 1;
      goto LABEL_364;
    }
    RiFlushDeviceLists((union _SLIST_HEADER *)(v7 + 656));
  }
  v167 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 768));
  if ( !v167 )
  {
    v161 = 0LL;
LABEL_364:
    v163 = *(_QWORD *)(v7 + 744);
    goto LABEL_365;
  }
  v161 = (char *)(&v167[-1].Next + 1);
  if ( v167 == (PSLIST_ENTRY)8 )
    goto LABEL_364;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 744), 0xFFFFFFFF00000000uLL);
  v161[20] &= 0xFCu;
LABEL_368:
  v183 = 1;
LABEL_369:
  v168 = (struct _EX_RUNDOWN_REF *)(v7 + 736);
  if ( v164 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 736));
  if ( v165 )
  {
    v169 = (volatile LONG *)(v7 + 728);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 728));
    goto LABEL_374;
  }
LABEL_373:
  v169 = (volatile LONG *)(v7 + 728);
  v168 = (struct _EX_RUNDOWN_REF *)(v7 + 736);
LABEL_374:
  if ( v183 )
  {
    KeLowerIrql(v185);
    v170 = v190;
    goto LABEL_418;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v169);
  v171 = *(_QWORD *)(v7 + 744);
  v172 = 0;
  if ( (v171 & 1) != 0 )
    goto LABEL_391;
  while ( 2 )
  {
    v173 = v171;
    if ( !(unsigned int)(v171 / 0x100000000LL) )
    {
      v171 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 744), v171 - 2, v171);
      if ( v173 == v171 )
        goto LABEL_390;
      goto LABEL_387;
    }
    if ( v155 )
      goto LABEL_391;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v7 + 768)) )
      RiFlushDeviceLists((union _SLIST_HEADER *)(v7 + 656));
    if ( !v161 )
    {
      v174 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 768));
      if ( !v174 || (v161 = (char *)(&v174[-1].Next + 1), v174 == (PSLIST_ENTRY)8) )
      {
        v171 = *(_QWORD *)(v7 + 744);
LABEL_387:
        if ( (v171 & 1) != 0 )
          goto LABEL_391;
        continue;
      }
    }
    break;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 744), 0xFFFFFFFF00000000uLL);
  v161[20] &= 0xFCu;
LABEL_390:
  v172 = 1;
LABEL_391:
  if ( v172 )
  {
    v170 = v190;
  }
  else
  {
    v175 = *(_QWORD *)(v7 + 744);
    if ( (v175 & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease(v168);
      ExRundownCompleted(v168);
      do
      {
        v176 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 744), v175 | 1, v175);
        v72 = v175 == v176;
        v175 = v176;
      }
      while ( !v72 && (v176 & 1) == 0 );
    }
    v170 = v190;
    if ( v190 )
      *(_BYTE *)(v7 + 694) = 0;
    v177 = *(_DWORD *)(v7 + 684);
    if ( v177 )
      *(_DWORD *)(v7 + 684) = v177 - 1;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 744), 0xFFFFFFFFFFFFFFFEuLL);
    if ( (((__int64)*(unsigned int *)(v7 + 744) >> 1) & 0x7FFFFFFF) == 0 && *(_DWORD *)(v7 + 696) )
      KeSetEvent((PRKEVENT)(v7 + 704), 0, 0);
    v178 = RiNormalizeDeviceQueue(v7 + 656, v155);
    v179 = *(_QWORD *)(v7 + 744);
    v161 = (char *)v178;
    if ( (v179 & 1) != 0
      && !*(_DWORD *)(v7 + 684)
      && !*(_DWORD *)(v7 + 672)
      && !*(_DWORD *)(v7 + 688)
      && !*(_BYTE *)(v7 + 693)
      && !*(_BYTE *)(v7 + 695)
      && !*(_BYTE *)(v7 + 692)
      && *(int *)(v7 + 680) <= 0
      && !*(_BYTE *)(v7 + 694) )
    {
      ExReInitializeRundownProtection(v168);
      do
      {
        v180 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 744), v179 ^ 1, v179);
        v72 = v179 == v180;
        v179 = v180;
      }
      while ( !v72 && (v180 & 1) != 0 );
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 728), v185);
LABEL_418:
  if ( v161 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( byte_1C0092A02 < 0 )
      {
        v209 = 0LL;
        IoGetActivityIdIrp(v161 - 120, &v209);
        if ( byte_1C0092A02 < 0 )
          McTemplateK0pquuqqd_EtwWriteTransfer(
            ((v161[22] & 6) != 0) + 1,
            *(__int64 *)(v7 + 744) >> 63,
            (unsigned int)&v209,
            v7 + 656,
            ((v161[22] & 6) != 0) + 1,
            5,
            0,
            *(_BYTE *)(v7 + 672) + *(_QWORD *)(v7 + 744) / 0x100000000LL,
            *(__int64 *)(v7 + 744) >> 1);
      }
    }
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(v7 + 664), v161, &v205) )
      (*(void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))(v7 + 648))(
        *(_QWORD *)(v7 + 640),
        v161 - 120,
        &v205,
        0LL);
  }
  if ( v170 )
  {
    for ( j = RaidNormalizeDeviceQueue(v7 + 656); j; j = RaidNormalizeDeviceQueue(v7 + 656) )
    {
      if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(v7 + 664), j, &v205) )
        (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v7 + 648))(
          *(_QWORD *)(v7 + 640),
          j - 120,
          &v205,
          0LL);
    }
  }
}
