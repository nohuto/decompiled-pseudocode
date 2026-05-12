/*
 * XREFs of RaUnitStartIo @ 0x1C0008F30
 * Callers:
 *     <none>
 * Callees:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitClaimIrp @ 0x1C00094D0 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C0013CDC (RaidProcessDeferredItemsWorker.c)
 *     RaidUnitReleaseIrp @ 0x1C0016EE4 (RaidUnitReleaseIrp.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C00218F8 (RaidDmaFlushDmaBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C00341B0 (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0038020 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C00401A8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0043034 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C0043158 (RaidSrbIsPowerRequired.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0043214 (RaidUpdateZoneIoMetadata.c)
 *     RaidNtStatusToSrbStatus @ 0x1C005A42C (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x1C005C8CC (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0061370 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // r13
  __int64 v8; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rax
  char *v21; // rax
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  signed int v26; // ebp
  __int64 v27; // r8
  __int64 v28; // rdi
  _QWORD *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ebp
  bool v37; // bp
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  void (__fastcall *v41)(__int64, _QWORD, bool); // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbx
  _QWORD *v45; // rdi
  int v46; // r14d
  unsigned int v47; // r13d
  int v48; // ebp
  int v49; // ecx
  bool v50; // r14
  __int64 *v51; // r12
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ecx
  char v55; // cl
  char v56; // cl
  char v57; // al
  int v58; // r13d
  unsigned int v59; // ebp
  unsigned int v60; // edi
  char IsPowerRequired; // al
  __int64 v62; // r12
  bool v63; // zf
  LARGE_INTEGER v64; // r14
  const char *v65; // r14
  __int64 v66; // rsi
  unsigned __int64 v67; // rdx
  __int64 v68; // r13
  int v69; // ecx
  __int64 v70; // rcx
  unsigned int v71; // edi
  unsigned int HighestNodeNumber; // r8d
  __int64 v73; // r8
  char v74; // al
  int v75; // edi
  struct _KDPC *v76; // rcx
  int v78; // [rsp+38h] [rbp-C0h]
  int v79; // [rsp+38h] [rbp-C0h]
  int v80; // [rsp+90h] [rbp-68h]
  int v81; // [rsp+94h] [rbp-64h]
  __int64 v82; // [rsp+98h] [rbp-60h]
  int v83; // [rsp+A0h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp-50h] BYREF
  char v85; // [rsp+100h] [rbp+8h]
  int v86; // [rsp+108h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v81 = 0;
  v8 = *(_QWORD *)(v4 + 8);
  v10 = *(_QWORD *)(v5 + 24);
  v11 = 0LL;
  v80 = 0;
  v82 = 0LL;
  *(_BYTE *)(v8 + 3) = 0;
  v85 = 0;
  v83 = 1;
  if ( *(int *)(v10 + 4056) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v10 + 1040)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 4056)) == 1 )
      RaidProcessDeferredItemsWorker(v10 + 944, *(_QWORD *)(v10 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4056));
  }
  v12 = *(unsigned __int8 *)(v8 + 2);
  if ( (_BYTE)v12 != 40 )
  {
    v13 = *(_QWORD *)(v8 + 40);
    v6 = *(_BYTE *)(v8 + 72);
    v86 = *(_DWORD *)(v8 + 12);
    v85 = v6;
    if ( v13 )
      *(_QWORD *)(v8 + 40) = 0LL;
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(v8 + 104);
  v86 = *(_DWORD *)(v8 + 24);
  v82 = v8;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_14;
  v14 = *(_DWORD *)(v8 + 56);
  v15 = 0;
  if ( !v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v8 + 4LL * v15 + 120);
    if ( (unsigned int)v16 < 0x80 )
      goto LABEL_91;
    v17 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v16 > (unsigned int)v17 )
      goto LABEL_91;
    v18 = (unsigned int)v16;
    v19 = *(_DWORD *)(v16 + v8);
    if ( v19 == 64 )
    {
      if ( v18 + 40 <= v17 )
      {
        if ( !*(_BYTE *)(v18 + v8 + 10) )
          goto LABEL_14;
LABEL_11:
        v20 = v8 + 24;
        goto LABEL_12;
      }
      goto LABEL_91;
    }
    v54 = v19 - 65;
    if ( v54 )
      break;
    if ( v18 + 56 <= v17 )
    {
      if ( !*(_BYTE *)(v18 + v8 + 10) )
        goto LABEL_14;
      goto LABEL_11;
    }
LABEL_91:
    if ( ++v15 >= v14 )
      goto LABEL_14;
  }
  if ( v54 != 1 || v18 + 40 > v17 )
    goto LABEL_91;
  if ( !*(_DWORD *)(v18 + v8 + 12) )
    goto LABEL_14;
  v20 = v8 + 32;
LABEL_12:
  v21 = (char *)(v18 + v20);
  if ( v21 )
  {
    v6 = *v21;
    v85 = *v21;
  }
LABEL_14:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( (_BYTE)v12 == 40 )
    {
      v45 = *(_QWORD **)(v8 + 96);
      v82 = v8;
      *(_QWORD *)(v8 + 96) = v45[2];
    }
    else
    {
      v45 = *(_QWORD **)(v8 + 48);
      *(_QWORD *)(v8 + 48) = v45[2];
    }
    if ( v45[1] != -1LL )
      v11 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v5 + 3304)) - v45[1];
    ExFreePoolWithTag(v45, 0x54436152u);
  }
  if ( (*(_BYTE *)(v5 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8, v12) )
  {
    RaUnitReleaseRemoveLock(v5);
    v55 = *(_BYTE *)(v8 + 3);
    if ( *(_BYTE *)(v8 + 2) == 40 )
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
    *(_BYTE *)(v8 + 3) = v56;
    v26 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 2152));
LABEL_138:
    v25 = 1;
LABEL_139:
    RaidUpdateZoneIoMetadata(v5, a2, 0LL);
LABEL_149:
    v66 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v66 + 2) == 40 )
    {
      v67 = *(unsigned int *)(v66 + 20);
      v68 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v69 = *(_DWORD *)(v66 + 24);
    }
    else
    {
      v69 = *(_DWORD *)(v66 + 12);
      v67 = *(unsigned __int8 *)(v66 + 2);
      v68 = v82;
    }
    if ( (v69 & 0x102) == 0x102
      || (v69 & 0x80010) != 0
      || (unsigned int)v67 <= 0x20 && (v70 = 0x1000D0000LL, _bittest64(&v70, v67)) )
    {
      v25 = 0;
      v83 = 0;
    }
    if ( v80 )
    {
      v71 = *a3;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( v71 / *(_DWORD *)(v5 + 584) < HighestNodeNumber + 1 )
        HighestNodeNumber = v71 / *(_DWORD *)(v5 + 584);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v5 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v5 + 576) + 16LL * v71));
      v25 = v83;
    }
    RaidDeleteDeviceQueueEntry(v5 + 656, v25);
    if ( (*(_BYTE *)(v66 + 3) & 0x3F) == 0 )
    {
      v74 = RaidNtStatusToSrbStatus((unsigned int)v26);
      *(_BYTE *)(v66 + 3) = v74;
      if ( (v74 & 0x3F) == 0x30 )
      {
        if ( *(_BYTE *)(v66 + 2) == 40 )
          *(_DWORD *)(v68 + 44) = -1073741670;
        else
          *(_DWORD *)(v66 + 64) = -1073741670;
      }
    }
    if ( v81 )
      RaidUnitReleaseIrp(a2);
    v75 = (unsigned __int8)StorRemoveIoGatewayItem((__int64)a3, 0LL, v73);
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        *(_QWORD *)(v5 + 8),
        a2,
        *(_DWORD *)(a2 + 48));
    }
    RaidUnitEndDeviceBusy(v5, a2);
    RaidCompleteRequestEx((PIRP)a2, 0, v26);
    if ( v75 )
      v76 = (struct _KDPC *)(*(_QWORD *)(v5 + 24) + 1648LL);
    else
      v76 = (struct _KDPC *)(v5 + 1240);
    LOBYTE(v43) = KeInsertQueueDpc(v76, 0LL, 0LL);
    return v43;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v5 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v23 )
  {
    v58 = 0;
    v59 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v60 = 0;
      if ( v59 )
        break;
LABEL_105:
      if ( ++v58 == 10 )
      {
        v6 = v85;
        v24 = -1;
        goto LABEL_18;
      }
    }
    while ( 1 )
    {
      v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v5 + 512) + ((unsigned __int64)v60 << 6)));
      if ( v23 )
        break;
      if ( ++v60 >= v59 )
        goto LABEL_105;
    }
    v6 = v85;
  }
  v24 = *((_DWORD *)&v23->Next + 2);
LABEL_18:
  v25 = 1;
  v80 = 1;
  *a3 = v24;
  v26 = RaidUnitClaimIrp(v5, a2, v13, a3);
  if ( v26 < 0 )
  {
    RaUnitReleaseRemoveLock(v5);
    goto LABEL_139;
  }
  v81 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v5 + 24) + 2012LL) && v6 != 18 && v6 != -96 )
  {
    *(_BYTE *)(v8 + 3) = 37;
    v26 = RaidSrbStatusToNtStatus(37);
    goto LABEL_139;
  }
  if ( *(char *)(v5 + 449) < 0 && *(_DWORD *)(v5 + 492) != 1 )
  {
    IsPowerRequired = RaidSrbIsPowerRequired(v5, v8);
    if ( IsPowerRequired && (v86 & 0x100000) != 0 )
    {
      v26 = -1073741823;
      *(_BYTE *)(v8 + 3) = 36;
      goto LABEL_139;
    }
  }
  v28 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v28 + 2) == 40 )
    v29 = *(_QWORD **)(v28 + 96);
  else
    v29 = *(_QWORD **)(v28 + 48);
  v29[96] = v13;
  v29[82] = RaidUnitCompleteRequest;
  if ( v11 || *(_BYTE *)(v8 + 2) != 40 )
  {
    v31 = v82;
    goto LABEL_27;
  }
  v30 = *(unsigned int *)(v8 + 4);
  v31 = v8;
  v82 = v8;
  if ( (_DWORD)v30 || *(_DWORD *)(v8 + 28) )
  {
    v63 = StorEtwLoggingEnabled == 0;
    v62 = *(unsigned int *)(v8 + 28);
    *(_DWORD *)(v8 + 28) = 0;
    *(_DWORD *)(v8 + 4) = 0;
    if ( v63 )
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v64.QuadPart = 0LL;
        goto LABEL_124;
      }
      if ( !UseQPCTime )
        goto LABEL_122;
      v63 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    else
    {
      v63 = UseQPCTime == 0;
    }
    if ( !v63 )
    {
      v64 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_124:
      v11 = v64.QuadPart - (v30 | (v62 << 32));
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
        v11 = 10000000 * v11 / PerformanceFrequency.QuadPart;
      goto LABEL_27;
    }
LABEL_122:
    v64.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_124;
  }
LABEL_27:
  v29[86] = v11;
  if ( v11 >= DeviceQueueIoWaitThreshold )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 2280)) == 1 )
    {
      v65 = "Start";
      goto LABEL_131;
    }
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v5 + 2280), 0LL) )
      goto LABEL_29;
    v65 = "End";
LABEL_131:
    if ( (byte_1C0092A06 & 4) != 0 )
      McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
        v5 + 169,
        v5 + 160,
        v5 + 2024,
        *(_QWORD *)(*(_QWORD *)(v5 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 24) + 56LL),
        *(_QWORD *)(v5 + 24) + 5000LL,
        *(_BYTE *)(v5 + 96),
        *(_BYTE *)(v5 + 97),
        *(_BYTE *)(v5 + 98),
        v5 + 2024,
        v5 + 160,
        v5 + 169,
        v5 + 186,
        *(_BYTE *)(v5 + 450) & 1,
        (__int64)v65);
  }
LABEL_29:
  v32 = *(_QWORD *)(v5 + 24);
  if ( *(_QWORD *)(v32 + 5544) )
  {
    LODWORD(v43) = RaidAdapterAcquireCryptoKeyResources(v32, v29);
    v26 = v43;
    if ( (_DWORD)v43 == 259 )
      return v43;
    if ( (int)v43 < 0 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
      {
        *(_BYTE *)(v31 + 3) = 48;
        *(_DWORD *)(v31 + 44) = v43;
      }
      else
      {
        *(_BYTE *)(v8 + 3) = 48;
        *(_DWORD *)(v8 + 64) = v43;
      }
      goto LABEL_138;
    }
  }
  v33 = *(_QWORD *)(v5 + 24);
  if ( !*(_BYTE *)(v33 + 4306) )
  {
LABEL_43:
    LODWORD(v43) = RaidAdapterPostScatterGatherExecute(v33, v29);
    goto LABEL_44;
  }
  v34 = v29[21];
  v35 = *(unsigned __int8 *)(v34 + 2);
  if ( (_BYTE)v35 == 40 )
    v36 = *(_DWORD *)(v34 + 24);
  else
    v36 = *(_DWORD *)(v34 + 12);
  if ( (*(_BYTE *)(v33 + 4307) & 4) != 0 )
  {
    v37 = (v36 & 0x40) != 0;
    if ( v29[13] )
    {
      v38 = (__int64 *)(v33 + 760);
      if ( v33 != -760 )
      {
        v39 = *v38;
        if ( *v38 )
        {
          v40 = *(_QWORD *)(v39 + 8);
          if ( v40 )
          {
            if ( *(int *)(v33 + 788) >= 3 && (v41 = *(void (__fastcall **)(__int64, _QWORD, bool))(v40 + 240)) != 0LL )
            {
              v41(v39, v29[13], v37);
            }
            else
            {
              LOBYTE(v40) = 1;
              KeFlushIoBuffers(v29[13], v37, v40);
            }
          }
        }
      }
    }
    v42 = v29[17];
    if ( v42 )
      RaidDmaFlushDmaBuffers(v33 + 760, v42, v37);
    goto LABEL_43;
  }
  if ( v29[17] )
  {
    LODWORD(v43) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v5 + 24), v29);
LABEL_44:
    v26 = v43;
  }
  else
  {
    if ( (v36 & 0xC0) == 0 )
      goto LABEL_43;
    if ( (_BYTE)v35 == 40 )
    {
      v46 = *(_DWORD *)(v34 + 24);
      v47 = *(_DWORD *)(v34 + 60);
      v48 = *(_DWORD *)(v34 + 20);
    }
    else
    {
      v46 = *(_DWORD *)(v34 + 12);
      v48 = *(unsigned __int8 *)(v34 + 2);
      v47 = *(_DWORD *)(v34 + 16);
    }
    LODWORD(v43) = *(_DWORD *)(v33 + 564);
    v49 = v46 & 0x40;
    v50 = (v46 & 0x80) != 0;
    if ( (v43 & 8) == 0 && (*(_BYTE *)(v33 + 108) & 4) == 0 )
    {
      LOBYTE(v27) = 1;
      LOBYTE(v35) = v49 != 0;
      LOBYTE(v43) = KeFlushIoBuffers(v29[13], v35, v27);
    }
    if ( v48 == 23 )
    {
      v43 = v29[13];
      if ( *(_DWORD *)(v43 + 40) > v47 )
        v47 = *(_DWORD *)(v43 + 40);
    }
    v51 = (__int64 *)(v33 + 760);
    if ( v33 == -760 )
      goto LABEL_82;
    v52 = *v51;
    if ( !*v51 )
      goto LABEL_82;
    v43 = *(_QWORD *)(v52 + 8);
    if ( !v43 )
      goto LABEL_82;
    v43 = *(_QWORD *)(v43 + 112);
    if ( !v43 )
      goto LABEL_82;
    LOBYTE(v78) = v50;
    LODWORD(v43) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v43)(
                     v52,
                     *(_QWORD *)(v33 + 8),
                     v29[13],
                     v29[23],
                     v47,
                     RaidpAdapterContinueScatterGather,
                     v29,
                     v78,
                     v29 + 29,
                     424);
    v26 = v43;
    if ( (_DWORD)v43 == -1073741789 )
    {
      v53 = *v51;
      if ( *v51 )
      {
        v43 = *(_QWORD *)(v53 + 8);
        if ( v43 )
        {
          v43 = *(_QWORD *)(v43 + 88);
          if ( v43 )
          {
            LOBYTE(v79) = v50;
            LODWORD(v43) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v43)(
                             v53,
                             *(_QWORD *)(v33 + 8),
                             v29[13],
                             v29[23],
                             v47,
                             RaidpAdapterContinueScatterGather,
                             v29,
                             v79);
            goto LABEL_44;
          }
        }
      }
LABEL_82:
      v26 = -1073741811;
    }
  }
  if ( v26 < 0 )
  {
    v25 = 1;
    goto LABEL_149;
  }
  v44 = *(_QWORD *)(v5 + 24);
  if ( *(int *)(v44 + 4056) <= 0 )
  {
    LOWORD(v43) = ExQueryDepthSList((PSLIST_HEADER)(v44 + 1040));
    if ( (_WORD)v43 )
    {
      LODWORD(v43) = _InterlockedIncrement((volatile signed __int32 *)(v44 + 4056));
      if ( (_DWORD)v43 == 1 )
        LOBYTE(v43) = RaidProcessDeferredItemsWorker(v44 + 944, *(_QWORD *)(v44 + 8), a4);
      _InterlockedDecrement((volatile signed __int32 *)(v44 + 4056));
    }
  }
  return v43;
}
