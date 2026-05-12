/*
 * XREFs of RaidStartIoPacket @ 0x1C0009C70
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0009690 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0006CC8 (RaAllocateIoResource.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidInsertDeviceQueue @ 0x1C000ACB0 (RaidInsertDeviceQueue.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitRequestPowerUp @ 0x1C0017888 (RaUnitRequestPowerUp.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C003E304 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0040644 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidLogAllocationFailure @ 0x1C004EC94 (RaidLogAllocationFailure.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 *     PortSrbGetLbaFromCdb @ 0x1C006890C (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v4; // r15d
  IRP *v5; // rbx
  __int64 v7; // rsi
  char v8; // al
  char *v10; // r11
  unsigned int v11; // ebx
  unsigned int v12; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx
  char v20; // cl
  char v21; // al
  char v22; // al
  char v23; // r14
  signed __int32 v25; // r12d
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_SECURITY_CONTEXT *SecurityContext; // r9
  char v28; // r15
  unsigned int FullCreateOptions; // eax
  _IO_SECURITY_CONTEXT *v30; // r14
  unsigned int AccessState; // ebx
  unsigned int v32; // r11d
  __int64 v33; // rcx
  unsigned __int64 DesiredAccess; // rdx
  __int64 v35; // r10
  __int64 v36; // r8
  int v37; // ecx
  int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned int v40; // ebx
  unsigned __int8 v41; // al
  unsigned int v42; // r11d
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r10
  __int64 v46; // r8
  int v47; // ecx
  int v48; // ecx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  __int64 LbaFromCdb; // rax
  unsigned __int64 v53; // rbx
  int v54; // eax
  bool v55; // zf
  __int64 v56; // rax
  char v57; // al
  __int64 v58; // r14
  unsigned __int8 v59; // bl
  __int64 v60; // r13
  __int64 v61; // rcx
  __int64 v62; // r14
  unsigned __int8 v63; // bl
  __int64 v64; // r15
  __int64 v65; // rcx
  unsigned __int64 v66; // r15
  _DWORD *v67; // rbx
  __int64 v68; // r13
  _DWORD *Pool2; // rax
  _QWORD *v70; // r12
  ULONGLONG v71; // rax
  int Number; // r9d
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  char v75; // r13
  int v76; // r14d
  __int64 v77; // rax
  __int64 v78; // r12
  unsigned int v79; // r14d
  KSPIN_LOCK *v80; // rbx
  unsigned __int64 v81; // rbx
  __int64 v82; // r12
  char v83; // bl
  char inserted; // r14
  int v85; // eax
  char *v86; // r11
  unsigned int v87; // ebx
  unsigned int v88; // r10d
  __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // r8
  int v93; // ecx
  int v94; // ecx
  unsigned __int64 v95; // rcx
  char v96; // cl
  __int64 v97; // r13
  unsigned int v98; // ecx
  _QWORD *v99; // rsi
  __int64 v100; // r14
  __int64 v101; // rbx
  ULONG CurrentProcessorNumber; // eax
  unsigned int v103; // r8d
  unsigned int v104; // eax
  __int64 v105; // rbx
  int *v106; // r12
  int v107; // r9d
  PSLIST_ENTRY IoResource; // rcx
  _QWORD *v109; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v111; // rbx
  _QWORD *v112; // rcx
  unsigned int v113; // esi
  unsigned __int64 v114; // rcx
  char *v115; // rdx
  PSLIST_ENTRY v116; // rdi
  PSLIST_ENTRY v117; // rbx
  unsigned int v118; // r8d
  __int64 v119; // rax
  int v120; // r13d
  unsigned int v121; // r8d
  unsigned int v122; // r15d
  PSLIST_ENTRY v123; // rax
  _QWORD *v124; // rcx
  _QWORD *v125; // rax
  __int64 v126; // rbx
  _QWORD *v127; // rcx
  PSLIST_ENTRY v128; // rbx
  void *v129; // r9
  unsigned int v130; // edx
  _SLIST_ENTRY *Next; // rsi
  char v132; // al
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-69h] BYREF
  __int64 v134; // [rsp+48h] [rbp-61h]
  unsigned int v135; // [rsp+50h] [rbp-59h]
  int v136; // [rsp+54h] [rbp-55h]
  int v137; // [rsp+58h] [rbp-51h] BYREF
  int v138; // [rsp+5Ch] [rbp-4Dh] BYREF
  __int64 v139; // [rsp+60h] [rbp-49h]
  __int64 v140; // [rsp+68h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE v141; // [rsp+70h] [rbp-39h] BYREF
  __int128 v142; // [rsp+88h] [rbp-21h] BYREF
  PSLIST_ENTRY v143; // [rsp+98h] [rbp-11h]
  PSLIST_ENTRY v144; // [rsp+A0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-1h] BYREF
  KIRQL v146; // [rsp+110h] [rbp+67h]
  int v148; // [rsp+120h] [rbp+77h]
  char v149; // [rsp+128h] [rbp+7Fh]
  char v150; // [rsp+128h] [rbp+7Fh]

  v148 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  ProcNumber = 0;
  v143 = 0LL;
  v4 = a3;
  LODWORD(v144) = 0;
  v5 = (IRP *)a2;
  v142 = 0LL;
  v7 = *(_QWORD *)(v3 + 8);
  v135 = 0;
  v134 = v3;
  v139 = 0LL;
  v140 = 0LL;
  v138 = 0;
  v137 = 0;
  if ( !*(_BYTE *)(a1 + 3232) )
    goto LABEL_32;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 ? *(_DWORD *)(v7 + 20) : *(unsigned __int8 *)(v7 + 2) )
    goto LABEL_32;
  if ( v8 != 40 )
  {
    v10 = (char *)(v7 + 72);
    goto LABEL_26;
  }
  v10 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v11 = *(_DWORD *)(v7 + 56);
    v12 = 0;
    if ( !v11 )
    {
LABEL_17:
      v5 = (IRP *)a2;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v13 = *(unsigned int *)(v7 + 4LL * v12 + 120);
      if ( (unsigned int)v13 < 0x80 )
        goto LABEL_21;
      v14 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v13 >= (unsigned int)v14 )
        goto LABEL_21;
      v15 = v13 + v7;
      v16 = (unsigned int)v13;
      v17 = *(_DWORD *)(v13 + v7) - 64;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 && v16 + 40 <= v14 )
          {
            v10 = (char *)(v15 + 32);
            if ( !*(_DWORD *)(v15 + 12) )
              v10 = 0LL;
            goto LABEL_17;
          }
          goto LABEL_21;
        }
        v19 = v16 + 56;
      }
      else
      {
        v19 = v16 + 40;
      }
      if ( v19 <= v14 )
      {
        v5 = (IRP *)a2;
        if ( *(_BYTE *)(v15 + 10) )
          v10 = (char *)(v15 + 24);
        break;
      }
LABEL_21:
      if ( ++v12 >= v11 )
      {
        v5 = (IRP *)a2;
        break;
      }
    }
  }
LABEL_26:
  if ( v10 && ((v20 = *v10, ((*v10 - 8) & 0x5D) == 0) || v20 == 37 || v20 == -98 || (unsigned __int8)(v20 - 94) <= 1u) )
    v149 = 1;
  else
LABEL_32:
    v149 = 0;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v136 = *(_DWORD *)(v7 + 24);
  else
    v136 = *(_DWORD *)(v7 + 12);
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    RaUnitReleaseRemoveLock(a1);
    v21 = *(_BYTE *)(v7 + 3);
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      v22 = ((v21 >> 7) & 0x80) + 56;
    }
    else
    {
      v23 = 56;
      if ( v21 < 0 )
        v23 = -72;
      v22 = v23;
    }
    *(_BYTE *)(v7 + 3) = v22;
    RaidCompleteRequestEx(v5, 0, 0xC000050A);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2104));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v7 + 96) = ProcNumber;
    v139 = v7;
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 40) )
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 56);
    *(struct _PROCESSOR_NUMBER *)(v7 + 56) = ProcNumber;
  }
  v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 784), 0, 0);
  if ( (*(_BYTE *)(a1 + 128) & 2) == 0 )
    goto LABEL_106;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction != 15 )
    goto LABEL_106;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v28 = BYTE2(SecurityContext->SecurityQos);
  if ( v28 == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  else
    FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  if ( !FullCreateOptions )
  {
    if ( v28 == 40 )
    {
      v30 = 0LL;
      if ( SecurityContext->FullCreateOptions )
        goto LABEL_82;
      AccessState = (unsigned int)SecurityContext[2].AccessState;
      v32 = 0;
      if ( !AccessState )
        goto LABEL_74;
      while ( 1 )
      {
        v33 = *((unsigned int *)&SecurityContext[5].SecurityQos + v32);
        if ( (unsigned int)v33 < 0x80 )
          goto LABEL_70;
        DesiredAccess = SecurityContext->DesiredAccess;
        if ( (unsigned int)v33 >= (unsigned int)DesiredAccess )
          goto LABEL_70;
        v35 = (__int64)SecurityContext + v33;
        v36 = (unsigned int)v33;
        v37 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v33) - 64;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 == 1 && v36 + 40 <= DesiredAccess )
            {
              v30 = (_IO_SECURITY_CONTEXT *)(v35 + 32);
              if ( !*(_DWORD *)(v35 + 12) )
                v30 = 0LL;
              goto LABEL_74;
            }
            goto LABEL_70;
          }
          v39 = v36 + 56;
        }
        else
        {
          v39 = v36 + 40;
        }
        if ( v39 <= DesiredAccess )
        {
          if ( *(_BYTE *)(v35 + 10) )
            v30 = (_IO_SECURITY_CONTEXT *)(v35 + 24);
LABEL_74:
          if ( !SecurityContext->FullCreateOptions )
          {
            v40 = (unsigned int)SecurityContext[2].AccessState;
            v41 = 0;
            v42 = 0;
            if ( !v40 )
              goto LABEL_90;
            while ( 2 )
            {
              v43 = *((unsigned int *)&SecurityContext[5].SecurityQos + v42);
              if ( (unsigned int)v43 >= 0x80 )
              {
                v44 = SecurityContext->DesiredAccess;
                if ( (unsigned int)v43 < (unsigned int)v44 )
                {
                  v45 = (__int64)SecurityContext + v43;
                  v46 = (unsigned int)v43;
                  v47 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v43) - 64;
                  if ( v47 )
                  {
                    v48 = v47 - 1;
                    if ( v48 )
                    {
                      if ( v48 == 1 && v46 + 40 <= v44 )
                        break;
                      goto LABEL_86;
                    }
                    v49 = v46 + 56;
                  }
                  else
                  {
                    v49 = v46 + 40;
                  }
                  if ( v49 <= v44 )
                  {
                    v41 = *(_BYTE *)(v45 + 10);
                    goto LABEL_90;
                  }
                }
              }
LABEL_86:
              ++v42;
              v41 = 0;
              if ( v42 >= v40 )
                goto LABEL_90;
              continue;
            }
          }
LABEL_82:
          v41 = 0;
          goto LABEL_90;
        }
LABEL_70:
        if ( ++v32 >= AccessState )
          goto LABEL_74;
      }
    }
    v41 = BYTE2(SecurityContext->AccessState);
    v30 = SecurityContext + 3;
LABEL_90:
    v50 = v41;
    if ( v30 && ((LOBYTE(v30->SecurityQos) - 10) & 0x5F) == 0 && *(_DWORD *)(a1 + 812) )
    {
      v51 = v28 == 40 ? LODWORD(SecurityContext[1].SecurityQos) : HIDWORD(SecurityContext->AccessState);
      if ( (v51 & 0x1000) != 0 && *(_QWORD *)(a1 + 3304) )
      {
        LbaFromCdb = PortSrbGetLbaFromCdb(v30, v50);
        if ( FeatureServicingSMRCapacityEnabled )
          LODWORD(v53) = GetZoneIndexFromUnitAndLba(a1, LbaFromCdb);
        else
          v53 = LbaFromCdb * (unsigned __int64)*(unsigned int *)(a1 + 812) / *(_QWORD *)(a1 + 3280);
        if ( (unsigned __int8)RaidUpdateZoneIoReceiveWithStatus(a1 + 656, a2) || v25 )
        {
          v3 = v134;
          v4 = v148 | 0x20;
          v148 |= 0x20u;
          goto LABEL_106;
        }
        RtlInterlockedSetBitRun(a1 + 3312, (unsigned int)v53, 1LL);
      }
    }
    v3 = v134;
  }
  v4 = v148;
LABEL_106:
  v54 = *(unsigned __int8 *)(v7 + 2);
  if ( (_BYTE)v54 == 40 )
    v54 = *(_DWORD *)(v7 + 20);
  switch ( v54 )
  {
    case 0:
    case 2:
    case 7:
    case 9:
    case 18:
    case 19:
    case 23:
    case 32:
    case 36:
    case 37:
      goto LABEL_114;
    case 8:
      v55 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 427LL) == 0;
      goto LABEL_113;
    case 16:
      v56 = *(_QWORD *)(a1 + 24);
      if ( !v56 )
        goto LABEL_115;
      v55 = (*(_BYTE *)(v56 + 564) & 0x10) == 0;
LABEL_113:
      if ( v55 )
        goto LABEL_115;
LABEL_114:
      if ( (v136 & 0x100800) == 0 )
        goto LABEL_117;
LABEL_115:
      *(_QWORD *)(v3 + 16) = 0LL;
      v148 = v4 | 8;
      if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
      {
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
      }
      else if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4832LL) )
      {
LABEL_117:
        if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 448) < 0 || (v57 = *(_BYTE *)(a1 + 449), (v57 & 1) != 0) )
        {
          v62 = *(_QWORD *)(a1 + 24);
          v63 = 0;
          v64 = *(_QWORD *)(a2 + 184);
          if ( *(_QWORD *)(v62 + 4832) )
          {
            if ( (*(_BYTE *)(v62 + 108) & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v62 + 5152));
              if ( (*(_BYTE *)(v62 + 108) & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(v62 + 5160));
            }
            PoFxActivateComponent(**(_QWORD **)(v62 + 4832));
            v63 = 2;
          }
          if ( *(char *)(a1 + 449) < 0
            && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736)) )
          {
            if ( (*(_BYTE *)(v62 + 108) & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
              if ( (*(_BYTE *)(v62 + 108) & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
            }
            v65 = *(_QWORD *)(a1 + 1744);
            if ( (*(_DWORD *)(v65 + 148) & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v65 + 144));
              v65 = *(_QWORD *)(a1 + 1744);
            }
            PoFxActivateComponent(*(_QWORD *)v65);
            v63 |= 1u;
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
          }
          *(_QWORD *)(v64 + 16) = v63;
        }
        else
        {
          v58 = *(_QWORD *)(a1 + 24);
          v59 = 0;
          v60 = *(_QWORD *)(a2 + 184);
          if ( *(_QWORD *)(v58 + 4832) )
          {
            if ( (*(_BYTE *)(v58 + 108) & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v58 + 5152));
              if ( (*(_BYTE *)(v58 + 108) & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(v58 + 5160));
            }
            PoFxActivateComponent(**(_QWORD **)(v58 + 4832));
            v57 = *(_BYTE *)(a1 + 449);
            v59 = 2;
          }
          if ( v57 < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736)) )
          {
            if ( (*(_BYTE *)(v58 + 108) & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
              if ( (*(_BYTE *)(v58 + 108) & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
            }
            v61 = *(_QWORD *)(a1 + 1744);
            if ( (*(_DWORD *)(v61 + 148) & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v61 + 144));
              v61 = *(_QWORD *)(a1 + 1744);
            }
            PoFxActivateComponent(*(_QWORD *)v61);
            v59 |= 1u;
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
          }
          *(_QWORD *)(v60 + 16) = v59;
        }
      }
      v66 = -1LL;
      if ( v149 )
      {
        v67 = 0LL;
        if ( *(_DWORD *)(a1 + 3256) != -1 || *(_DWORD *)(a1 + 3240) != -1 || *(_DWORD *)(a1 + 3244) )
        {
          v68 = *(_QWORD *)(a1 + 8);
          Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1413701970LL);
          v70 = Pool2;
          v67 = Pool2;
          if ( Pool2 || !v68 )
          {
            if ( Pool2 )
            {
              *Pool2 = 300819165;
              if ( *(_DWORD *)(a1 + 3256) == -1 )
                v71 = -1LL;
              else
                v71 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 3256)) + KeQueryUnbiasedInterruptTime();
              v70[1] = v71;
              v148 |= 0x10u;
              v70[5] = a2;
              v70[6] = a1;
            }
          }
          else
          {
            RaidLogAllocationFailure(v68, 64LL, 56LL, 1413701970LL);
          }
        }
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          v139 = v7;
          if ( v67 )
          {
            *((_QWORD *)v67 + 2) = *(_QWORD *)(v7 + 96);
            *(_QWORD *)(v7 + 96) = v67;
          }
          *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 3248);
        }
        else
        {
          if ( v67 )
          {
            *((_QWORD *)v67 + 2) = *(_QWORD *)(v7 + 48);
            *(_QWORD *)(v7 + 48) = v67;
          }
          *(_DWORD *)(v7 + 20) = *(_DWORD *)(a1 + 3248);
        }
      }
      v146 = KfRaiseIrql(2u);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4532LL) & 1) == 0
        || ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
        || (Number = ProcNumber.Number,
            (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group))
        || (v73 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
            *(_DWORD *)((char *)g_RaidPerProcessorState + v73 + 80)) )
      {
        v150 = 0;
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v73 + 80), 2);
        v150 = 1;
      }
      v74 = v134;
      v75 = 0;
      v76 = a2;
      *(_BYTE *)(a2 + 141) = -87;
      *(_QWORD *)(v74 + 32) = a1;
      v77 = *(_QWORD *)(a1 + 24);
      if ( v77 )
      {
        v78 = *(_QWORD *)(a1 + 504);
        if ( v78 )
        {
          if ( *(_QWORD *)(v77 + 4776) )
          {
            v79 = 0;
            memset(&LockHandle, 0, sizeof(LockHandle));
            if ( *(_DWORD *)(v78 + 8) )
            {
              do
              {
                v80 = (KSPIN_LOCK *)(v78 + ((v79 + 1LL) << 6));
                KeAcquireInStackQueuedSpinLock(v80 + 5, &LockHandle);
                if ( (KSPIN_LOCK *)*v80 != v80 && *(_QWORD *)(*v80 + 40) < v66 )
                  v66 = *(_QWORD *)(*v80 + 40);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                ++v79;
              }
              while ( v79 < *(_DWORD *)(v78 + 8) );
            }
            v81 = 0LL;
            if ( v66 != -1LL )
              v81 = v66;
            if ( v81 )
              v75 = KeQueryUnbiasedInterruptTime() - v81 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4776LL);
            v76 = a2;
          }
        }
      }
      if ( *(_BYTE *)(v7 + 2) == 40 )
      {
        v82 = v7;
        *(_DWORD *)(v7 + 4) = 0;
        *(_DWORD *)(v7 + 28) = 0;
      }
      else
      {
        v82 = v139;
      }
      v83 = v148;
      inserted = RaidInsertDeviceQueue(
                   (int)a1 + 656,
                   v76,
                   v148,
                   Number,
                   v75,
                   (__int64)&v140,
                   (__int64)&v138,
                   (__int64)&v137);
      if ( !inserted )
        goto LABEL_229;
      if ( v75 )
        ++*(_QWORD *)(a1 + 1968);
      if ( *(_BYTE *)(v7 + 2) != 40 )
        goto LABEL_221;
      v85 = HIDWORD(v140);
      *(_DWORD *)(v82 + 4) = v140;
      *(_DWORD *)(v82 + 28) = v85;
      if ( !*(_DWORD *)(a1 + 2244) )
        goto LABEL_221;
      if ( *(_BYTE *)(v82 + 2) != 40 )
      {
        v86 = (char *)(v82 + 72);
        goto LABEL_214;
      }
      v86 = 0LL;
      if ( *(_DWORD *)(v82 + 20) )
        goto LABEL_214;
      v87 = *(_DWORD *)(v82 + 56);
      v88 = 0;
      if ( !v87 )
      {
LABEL_210:
        v83 = v148;
        goto LABEL_214;
      }
      break;
    default:
      goto LABEL_115;
  }
  while ( 1 )
  {
    v89 = *(unsigned int *)(v82 + 4LL * v88 + 120);
    if ( (unsigned int)v89 < 0x80 )
      goto LABEL_209;
    v90 = *(unsigned int *)(v82 + 16);
    if ( (unsigned int)v89 >= (unsigned int)v90 )
      goto LABEL_209;
    v91 = v89 + v82;
    v92 = (unsigned int)v89;
    v93 = *(_DWORD *)(v89 + v82) - 64;
    if ( !v93 )
      break;
    v94 = v93 - 1;
    if ( !v94 )
    {
      v95 = v92 + 56;
      goto LABEL_208;
    }
    if ( v94 == 1 && v92 + 40 <= v90 )
    {
      v83 = v148;
      if ( *(_DWORD *)(v91 + 12) )
        v86 = (char *)(v91 + 32);
      goto LABEL_214;
    }
LABEL_209:
    if ( ++v88 >= v87 )
      goto LABEL_210;
  }
  v95 = v92 + 40;
LABEL_208:
  if ( v95 > v90 )
    goto LABEL_209;
  v83 = v148;
  if ( *(_BYTE *)(v91 + 10) )
    v86 = (char *)(v91 + 24);
LABEL_214:
  if ( v86 )
  {
    v96 = *v86;
    if ( !*(_DWORD *)(v82 + 20) && (((v96 - 8) & 0x5D) == 0 || v96 == 66 || v96 == 53 || v96 == -111) )
      *(_DWORD *)(v82 + 48) = v137;
  }
LABEL_221:
  switch ( v138 )
  {
    case 1:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2200));
      break;
    case 4:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2208));
      break;
    case 5:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2216));
      break;
    case 6:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2224));
      break;
  }
LABEL_229:
  if ( (v83 & 8) == 0 && *(_BYTE *)(a1 + 695) && *(char *)(a1 + 449) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( inserted )
    goto LABEL_251;
  v97 = a2;
  memset(&v141, 0, sizeof(v141));
  v98 = 0;
  *(_BYTE *)(a2 + 141) = -88;
  v99 = (_QWORD *)(a2 + 120);
  v100 = *(_QWORD *)(a1 + 664);
  if ( *(_DWORD *)(*(_QWORD *)(v100 + 48) + 840LL) > 1u )
  {
    v101 = *(_QWORD *)(v100 + 48);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    v103 = *(_DWORD *)(v101 + 840);
    v104 = CurrentProcessorNumber / *(_DWORD *)(v101 + 848);
    v98 = v104;
    if ( v104 >= v103 )
      v98 = v104 % v103;
  }
  v105 = v100 + 320LL * v98;
  if ( v105 && *(_DWORD *)(*(_QWORD *)(v105 + 48) + 860LL) )
  {
    v106 = (int *)(v105 + 40);
LABEL_241:
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v105, &v141);
    if ( !*(_DWORD *)(*(_QWORD *)(v105 + 48) + 860LL) && *v106 <= 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
      goto LABEL_244;
    }
    v109 = *(_QWORD **)(v105 + 16);
    if ( *v109 == v105 + 8 )
    {
      *v99 = v105 + 8;
      *(_QWORD *)(a2 + 128) = v109;
      *v109 = v99;
      *(_QWORD *)(v105 + 16) = v99;
      ++*(_DWORD *)(v105 + 24);
      if ( (*(_BYTE *)(a2 + 142) & 0x20) == 0 )
        goto LABEL_250;
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
      v111 = v105 + 264;
      v112 = *(_QWORD **)(v111 + 8);
      if ( *v112 == v111 )
      {
        *QosEntryForDeviceEntry = v111;
        QosEntryForDeviceEntry[1] = v112;
        *v112 = QosEntryForDeviceEntry;
        *(_QWORD *)(v111 + 8) = QosEntryForDeviceEntry;
        goto LABEL_250;
      }
    }
LABEL_277:
    __fastfail(3u);
  }
  v106 = (int *)(v105 + 40);
  if ( *(int *)(v105 + 40) > 0 )
    goto LABEL_241;
LABEL_244:
  v107 = *(_DWORD *)(v105 + 128);
  if ( v107 )
  {
    v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 152) + 64LL) + 848LL);
    v119 = v107 * (HIDWORD(KeGetPcr()[1].LockArray) % v118) / v118;
    v120 = v119;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v105 + 64) + 8 * v119));
    if ( !IoResource )
    {
      v121 = *(_DWORD *)(v105 + 128);
      v122 = 1;
      if ( v121 <= 1 )
      {
LABEL_268:
        v97 = a2;
        goto LABEL_269;
      }
      while ( !IoResource )
      {
        v123 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v105 + 64) + 8LL * ((v122 + v120) % v121)));
        v121 = *(_DWORD *)(v105 + 128);
        ++v122;
        IoResource = v123;
        if ( v122 >= v121 )
        {
          if ( !v123 )
            goto LABEL_268;
          break;
        }
      }
    }
    LODWORD(IoResource->Next) = v120;
    goto LABEL_268;
  }
  IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v105 + 64));
LABEL_269:
  if ( IoResource
    || *(_DWORD *)(v105 + 136) < *(_DWORD *)(v105 + 144)
    && (RaAttemptHighWaterMarkIncrease((PVOID)v105), (IoResource = RaAllocateIoResource(v105 + 64)) != 0LL) )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v105 + 192)) >= *(_DWORD *)(v105 + 36) )
      *(_DWORD *)(v105 + 36) = *(_DWORD *)(v105 + 192);
    v128 = IoResource + 3;
    v143 = IoResource + 3;
    v144 = IoResource + 53;
    *((_QWORD *)&v142 + 1) = IoResource + 69;
    v129 = (void *)*((_QWORD *)&IoResource[50].Next + 1);
    v130 = *((_DWORD *)&IoResource[49].Next + 2);
    LOBYTE(IoResource[4].Next) &= 0x9Cu;
    Next = IoResource[52].Next;
    WORD1(IoResource[4].Next) = -1;
    v132 = (char)IoResource[4].Next;
    LODWORD(IoResource[3].Next) = 523124044;
    *((_QWORD *)&IoResource[3].Next + 1) = 0LL;
    BYTE4(IoResource[4].Next) = -1;
    *((_DWORD *)&IoResource[4].Next + 2) = 0;
    *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
    IoResource[10].Next = 0LL;
    *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[12].Next + 1) = 0LL;
    IoResource[12].Next = 0LL;
    IoResource[15].Next = 0LL;
    IoResource[13].Next = 0LL;
    *((_QWORD *)&IoResource[13].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[16].Next + 1) = 0LL;
    IoResource[17].Next = 0LL;
    *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[46].Next + 1) = 0LL;
    IoResource[47].Next = 0LL;
    *((_QWORD *)&IoResource[47].Next + 1) = 0LL;
    IoResource[48].Next = 0LL;
    *((_DWORD *)&IoResource[49].Next + 2) = v130;
    *((_QWORD *)&IoResource[50].Next + 1) = v129;
    if ( v129 )
    {
      memset(v129, 0, v130);
      v132 = (char)v128[1].Next;
    }
    BYTE1(v128[1].Next) &= 0xF0u;
    v128[48].Next = 0LL;
    LOBYTE(v128[1].Next) = v132 & 0x7F;
    *((_DWORD *)&v128[46].Next + 3) = 0;
    *((_DWORD *)&v128[48].Next + 2) = 0;
    v128[49].Next = Next;
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 648))(*(_QWORD *)(a1 + 640), v97, &v142, 0LL);
    v113 = 1;
  }
  else
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v105, &v141);
    v124 = *(_QWORD **)(v105 + 16);
    if ( *v124 != v105 + 8 )
      goto LABEL_277;
    *v99 = v105 + 8;
    *(_QWORD *)(a2 + 128) = v124;
    *v124 = v99;
    *(_QWORD *)(v105 + 16) = v99;
    ++*(_DWORD *)(v105 + 24);
    *v106 = 1;
    if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
    {
      v125 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v99);
      v126 = v105 + 264;
      v127 = *(_QWORD **)(v126 + 8);
      if ( *v127 != v126 )
        goto LABEL_277;
      *v125 = v126;
      v125[1] = v127;
      *v127 = v125;
      *(_QWORD *)(v126 + 8) = v125;
    }
LABEL_250:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
LABEL_251:
    v113 = v135;
  }
  if ( v150 == 1
    && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4532LL) & 1) != 0
    && ProcNumber.Group < (unsigned int)g_RaidPerfRedirectGroupCount
    && (unsigned int)ProcNumber.Number < *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group) )
  {
    v114 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
    v115 = (char *)g_RaidPerProcessorState + 64;
    _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v114 + 80), 1);
    v116 = ExpInterlockedFlushSList((PSLIST_HEADER)&v115[v114]);
    while ( v116 )
    {
      v55 = (BYTE1(v116[-1].Next) & 1) == 0;
      v117 = v116 - 2;
      v116 = v116->Next;
      if ( !v55 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v117[13].Next + 1), *((unsigned int *)&v117[46].Next + 3));
        BYTE1(v117[1].Next) &= ~1u;
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v117[41].Next)(v117);
    }
    _InterlockedExchange(
      (volatile __int32 *)g_RaidPerProcessorState
    + 32 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
    + 20,
      0);
  }
  KeLowerIrql(v146);
  return v113;
}
