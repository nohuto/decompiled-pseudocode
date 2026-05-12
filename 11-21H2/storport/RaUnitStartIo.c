/*
 * XREFs of RaUnitStartIo @ 0x1C0004190
 * Callers:
 *     <none>
 * Callees:
 *     RaidProcessDeferredItemsWorker @ 0x1C0002A68 (RaidProcessDeferredItemsWorker.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C0003C54 (RaidDmaFlushDmaBuffers.c)
 *     RaidUnitClaimIrp @ 0x1C0004810 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidDmaGetScatterGatherList @ 0x1C0005B6C (RaidDmaGetScatterGatherList.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x1C0015C70 (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0018A88 (RaidUpdateZoneIoMetadata.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C003354C (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0036BEC (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C003DE5C (RaidDeleteDeviceQueueEntry.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0040644 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C0040760 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C004ED98 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00549A8 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3, char a4)
{
  __int64 v4; // rdi
  char v6; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbx
  char v11; // r11
  __int64 v12; // r15
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ecx
  char *v19; // rcx
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ebp
  __int64 v25; // rsi
  _QWORD *v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // ebp
  unsigned __int8 v34; // bp
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  void (__fastcall *v38)(__int64, _QWORD, _QWORD); // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbx
  _QWORD *v42; // rsi
  int v43; // r14d
  int v44; // ebp
  unsigned int v45; // r12d
  int v46; // ecx
  char v47; // r14
  __int64 *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r15
  bool v51; // zf
  LARGE_INTEGER v52; // r14
  const char *v53; // r14
  int v54; // ecx
  char v55; // cl
  char v56; // cl
  char v57; // al
  unsigned int v58; // esi
  int v59; // r12d
  unsigned int v60; // ebp
  char IsPowerRequired; // al
  __int64 v62; // rsi
  unsigned __int64 v63; // rdx
  __int64 v64; // r14
  int v65; // ecx
  __int64 v66; // rcx
  BOOL v67; // r15d
  unsigned int v68; // ebx
  unsigned int HighestNodeNumber; // r8d
  char v70; // al
  int v71; // ebx
  struct _KDPC *v72; // rcx
  int v74; // [rsp+38h] [rbp-C0h]
  int v75; // [rsp+90h] [rbp-68h]
  int v76; // [rsp+94h] [rbp-64h]
  __int64 v77; // [rsp+98h] [rbp-60h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp-58h] BYREF
  char v79; // [rsp+100h] [rbp+8h]
  int v80; // [rsp+108h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v76 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 24);
  v75 = 0;
  v77 = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v79 = 0;
  *(_BYTE *)(v10 + 3) = 0;
  if ( *(int *)(v9 + 3992) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v9 + 976)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 3992)) == 1 )
      RaidProcessDeferredItemsWorker(v9 + 880, *(_QWORD *)(v9 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 3992));
  }
  v11 = *(_BYTE *)(v10 + 2);
  if ( v11 != 40 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v6 = *(_BYTE *)(v10 + 72);
    v80 = *(_DWORD *)(v10 + 12);
    v79 = v6;
    if ( v12 )
      *(_QWORD *)(v10 + 40) = 0LL;
    goto LABEL_14;
  }
  v12 = *(_QWORD *)(v10 + 104);
  v80 = *(_DWORD *)(v10 + 24);
  v77 = v10;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_14;
  v13 = *(_DWORD *)(v10 + 56);
  v14 = 0;
  if ( !v13 )
    goto LABEL_14;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v10 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_101;
    v16 = *(unsigned int *)(v10 + 16);
    if ( (unsigned int)v15 > (unsigned int)v16 )
      goto LABEL_101;
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + v10);
    if ( v18 == 64 )
    {
      if ( v17 + 40 <= v16 )
      {
        if ( !*(_BYTE *)(v17 + v10 + 10) )
          goto LABEL_14;
LABEL_11:
        v19 = (char *)(v17 + v10 + 24);
        goto LABEL_12;
      }
      goto LABEL_101;
    }
    v54 = v18 - 65;
    if ( v54 )
      break;
    if ( v17 + 56 <= v16 )
    {
      if ( !*(_BYTE *)(v17 + v10 + 10) )
        goto LABEL_14;
      goto LABEL_11;
    }
LABEL_101:
    if ( ++v14 >= v13 )
      goto LABEL_14;
  }
  if ( v54 != 1 || v17 + 40 > v16 )
    goto LABEL_101;
  v19 = (char *)(v17 + v10 + 32);
  if ( !*(_DWORD *)(v17 + v10 + 12) )
    v19 = 0LL;
LABEL_12:
  if ( v19 )
  {
    v6 = *v19;
    v79 = *v19;
  }
LABEL_14:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v11 == 40 )
    {
      v42 = *(_QWORD **)(v10 + 96);
      v77 = v10;
      *(_QWORD *)(v10 + 96) = v42[2];
    }
    else
    {
      v42 = *(_QWORD **)(v10 + 48);
      *(_QWORD *)(v10 + 48) = v42[2];
    }
    if ( v42[1] != -1LL )
      v8 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v4 + 3256)) - v42[1];
    ExFreePoolWithTag(v42, 0x54436152u);
  }
  if ( (*(_BYTE *)(v4 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v10) )
  {
    RaUnitReleaseRemoveLock(v4);
    v55 = *(_BYTE *)(v10 + 3);
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      v56 = ((v55 >> 7) & 0x80) + 56;
    }
    else
    {
      v57 = 56;
      if ( v55 < 0 )
        v57 = -72;
      v56 = v57;
    }
    *(_BYTE *)(v10 + 3) = v56;
    v24 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2104));
LABEL_137:
    RaidUpdateZoneIoMetadata(v4, a2, 0LL);
LABEL_138:
    v62 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v62 + 2) == 40 )
    {
      v63 = *(unsigned int *)(v62 + 20);
      v64 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v65 = *(_DWORD *)(v62 + 24);
    }
    else
    {
      v65 = *(_DWORD *)(v62 + 12);
      v63 = *(unsigned __int8 *)(v62 + 2);
      v64 = v77;
    }
    v67 = 0;
    if ( (v65 & 0x102) != 0x102 && (v65 & 0x80010) == 0 )
    {
      if ( (unsigned int)v63 > 0x20 || (v66 = 0x1000D0000LL, !_bittest64(&v66, v63)) )
        v67 = 1;
    }
    if ( v75 )
    {
      v68 = *a3;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( v68 / *(_DWORD *)(v4 + 584) < HighestNodeNumber + 1 )
        HighestNodeNumber = v68 / *(_DWORD *)(v4 + 584);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v4 + 576) + 16LL * v68));
    }
    RaidDeleteDeviceQueueEntry(v4 + 656, v67);
    if ( (*(_BYTE *)(v62 + 3) & 0x3F) == 0 )
    {
      v70 = RaidNtStatusToSrbStatus((unsigned int)v24);
      *(_BYTE *)(v62 + 3) = v70;
      if ( (v70 & 0x3F) == 0x30 )
      {
        if ( *(_BYTE *)(v62 + 2) == 40 )
          *(_DWORD *)(v64 + 44) = -1073741670;
        else
          *(_DWORD *)(v62 + 64) = -1073741670;
      }
    }
    if ( v76 )
      RaidUnitReleaseIrp(a2);
    v71 = (unsigned __int8)StorRemoveIoGatewayItem(a3, 0LL);
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        *(_QWORD *)(v4 + 8),
        a2,
        *(_DWORD *)(a2 + 48));
    }
    RaidUnitEndDeviceBusy(v4, a2);
    RaidCompleteRequestEx((PIRP)a2);
    if ( v71 )
      v72 = (struct _KDPC *)(*(_QWORD *)(v4 + 24) + 1584LL);
    else
      v72 = (struct _KDPC *)(v4 + 1184);
    LOBYTE(v40) = KeInsertQueueDpc(v72, 0LL, 0LL);
    return v40;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v21 )
  {
    v58 = 0;
    v59 = 0;
    v60 = KeQueryHighestNodeNumber() + 1;
    while ( !v60 )
    {
LABEL_115:
      ++v59;
      v58 = 0;
      if ( v59 == 10 )
      {
        v6 = v79;
        v22 = -1;
        goto LABEL_18;
      }
    }
    while ( 1 )
    {
      v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)v58 << 6)));
      if ( v21 )
        break;
      if ( ++v58 >= v60 )
        goto LABEL_115;
    }
    v6 = v79;
  }
  v22 = *((_DWORD *)&v21->Next + 2);
LABEL_18:
  v75 = 1;
  *a3 = v22;
  v24 = RaidUnitClaimIrp(v4, a2, v12, a3);
  if ( v24 < 0 )
  {
    RaUnitReleaseRemoveLock(v4);
    goto LABEL_137;
  }
  v76 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 1948LL) && v6 != 18 && v6 != -96 )
  {
    LOBYTE(v23) = 37;
    *(_BYTE *)(v10 + 3) = 37;
    v24 = RaidSrbStatusToNtStatus(v23);
    goto LABEL_137;
  }
  if ( *(char *)(v4 + 449) < 0 && *(_DWORD *)(v4 + 492) != 1 )
  {
    IsPowerRequired = RaidSrbIsPowerRequired(v4, v10);
    if ( IsPowerRequired && (v80 & 0x100000) != 0 )
    {
      v24 = -1073741823;
      *(_BYTE *)(v10 + 3) = 36;
      goto LABEL_137;
    }
  }
  v25 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v25 + 2) == 40 )
    v26 = *(_QWORD **)(v25 + 96);
  else
    v26 = *(_QWORD **)(v25 + 48);
  v26[96] = v12;
  v26[82] = RaidUnitCompleteRequest;
  if ( v8 || *(_BYTE *)(v10 + 2) != 40 )
  {
    v28 = v77;
    goto LABEL_27;
  }
  v27 = *(unsigned int *)(v10 + 4);
  v28 = v10;
  v77 = v10;
  if ( (_DWORD)v27 || *(_DWORD *)(v10 + 28) )
  {
    v50 = *(unsigned int *)(v10 + 28);
    v51 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(v10 + 4) = 0;
    *(_DWORD *)(v10 + 28) = 0;
    if ( v51 )
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v52.QuadPart = 0LL;
LABEL_80:
        v8 = v52.QuadPart - (v27 | (v50 << 32));
        if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
          v8 = 10000000 * v8 / PerformanceFrequency.QuadPart;
        v28 = v10;
        goto LABEL_27;
      }
      if ( !UseQPCTime )
      {
LABEL_128:
        v52.QuadPart = KeQueryUnbiasedInterruptTime();
        goto LABEL_80;
      }
      v51 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    else
    {
      v51 = UseQPCTime == 0;
    }
    if ( !v51 )
    {
      v52 = KeQueryPerformanceCounter(&PerformanceFrequency);
      goto LABEL_80;
    }
    goto LABEL_128;
  }
LABEL_27:
  v26[86] = v8;
  if ( v8 >= DeviceQueueIoWaitThreshold )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2232)) == 1 )
    {
      v53 = "Start";
      goto LABEL_86;
    }
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v4 + 2232), 0LL) )
      goto LABEL_29;
    v53 = "End";
LABEL_86:
    if ( (byte_1C00799E6 & 2) != 0 )
      McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
        v4 + 169,
        v4 + 160,
        v4 + 1976,
        *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4592LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
        *(_QWORD *)(v4 + 24) + 4936LL,
        *(_BYTE *)(v4 + 96),
        *(_BYTE *)(v4 + 97),
        *(_BYTE *)(v4 + 98),
        v4 + 1976,
        v4 + 160,
        v4 + 169,
        v4 + 186,
        *(_BYTE *)(v4 + 450) & 1,
        (__int64)v53);
  }
LABEL_29:
  v29 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)(v29 + 5480) )
  {
    LODWORD(v40) = RaidAdapterAcquireCryptoKeyResources(v29, v26);
    v24 = v40;
    if ( (_DWORD)v40 == 259 )
      return v40;
    if ( (int)v40 < 0 )
    {
      if ( *(_BYTE *)(v10 + 2) == 40 )
      {
        *(_BYTE *)(v28 + 3) = 48;
        *(_DWORD *)(v28 + 44) = v40;
      }
      else
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = v40;
      }
      goto LABEL_137;
    }
  }
  v30 = *(_QWORD *)(v4 + 24);
  if ( !*(_BYTE *)(v30 + 4242) )
  {
LABEL_43:
    LODWORD(v40) = RaidAdapterPostScatterGatherExecute(v30, v26);
    goto LABEL_44;
  }
  v31 = v26[21];
  v32 = *(unsigned __int8 *)(v31 + 2);
  if ( (_BYTE)v32 == 40 )
    v33 = *(_DWORD *)(v31 + 24);
  else
    v33 = *(_DWORD *)(v31 + 12);
  if ( (*(_BYTE *)(v30 + 4243) & 4) != 0 )
  {
    v34 = (v33 & 0x40) != 0;
    if ( v26[13] )
    {
      v35 = (__int64 *)(v30 + 752);
      if ( v30 != -752 )
      {
        v36 = *v35;
        if ( *v35 )
        {
          v37 = *(_QWORD *)(v36 + 8);
          if ( v37 )
          {
            if ( *(int *)(v30 + 780) >= 3 && (v38 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v37 + 240)) != 0LL )
              v38(v36, v26[13], v34);
            else
              KeFlushIoBuffers(v26[13], v34);
          }
        }
      }
    }
    v39 = v26[17];
    if ( v39 )
      RaidDmaFlushDmaBuffers((int *)(v30 + 752), v39, v34);
    goto LABEL_43;
  }
  if ( v26[17] )
  {
    LODWORD(v40) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v4 + 24), v26);
LABEL_44:
    v24 = v40;
  }
  else
  {
    if ( (v33 & 0xC0) == 0 )
      goto LABEL_43;
    if ( (_BYTE)v32 == 40 )
    {
      v43 = *(_DWORD *)(v31 + 24);
      v45 = *(_DWORD *)(v31 + 60);
      v44 = *(_DWORD *)(v31 + 20);
    }
    else
    {
      v43 = *(_DWORD *)(v31 + 12);
      v44 = *(unsigned __int8 *)(v31 + 2);
      v45 = *(_DWORD *)(v31 + 16);
    }
    LODWORD(v40) = *(_DWORD *)(v30 + 564);
    v46 = v43 & 0x40;
    v47 = (v43 & 0x80) != 0;
    if ( (v40 & 8) == 0 && (*(_BYTE *)(v30 + 108) & 4) == 0 )
    {
      LOBYTE(v32) = v46 != 0;
      LOBYTE(v40) = KeFlushIoBuffers(v26[13], v32);
    }
    if ( v44 == 23 )
    {
      v40 = v26[13];
      if ( *(_DWORD *)(v40 + 40) > v45 )
        v45 = *(_DWORD *)(v40 + 40);
    }
    v48 = (__int64 *)(v30 + 752);
    if ( v30 != -752 && (v49 = *v48) != 0 && (v40 = *(_QWORD *)(v49 + 8)) != 0 && (v40 = *(_QWORD *)(v40 + 112)) != 0 )
    {
      LOBYTE(v74) = v47;
      LODWORD(v40) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v40)(
                       v49,
                       *(_QWORD *)(v30 + 8),
                       v26[13],
                       v26[23],
                       v45,
                       RaidpAdapterContinueScatterGather,
                       v26,
                       v74,
                       v26 + 29,
                       424);
      v24 = v40;
      if ( (_DWORD)v40 == -1073741789 )
      {
        LODWORD(v40) = RaidDmaGetScatterGatherList(
                         (int)v30 + 752,
                         *(_QWORD *)(v30 + 8),
                         v26[13],
                         v26[23],
                         v45,
                         (__int64)RaidpAdapterContinueScatterGather,
                         (__int64)v26,
                         v47);
        goto LABEL_44;
      }
    }
    else
    {
      v24 = -1073741811;
    }
  }
  if ( v24 < 0 )
    goto LABEL_138;
  v41 = *(_QWORD *)(v4 + 24);
  if ( *(int *)(v41 + 3992) <= 0 )
  {
    LOWORD(v40) = ExQueryDepthSList((PSLIST_HEADER)(v41 + 976));
    if ( (_WORD)v40 )
    {
      LODWORD(v40) = _InterlockedIncrement((volatile signed __int32 *)(v41 + 3992));
      if ( (_DWORD)v40 == 1 )
        LOBYTE(v40) = RaidProcessDeferredItemsWorker(v41 + 880, *(_QWORD *)(v41 + 8), a4);
      _InterlockedDecrement((volatile signed __int32 *)(v41 + 3992));
    }
  }
  return v40;
}
