/*
 * XREFs of ndisInterruptDpc @ 0x1C00014D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueDpcWorkItem @ 0x1C0001398 (ndisQueueDpcWorkItem.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00018A0 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006514 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        __int64 SystemArgument2)
{
  const struct _NDIS_MINIPORT_BLOCK *v4; // r11
  char v5; // r14
  unsigned int v6; // edi
  char *v7; // rbx
  int PcwDatapathEventMask; // eax
  unsigned int Number; // ecx
  struct _NDIS_MINIPORT_BLOCK *v11; // rsi
  __int64 Clock; // r15
  void (__fastcall *v13)(__int64, __int64, __int64 *, _QWORD); // r12
  void (__fastcall *v14)(__int64, _QWORD, __int64, __int64 *, _QWORD); // r13
  int v15; // eax
  char v16; // di
  __int64 v17; // rcx
  __int64 v18; // r12
  struct _NDIS_MINIPORT_BLOCK *v19; // rsi
  unsigned int v20; // r15d
  char v21; // r12
  int v22; // eax
  KIRQL v23; // al
  int v24; // edx
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v26; // r14
  __int64 v27; // rdi
  struct _KDPC *v28; // rcx
  PVOID v29; // rax
  int v30; // eax
  char *v31; // rbx
  __int64 *v32; // rax
  wchar_t *Buffer; // rax
  wchar_t *v34; // rdx
  char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+40h] [rbp-79h] BYREF
  PVOID v38; // [rsp+48h] [rbp-71h]
  wchar_t *v39; // [rsp+50h] [rbp-69h] BYREF
  int v40; // [rsp+58h] [rbp-61h]
  int v41; // [rsp+5Ch] [rbp-5Dh]
  int v42; // [rsp+60h] [rbp-59h]
  __int64 v43; // [rsp+68h] [rbp-51h]
  wchar_t *v44; // [rsp+70h] [rbp-49h] BYREF
  __int64 v45; // [rsp+78h] [rbp-41h]
  int v46; // [rsp+80h] [rbp-39h]
  struct _KDPC *v47; // [rsp+88h] [rbp-31h]
  __int16 WnodeEventItem; // [rsp+90h] [rbp-29h] BYREF
  __int128 v49; // [rsp+92h] [rbp-27h]
  _BYTE v50[22]; // [rsp+A2h] [rbp-17h]
  __int16 v51; // [rsp+B8h] [rbp-1h]
  _WORD v52[3]; // [rsp+BAh] [rbp+1h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+C0h] [rbp+7h] BYREF

  v4 = (const struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  v5 = 0;
  v6 = -1;
  v47 = Dpc;
  v7 = DeferredContext;
  v43 = SystemArgument2;
  LOWORD(DeferredContext) = 0;
  v38 = SystemArgument1;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  Number = -1;
  v39 = 0LL;
  v40 = 0;
  v41 = 0;
  v42 = -1;
  if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
  {
    LODWORD(DeferredContext) = v4->PcwDatapathCycleMask;
    v40 = PcwDatapathEventMask;
    Buffer = v4->Reserved4.Buffer;
    v41 = (int)DeferredContext;
    v39 = Buffer;
    if ( !Buffer )
    {
      Number = v42;
      LOWORD(DeferredContext) = v41;
      v39 = v4->Reserved4.Buffer;
    }
  }
  if ( ((unsigned __int16)DeferredContext & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v39, 0xCu, 0x23uLL);
    Number = v42;
  }
  if ( (v40 & 1) != 0 )
  {
    if ( Number == -1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v42 = Number;
    }
    ++*(_QWORD *)((char *)v39 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData);
  }
  if ( dword_1C00EC244 == -1 || !MiniportSupportsReceiveThrottle(v4) )
  {
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0
      || !ndisDpcWatchdogLimit
      || WatchdogInformation.DpcWatchdogCount >= ndisDpcWatchdogLimit )
    {
      v11 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 12);
      Clock = 0LL;
      v13 = (void (__fastcall *)(__int64, __int64, __int64 *, _QWORD))*((_QWORD *)v7 + 3);
      v14 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64 *, _QWORD))*((_QWORD *)v7 + 23);
      v37 = 0LL;
      v15 = v11->PcwDatapathEventMask;
      v44 = 0LL;
      v45 = 0LL;
      v46 = -1;
      if ( v15 || v11->PcwDatapathCycleMask )
      {
        LODWORD(v45) = v15;
        HIDWORD(v45) = v11->PcwDatapathCycleMask;
        v44 = v11->Reserved4.Buffer;
        if ( !v44 )
          v44 = v11->Reserved4.Buffer;
      }
      if ( HIBYTE(dword_1C00EE5E8) )
      {
        v5 = 1;
        ndisTraceDpcStart(v11, 1u);
        Clock = WmiGetClock(0LL, 0LL);
      }
      if ( v7[4] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 26, 0xFFFFFFFF) != 1 )
          goto LABEL_28;
      }
      else
      {
        if ( byte_1C00EC241 )
        {
          if ( dword_1C00EC24C )
          {
            v6 = dword_1C00EC244;
          }
          else
          {
            v6 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v11->PeriodicReceivesNblCountIndex
                                                               + (KeGetPcr()->Prcb.Number << 12))];
            if ( dword_1C00EC244 < v6 )
              v6 = dword_1C00EC244;
          }
        }
        LODWORD(v37) = v6;
        v16 = BYTE4(v45);
        if ( (v45 & 0x100000000LL) != 0 )
        {
          ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v44, 0);
          v16 = BYTE4(v45);
        }
        v17 = *((_QWORD *)v7 + 1);
        if ( v7[193] == 1 )
        {
          v18 = v43;
          v14(v17, (unsigned int)v38, v43, &v37, 0LL);
        }
        else
        {
          v13(v17, v43, &v37, 0LL);
          v18 = v43;
        }
        if ( (v16 & 1) != 0 )
          ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v44, 0, 0xDuLL);
        if ( (v37 & 0x100000000LL) != 0 )
        {
          ndisQueueDpcWorkItem((__int64)v47, (__int64)v7, (__int64)v38, v18, byte_1C00EC241);
LABEL_28:
          if ( v5 )
          {
            v36 = WmiGetClock(0LL, 0LL);
            ndisTraceDpcEnd(v11, 1u, v36 - Clock);
          }
          return;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 26, 0xFFFFFFFF) != 1 || !v7[4] )
          goto LABEL_28;
      }
      KeSetEvent((PRKEVENT)(v7 + 128), 0, 0);
      goto LABEL_28;
    }
  }
  v19 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 12);
  v20 = KeGetPcr()->Prcb.Number;
  v21 = byte_1C00EC241;
  v22 = v19->PcwDatapathEventMask;
  if ( v22 || v19->PcwDatapathCycleMask )
  {
    v34 = v19->Reserved4.Buffer;
    if ( !v34 )
      v34 = v19->Reserved4.Buffer;
    if ( (v22 & 0x800000) != 0 )
    {
      v35 = (char *)v34 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)&v35[ndisPcwOffsetToPerCpuData + 288];
    }
  }
  v23 = KeAcquireSpinLockRaiseToDpc(&v19->Ref.SpinLock);
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v19->RefCountTracker;
  v26 = v23;
  if ( RefCountTracker )
    NdisReferenceWithTag(RefCountTracker);
  ++v19->Ref.ReferenceCount;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      20,
      13,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)v19,
      v19->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&v19->Ref.SpinLock, v26);
  v27 = *((_QWORD *)v7 + 27) + 80LL * (v20 + ndisMaxNumberOfProcessors * (v7[193] != 0 ? (unsigned int)v38 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v27 + 72));
  if ( (*(_DWORD *)(v27 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v7 + 26);
    ndisDereferenceMiniport(v19, MPREF_IO_QUEUEDDPC);
  }
  else
  {
    v28 = v47;
    v29 = v38;
    *(_DWORD *)(v27 + 64) = v20;
    *(_DWORD *)(v27 + 68) = 1;
    *(_QWORD *)(v27 + 32) = v28;
    *(_QWORD *)(v27 + 40) = v7;
    *(_QWORD *)(v27 + 48) = v29;
    *(_QWORD *)(v27 + 56) = SystemArgument2;
    if ( v21 )
    {
      v30 = 1;
      if ( HIBYTE(word_1C00EE5EC) )
      {
        v51 = 0;
        v52[0] = 0;
        v49 = 0LL;
        WnodeEventItem = 48;
        *(_QWORD *)v50 = 0LL;
        *(_QWORD *)((char *)&v49 + 6) = qword_1C00EE5E0;
        *(_DWORD *)&v52[1] = 0x20000;
        BYTE2(v49) = 24;
        *(GUID *)&v50[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
        v30 = *(_DWORD *)(v27 + 68);
      }
      *(_DWORD *)(v27 + 68) = v30 | 2;
      v31 = (char *)qword_1C00EC280 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v31 + 2);
      v32 = (__int64 *)*((_QWORD *)v31 + 1);
      if ( (char *)*v32 != v31 )
        __fastfail(3u);
      *(_QWORD *)v27 = v31;
      *(_QWORD *)(v27 + 8) = v32;
      *v32 = v27;
      *((_QWORD *)v31 + 1) = v27;
      ++*((_DWORD *)v31 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v31 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v31 + 1, 0, 1, 0);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v27, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v27 + 72));
}
