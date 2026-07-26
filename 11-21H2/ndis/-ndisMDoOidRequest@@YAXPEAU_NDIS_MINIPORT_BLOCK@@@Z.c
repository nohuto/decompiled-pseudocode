/*
 * XREFs of ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0
 * Callers:
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00097C0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C000999C (WPP_RECORDER_SF_Dqqd.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009FB0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForPendingNblReturnLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006201C (-ndisWaitForPendingNblReturnLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C009920C (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0099FC0 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     McTemplateK0jqxptdq_EtwWriteTransfer @ 0x1C00A204C (McTemplateK0jqxptdq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C00A210C (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A95E8 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A9BF8 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0101920 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *AllRequestsCompletedEvent; // r12
  _NDIS_OID_REQUEST *p_p; // r14
  struct _NDIS_MINIPORT_BLOCK *Flink; // rbx
  char v5; // di
  unsigned int WSyncFlags; // edx
  _LIST_ENTRY *p_OidRequestList; // rcx
  _LIST_ENTRY *v8; // rax
  KIRQL v9; // dl
  __int64 v10; // rdx
  struct _NDIS_MINIPORT_BLOCK *v11; // r13
  KIRQL v12; // dl
  UCHAR Type; // r11
  NDIS_OID Oid; // r12d
  char v15; // bl
  char v16; // di
  unsigned int Timeout; // eax
  unsigned int CheckForHangSeconds; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // eax
  struct _NDIS_MINIPORT_BLOCK *v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  __int64 (__fastcall *v26)(__int128 *); // rax
  int v27; // r9d
  int v28; // ebx
  bool v29; // zf
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int PnPFlags; // ecx
  int v32; // ecx
  int BaseMiniport; // ecx
  unsigned __int64 *p_Lock; // rcx
  unsigned int Flags; // eax
  KIRQL v36; // al
  KIRQL v37; // dl
  KIRQL v38; // dl
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  KIRQL v43; // dl
  _DEVICE_POWER_STATE v44; // edi
  KIRQL v45; // dl
  KIRQL v46; // dl
  int v47; // [rsp+20h] [rbp-69h]
  __int64 v48; // [rsp+48h] [rbp-41h]
  __int128 v49; // [rsp+50h] [rbp-39h] BYREF
  __int128 v50; // [rsp+60h] [rbp-29h]
  __int128 v51; // [rsp+70h] [rbp-19h]
  _OWORD v52[2]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v53; // [rsp+A0h] [rbp+17h]
  unsigned __int8 v54; // [rsp+F0h] [rbp+67h] BYREF
  struct _KEVENT *v55; // [rsp+F8h] [rbp+6Fh]

  AllRequestsCompletedEvent = 0LL;
  v55 = 0LL;
  while ( 1 )
  {
    p_p = 0LL;
    Flink = 0LL;
    v5 = 0;
    v54 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (WSyncFlags & 1) != 0 )
    {
      v38 = v54;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v38);
      v11 = 0LL;
      goto LABEL_10;
    }
    p_OidRequestList = &a1->OidRequestList;
    Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->OidRequestList.Flink;
    if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->OidRequestList )
    {
      if ( (a1->PnPFlags & 0x20000) != 0 )
      {
LABEL_78:
        v5 = 1;
        if ( a1->AllRequestsCompletedEvent )
        {
          v43 = v54;
          AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
          v55 = AllRequestsCompletedEvent;
          a1->AllRequestsCompletedEvent = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, v43);
LABEL_80:
          ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
          Flink = 0LL;
          p_p = 0LL;
          v11 = 0LL;
          goto LABEL_10;
        }
      }
      v12 = v54;
      v11 = 0LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v12);
      Flink = 0LL;
      if ( !v5 )
        goto LABEL_10;
      goto LABEL_80;
    }
    if ( (a1->PnPFlags & 0x20000) != 0 )
      goto LABEL_78;
    a1->WSyncFlags = WSyncFlags | 1;
    if ( (_LIST_ENTRY *)Flink->NextMiniport != p_OidRequestList
      || (v8 = *(_LIST_ENTRY **)&Flink->Header.Type,
          *(struct _NDIS_MINIPORT_BLOCK **)(*(_QWORD *)&Flink->Header.Type + 8LL) != Flink) )
    {
      __fastfail(3u);
    }
    v9 = v54;
    p_p = (_NDIS_OID_REQUEST *)&Flink[-1].PollModeConfigKnobDescriptors._p;
    p_OidRequestList->Flink = v8;
    v8->Blink = p_OidRequestList;
    a1->MiniportThread = 0LL;
    a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-1].PollModeConfigKnobDescriptors._p;
    KeReleaseSpinLock(&a1->Lock, v9);
    v11 = Flink;
LABEL_10:
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      v55 = 0LL;
    }
    if ( !Flink )
      break;
    Type = a1->Header.Type;
    Oid = p_p->DATA.QUERY_INFORMATION.Oid;
    v15 = 0;
    v16 = 0;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    if ( Type == 17 )
    {
      Timeout = p_p->Timeout;
      if ( Timeout < 0x3C )
      {
        CheckForHangSeconds = a1->CheckForHangSeconds;
        if ( CheckForHangSeconds )
        {
          v19 = CheckForHangSeconds + Timeout - 1;
          if ( CheckForHangSeconds == 2 )
          {
            v20 = v19 >> 1;
          }
          else
          {
            v10 = v19 % CheckForHangSeconds;
            v20 = v19 / CheckForHangSeconds;
          }
          a1->CFHangXTicks = v20;
        }
      }
    }
    *(_DWORD *)&p_p->NdisReserved[16] &= ~4u;
    v21 = 0LL;
    v22 = 73;
    if ( a1->Header.Type == 17 )
      v23 = a1;
    else
      v23 = *(struct _NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    if ( !p_p->PortNumber || (LODWORD(v23) = v23->InfoFlags, ((unsigned __int16)v23 & 0x200) == 0) )
    {
      v24 = p_p->DATA.QUERY_INFORMATION.Oid;
      v25 = 146;
      while ( v22 >= (unsigned int)v21 )
      {
        v10 = 3LL * v22;
        LODWORD(v23) = *((_DWORD *)&unk_1C00CEAB0 + 6 * v22);
        if ( (unsigned int)v23 > v24 )
        {
          if ( !v22 )
            break;
          v25 = v22 - 1;
        }
        else
        {
          if ( (_DWORD)v23 == v24 )
          {
            *(_DWORD *)&p_p->NdisReserved[20] = v22;
            v21 = *(unsigned int *)&p_p->NdisReserved[16];
            v10 = *(_DWORD *)&p_p->NdisReserved[16] | 4u;
            HIDWORD(v51) = 0;
            *(_DWORD *)&p_p->NdisReserved[16] = v10;
            if ( Type == 17 )
            {
              *(_QWORD *)&v49 = a1;
              *(_QWORD *)&v50 = 0LL;
            }
            else
            {
              v23 = 0LL;
              if ( Type == 5 )
                v23 = a1;
              *(_QWORD *)&v50 = v23;
            }
            *(_QWORD *)&v51 = p_p;
            if ( (v10 & 0x220) != 0 )
            {
              v23 = *(struct _NDIS_MINIPORT_BLOCK **)&p_p->NdisReserved[32];
              *((_QWORD *)&v50 + 1) = v23;
            }
            else
            {
              *((_QWORD *)&v50 + 1) = 0LL;
            }
            if ( (v21 & 0x40) != 0 )
            {
              v23 = *(struct _NDIS_MINIPORT_BLOCK **)&p_p->NdisReserved[32];
              *((_QWORD *)&v49 + 1) = v23;
            }
            else
            {
              *((_QWORD *)&v49 + 1) = 0LL;
            }
            DWORD2(v51) = 0;
            if ( (v21 & 0x840080) == 0 )
            {
              v23 = (struct _NDIS_MINIPORT_BLOCK *)&unk_1C00CEAB0;
              v26 = (__int64 (__fastcall *)(__int128 *))*((_QWORD *)&unk_1C00CEAB0 + 3 * v22 + 1);
              if ( v26 )
              {
                v15 = v26(&v49);
                if ( v15 == 1 )
                {
                  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v49, v10, v21, v27);
                  v16 = 3;
                }
                else
                {
                  v16 = BYTE8(v51);
                }
              }
            }
            break;
          }
          v21 = v22 + 1;
        }
        v22 = v21 + ((v25 - (unsigned int)v21 + 1) >> 1);
        if ( v22 > v25 )
          break;
      }
    }
    if ( (byte_1C00EE581 & 0x40) != 0 )
    {
      LODWORD(v48) = Oid;
      McTemplateK0jqxptdq_EtwWriteTransfer(
        (_DWORD)v23,
        v10,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_p,
        v15,
        v16,
        v48,
        v49,
        v50,
        (_QWORD)v51);
    }
    if ( v15 == 1 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v21, 0x14u, v47);
      AllRequestsCompletedEvent = v55;
    }
    else
    {
      v54 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v28 = 0;
      v29 = (a1->Flags & 0x80000) == 0;
      a1->MiniportThread = KeGetCurrentThread();
      if ( !v29 )
      {
        v28 = -1073676275;
        goto LABEL_70;
      }
      RequestType = p_p->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v28 = -2147483633;
LABEL_70:
        v37 = v54;
        goto LABEL_111;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v28 = -1073676280;
        goto LABEL_70;
      }
      v32 = PnPFlags & 0x20000;
      if ( !v32 && ((unsigned int)(a1->DriverPowerState - 2) > 2 || p_p->DATA.QUERY_INFORMATION.Oid == -50265855) )
      {
        ++a1->RequestCount;
        a1->PendingOidRequest = p_p;
        if ( p_p->DATA.QUERY_INFORMATION.Oid == -50265855
          && p_p->RequestType == NdisRequestSetInformation
          && p_p->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v44 = *(_DWORD *)p_p->DATA.QUERY_INFORMATION.InformationBuffer;
          if ( (unsigned int)(v44 - 1) <= 3 )
          {
            v45 = v54;
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v45);
            ndisWaitForPendingNblReturnLock(a1);
            v46 = v54;
            a1->PrevDriverPowerState = a1->DriverPowerState;
            a1->DriverPowerState = v44;
            KeReleaseSpinLock(&a1->PowerStateLock, v46);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v54);
          }
        }
        BaseMiniport = (int)v11->BaseMiniport;
        if ( (a1->Flags & 0x20000) != 0 )
        {
          BaseMiniport |= 0x2000u;
          LODWORD(v11->BaseMiniport) = BaseMiniport;
        }
        LODWORD(v11->BaseMiniport) = BaseMiniport | 0x10000;
        p_Lock = &a1->Lock;
        a1->MiniportThread = 0LL;
        if ( a1->MajorNdisVersion < 6u )
        {
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v28 = ndisMOidRequestToRequest(a1, p_p);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          v36 = v54;
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v54);
          Flags = a1->Flags;
          if ( (Flags & 0x20000) != 0 )
          {
            v28 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_p);
          }
          else if ( a1->WdfCxPowerManagement )
          {
            v28 = ndisMInvokeOidRequest(a1, p_p);
          }
          else
          {
            if ( a1->SelectiveSuspend )
            {
              if ( (Flags & 0x80u) == 0 )
                ndisWdmSetBusySync(a1, 33LL, Oid);
              else
                ndisWdfSetBusySync(a1, 33LL, Oid);
            }
            v28 = ndisMInvokeOidRequest(a1, p_p);
            if ( v28 != 259 && a1->SelectiveSuspend )
              ndisClearBusy(a1, 1LL, 33LL);
          }
          v36 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        }
        --a1->RequestCount;
        if ( v28 == 259 )
          goto LABEL_73;
        p_p = a1->PendingOidRequest;
        v37 = v36;
        a1->PendingOidRequest = 0LL;
LABEL_111:
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v37);
        goto LABEL_74;
      }
      if ( (RequestType & 0xFFFFFFFD) == 0 )
      {
        p_p->DATA.QUERY_INFORMATION.BytesWritten = 0;
LABEL_110:
        v28 = -1073741823;
        goto LABEL_70;
      }
      if ( RequestType == NdisRequestSetInformation )
      {
        p_p->DATA.QUERY_INFORMATION.BytesWritten = p_p->DATA.QUERY_INFORMATION.InformationBufferLength;
        v28 = -1071448017;
        if ( v32 )
          v28 = -1073741823;
        goto LABEL_95;
      }
      if ( RequestType == NdisRequestMethod )
      {
        p_p->DATA.METHOD_INFORMATION.BytesRead = 0;
        goto LABEL_110;
      }
LABEL_95:
      v36 = v54;
LABEL_73:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v36);
      AllRequestsCompletedEvent = v55;
      if ( v28 != 259 )
      {
LABEL_74:
        AllRequestsCompletedEvent = v55;
        if ( p_p )
        {
          memset(v52, 0, sizeof(v52));
          v53 = 0LL;
          if ( (byte_1C00EE581 & 0x40) != 0 )
            McTemplateK0jqxqdq_EtwWriteTransfer(
              v40,
              (unsigned int)&CompletingOidRequestMiniportEx,
              (_DWORD)a1 + 4008,
              (_DWORD)a1 + 4008,
              a1->IfIndex,
              a1->NetLuid.Value,
              p_p->DATA.QUERY_INFORMATION.Oid,
              v28);
          *(_QWORD *)&v53 = p_p;
          DWORD2(v53) = v28;
          *(_QWORD *)&v52[0] = a1;
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v52, v39, v41, v42);
        }
      }
    }
  }
}
