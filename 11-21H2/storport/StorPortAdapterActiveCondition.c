/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C00063C0
 * Callers:
 *     <none>
 * Callees:
 *     StorSubmitIoGatewayItem @ 0x1C00062BC (StorSubmitIoGatewayItem.c)
 *     RaAllocateIoResource @ 0x1C0006CC8 (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RiGetEnqueueReason @ 0x1C000B654 (RiGetEnqueueReason.c)
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0022B9C (RaFreeIoResource.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022BC8 (RaMiniportIsFeatureSupported.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 *     StorResumeIoGateway @ 0x1C0059444 (StorResumeIoGateway.c)
 *     PortSrbGetLbaFromCdb @ 0x1C006890C (PortSrbGetLbaFromCdb.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // cl
  char IsFeatureSupported; // al
  __int64 v8; // rcx
  int *v9; // r10
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // r9d
  int *v13; // r10
  __int64 v14; // rcx
  int v15; // r9d
  int *v16; // r10
  char v17; // al
  __int64 v18; // rcx
  int *v19; // r10
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // r9d
  int *v23; // r10
  __int64 v24; // rcx
  int v25; // r9d
  int *v26; // r10
  __int64 v27; // rax
  void (__fastcall *v28)(__int64, __int64, __int128 *); // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // r9
  unsigned int v33; // r12d
  __int64 v34; // rbx
  char v35; // r14
  __int64 v36; // rax
  __int64 *v37; // rdi
  __int64 IoResource; // rsi
  _QWORD *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  __int64 *v46; // r14
  volatile LONG *v47; // r13
  volatile LONG *v48; // rdi
  KIRQL v49; // al
  __int64 v50; // rbx
  __int64 v51; // r9
  __int64 v52; // r12
  int v53; // r15d
  unsigned int v54; // edi
  unsigned int i; // r11d
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // r10
  __int64 v59; // r8
  int v60; // ecx
  int v61; // ecx
  unsigned __int64 v62; // rcx
  unsigned __int8 v63; // r14
  unsigned int v64; // edi
  unsigned int j; // r11d
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  __int64 v68; // r10
  __int64 v69; // r8
  int v70; // ecx
  int v71; // ecx
  unsigned __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 LbaFromCdb; // rax
  unsigned __int64 v75; // rax
  int v76; // eax
  KIRQL v77; // r11
  __int64 v78; // rcx
  _QWORD *v79; // rax
  int v80; // eax
  char v81; // al
  _QWORD *v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // r9
  KIRQL v86; // dl
  KIRQL v87; // [rsp+30h] [rbp-79h]
  int v88; // [rsp+34h] [rbp-75h]
  __int128 v89; // [rsp+38h] [rbp-71h] BYREF
  __int64 v90; // [rsp+48h] [rbp-61h]
  int v91; // [rsp+50h] [rbp-59h]
  __int64 *v92; // [rsp+58h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-49h] BYREF
  __int64 v94; // [rsp+78h] [rbp-31h]
  __int128 v95; // [rsp+80h] [rbp-29h] BYREF
  __int64 v96; // [rsp+90h] [rbp-19h]
  __int64 v97; // [rsp+98h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE v98; // [rsp+A0h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+5Fh]
  char v101; // [rsp+118h] [rbp+6Fh]
  KIRQL v102; // [rsp+128h] [rbp+7Fh]

  v101 = a2;
  v3 = a2;
  v4 = a1;
  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterActiveConditionStart,
      a3,
      **(_QWORD **)(a1 + 4832),
      *(_DWORD *)(a1 + 56),
      a2);
  v5 = 0LL;
  *(_DWORD *)(*(_QWORD *)(v4 + 4832) + 20LL) |= 1u;
  v6 = *(_BYTE *)(v4 + 584);
  if ( (v6 & 0x10) != 0 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 612) = 0LL;
  *(_QWORD *)(v4 + 620) = 0LL;
  *(_QWORD *)(v4 + 628) = 0LL;
  *(_DWORD *)(v4 + 608) = 19;
  IsFeatureSupported = RaMiniportIsFeatureSupported(v4 + 336, 2LL);
  v10 = *v9;
  if ( IsFeatureSupported )
    v10 = 20;
  *v9 = v10;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v8, 3LL) )
    v12 = 21;
  *v13 = v12;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v11, 5LL) )
    v15 = 22;
  *v16 = v15;
  if ( (int)RaCallMiniportAdapterControl(v14, 0LL, v16) >= 0 )
  {
    *(_BYTE *)(v4 + 584) |= 0x10u;
    v6 = *(_BYTE *)(v4 + 584);
    v5 = 0LL;
LABEL_13:
    if ( *(_BYTE *)(v4 + 620) )
    {
      if ( (v6 & 0x10) != 0 )
        goto LABEL_23;
      *(_QWORD *)(v4 + 612) = 0LL;
      *(_QWORD *)(v4 + 620) = 0LL;
      *(_QWORD *)(v4 + 628) = 0LL;
      *(_DWORD *)(v4 + 608) = 19;
      v17 = RaMiniportIsFeatureSupported(v4 + 336, 2LL);
      v20 = *v19;
      if ( v17 )
        v20 = 20;
      *v19 = v20;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v18, 3LL) )
        v22 = 21;
      *v23 = v22;
      if ( (unsigned __int8)RaMiniportIsFeatureSupported(v21, 5LL) )
        v25 = 22;
      *v26 = v25;
      if ( (int)RaCallMiniportAdapterControl(v24, 0LL, v26) >= 0 )
      {
        *(_BYTE *)(v4 + 584) |= 0x10u;
        if ( *(_BYTE *)(v4 + 620) )
        {
LABEL_23:
          v27 = *(_QWORD *)(v4 + 568);
          *(_WORD *)((char *)&v90 + 5) = 0;
          HIBYTE(v90) = 0;
          v89 = 0x1800000001uLL;
          LODWORD(v90) = v3;
          BYTE4(v90) = 1;
          v28 = *(void (__fastcall **)(__int64, __int64, __int128 *))(v27 + 120);
          if ( v28 )
            v28(*(_QWORD *)(v4 + 576) + 16LL, 8LL, &v89);
        }
      }
    }
  }
  LOBYTE(v5) = 1;
  v29 = StorResumeIoGateway(v4, v5);
  LODWORD(v30) = qword_1C00793A8;
  v31 = v29;
  if ( (qword_1C00793A8 & 0x200) != 0 )
  {
    v32 = *(unsigned int *)(v4 + 56);
    if ( *(_DWORD *)(v4 + 4804) )
    {
      if ( *(_QWORD *)(v4 + 4808) )
      {
        v30 = *(_QWORD *)(v4 + 4808)
            + 48LL
            * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v4 + 4800)) % *(_DWORD *)(v4 + 4804));
        *(_DWORD *)v30 = 7;
        *(_QWORD *)(v30 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v30 + 8) = retaddr;
        *(_QWORD *)(v30 + 16) = v29;
        *(_QWORD *)(v30 + 24) = v4;
        *(_QWORD *)(v30 + 32) = v32;
      }
    }
  }
  if ( !v29 )
  {
    v87 = KfRaiseIrql(2u);
    v33 = 0;
    memset(&v98, 0, sizeof(v98));
    if ( !*(_DWORD *)(v4 + 840) )
      goto LABEL_60;
    do
    {
      v95 = 0LL;
      v34 = *(_QWORD *)(v4 + 832) + 320LL * v33;
      v96 = 0LL;
      LODWORD(v97) = 0;
      while ( 1 )
      {
        v35 = 0;
        v36 = *(_QWORD *)(v34 + 48);
        v37 = 0LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( *(_DWORD *)(v36 + 868) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v34, &LockHandle);
          v35 = 1;
        }
        if ( !*(_DWORD *)(v34 + 24)
          || *(_DWORD *)(v34 + 40) == 1
          || *(_DWORD *)(*(_QWORD *)(v34 + 48) + 860LL)
          || (IoResource = RaAllocateIoResource(v34 + 64)) == 0
          && (*(_DWORD *)(v34 + 136) >= *(_DWORD *)(v34 + 144)
           || (RaAttemptHighWaterMarkIncrease((PVOID)v34), (IoResource = RaAllocateIoResource(v34 + 64)) == 0)) )
        {
          if ( v35 )
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          goto LABEL_59;
        }
        if ( !v35 )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v34, &LockHandle);
        if ( *(_DWORD *)(v34 + 24) && *(int *)(v34 + 40) <= 0 )
          break;
LABEL_53:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v37 )
          goto LABEL_56;
        v97 = IoResource + 848;
        v96 = IoResource + 48;
        *((_QWORD *)&v95 + 1) = IoResource + 1104;
        RaidZeroXrb(IoResource + 48, v45, *(unsigned int *)(IoResource + 792), *(_QWORD *)(IoResource + 808));
        (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *, _QWORD))(*(_QWORD *)(v37[8] + 32) + 648LL))(
          *(_QWORD *)(*(_QWORD *)(v37[8] + 32) + 640LL),
          v37 - 15,
          &v95,
          0LL);
      }
      if ( !*(_DWORD *)(*(_QWORD *)(v34 + 48) + 860LL) )
      {
        v37 = *(__int64 **)(v34 + 8);
        v39 = (_QWORD *)(v34 + 8);
        if ( v37[1] != v34 + 8 || (v40 = *v37, *(__int64 **)(*v37 + 8) != v37) )
LABEL_132:
          __fastfail(3u);
        *v39 = v40;
        *(_QWORD *)(v40 + 8) = v39;
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 192));
        v41 = *(_DWORD *)(v34 + 192);
        if ( v41 <= *(_DWORD *)(v34 + 36) )
          v41 = *(_DWORD *)(v34 + 36);
        --*(_DWORD *)(v34 + 24);
        *(_DWORD *)(v34 + 36) = v41;
        if ( (*((_BYTE *)v37 + 22) & 0x20) != 0 )
        {
          QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v37);
          v43 = *QosEntryForDeviceEntry;
          if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry )
            goto LABEL_132;
          v44 = (_QWORD *)QosEntryForDeviceEntry[1];
          if ( (_QWORD *)*v44 != QosEntryForDeviceEntry )
            goto LABEL_132;
          *v44 = v43;
          *(_QWORD *)(v43 + 8) = v44;
        }
        goto LABEL_53;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_56:
      RaFreeIoResource(v34 + 64, IoResource);
LABEL_59:
      ++v33;
    }
    while ( v33 < *(_DWORD *)(v4 + 840) );
LABEL_60:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &v98);
    v46 = (__int64 *)(v4 + 144);
    v47 = *(volatile LONG **)(v4 + 144);
    v92 = v46;
    while ( v47 != (volatile LONG *)v46 )
    {
      v102 = 0;
      v90 = 0LL;
      v89 = 0LL;
      v91 = 0;
      if ( KeGetCurrentIrql() == 2 )
      {
        v88 = 1;
      }
      else
      {
        v88 = 0;
        v102 = KfRaiseIrql(2u);
      }
      v48 = v47 + 168;
      v49 = ExAcquireSpinLockExclusive(v47 + 168);
      v50 = *((_QWORD *)v47 + 87);
      if ( (volatile LONG *)v50 == v47 + 174 && (v50 = *((_QWORD *)v47 + 85), (volatile LONG *)v50 == v47 + 170) || !v50 )
      {
        v86 = v49;
      }
      else
      {
        *(_BYTE *)(v50 + 22) &= ~0x10u;
        if ( (*(_BYTE *)(v50 + 22) & 0x40) != 0 )
        {
          v94 = *(_QWORD *)(v50 + 64);
          v51 = *(_QWORD *)(v94 + 8);
          if ( *(_BYTE *)(v51 + 2) != 40 )
          {
            v63 = *(_BYTE *)(v51 + 10);
            v52 = v51 + 72;
            goto LABEL_102;
          }
          v52 = 0LL;
          v53 = *(_DWORD *)(v51 + 20);
          if ( !v53 )
          {
            v54 = *(_DWORD *)(v51 + 56);
            for ( i = 0; i < v54; ++i )
            {
              v56 = *(unsigned int *)(v51 + 4LL * i + 120);
              if ( (unsigned int)v56 < 0x80 )
                continue;
              v57 = *(unsigned int *)(v51 + 16);
              if ( (unsigned int)v56 >= (unsigned int)v57 )
                continue;
              v58 = v51 + v56;
              v59 = (unsigned int)v56;
              v60 = *(_DWORD *)(v51 + v56) - 64;
              if ( v60 )
              {
                v61 = v60 - 1;
                if ( v61 )
                {
                  if ( v61 == 1 && v59 + 40 <= v57 )
                  {
                    v52 = v58 + 32;
                    if ( !*(_DWORD *)(v58 + 12) )
                      v52 = 0LL;
                    break;
                  }
                  continue;
                }
                v62 = v59 + 56;
              }
              else
              {
                v62 = v59 + 40;
              }
              if ( v62 <= v57 )
              {
                if ( *(_BYTE *)(v58 + 10) )
                  v52 = v58 + 24;
                break;
              }
            }
          }
          v63 = 0;
          if ( !v53 )
          {
            v64 = *(_DWORD *)(v51 + 56);
            for ( j = 0; j < v64; ++j )
            {
              v66 = *(unsigned int *)(v51 + 4LL * j + 120);
              if ( (unsigned int)v66 < 0x80 )
                continue;
              v67 = *(unsigned int *)(v51 + 16);
              if ( (unsigned int)v66 >= (unsigned int)v67 )
                continue;
              v68 = v51 + v66;
              v69 = (unsigned int)v66;
              v70 = *(_DWORD *)(v51 + v66) - 64;
              if ( v70 )
              {
                v71 = v70 - 1;
                if ( v71 )
                {
                  if ( v71 == 1 && v69 + 40 <= v67 )
                    break;
                  continue;
                }
                v72 = v69 + 56;
              }
              else
              {
                v72 = v69 + 40;
              }
              if ( v72 <= v67 )
              {
                v63 = *(_BYTE *)(v68 + 10);
                break;
              }
            }
          }
LABEL_102:
          v73 = *(_QWORD *)(*(_QWORD *)(v94 + 40) + 64LL);
          LbaFromCdb = PortSrbGetLbaFromCdb(v52, v63);
          if ( FeatureServicingSMRCapacityEnabled )
            LODWORD(v75) = GetZoneIndexFromUnitAndLba(v73, LbaFromCdb);
          else
            v75 = LbaFromCdb * (unsigned __int64)*(unsigned int *)(v73 + 812) / *(_QWORD *)(v73 + 3280);
          v76 = RtlInterlockedSetClearRun(v73 + 3312, (unsigned int)v75, 1LL);
          v48 = v47 + 168;
          v46 = v92;
          if ( v76 == 1 )
            *(_BYTE *)(v50 + 22) &= ~0x40u;
        }
        if ( !(unsigned int)RiGetEnqueueReason(v47 + 150, v50, 0LL) )
        {
          v78 = *(_QWORD *)v50;
          if ( *(_QWORD *)(*(_QWORD *)v50 + 8LL) != v50 )
            goto LABEL_132;
          v79 = *(_QWORD **)(v50 + 8);
          if ( *v79 != v50 )
            goto LABEL_132;
          *v79 = v78;
          *(_QWORD *)(v78 + 8) = v79;
          ++*((_DWORD *)v47 + 169);
          if ( (*(_BYTE *)(v50 + 22) & 6) != 0 )
            --*((_DWORD *)v47 + 155);
          else
            --*((_DWORD *)v47 + 154);
          if ( (*(_BYTE *)(v50 + 22) & 8) != 0 )
            --*((_DWORD *)v47 + 156);
          *(_BYTE *)(v50 + 20) = 0;
          v80 = *((_DWORD *)v47 + 169);
          if ( v80 > *((_DWORD *)v47 + 184) )
            *((_DWORD *)v47 + 184) = v80;
          v81 = *(_BYTE *)(v50 + 22);
          if ( (v81 & 1) != 0 )
          {
            *((_BYTE *)v47 + 638) = 1;
            v81 = *(_BYTE *)(v50 + 22);
          }
          if ( (v81 & 0x20) != 0 )
          {
            v82 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v50);
            v83 = *v82;
            if ( *(_QWORD **)(*v82 + 8LL) != v82 )
              goto LABEL_132;
            v84 = (_QWORD *)v82[1];
            if ( (_QWORD *)*v84 != v82 )
              goto LABEL_132;
            *v84 = v83;
            *(_QWORD *)(v83 + 8) = v84;
          }
          ExReleaseSpinLockExclusive(v48, v77);
          if ( !StorSubmitIoGatewayItem(*((_QWORD *)v47 + 76), v50, &v89) )
          {
            LOBYTE(v85) = 1;
            (*((void (__fastcall **)(_QWORD, __int64, __int128 *, __int64))v47 + 74))(
              *((_QWORD *)v47 + 73),
              v50 - 120,
              &v89,
              v85);
          }
          goto LABEL_128;
        }
        v86 = v77;
      }
      ExReleaseSpinLockExclusive(v48, v86);
LABEL_128:
      if ( !v88 )
        KeLowerIrql(v102);
      v47 = *(volatile LONG **)v47;
    }
    KeReleaseInStackQueuedSpinLock(&v98);
    KeLowerIrql(v87);
    v4 = a1;
    LOBYTE(v3) = v101;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v30,
        (unsigned int)&EventAdapterActiveConditionStop,
        v31,
        **(_QWORD **)(v4 + 4832),
        *(_DWORD *)(v4 + 56),
        v3);
  }
}
