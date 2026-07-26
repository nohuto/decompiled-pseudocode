/*
 * XREFs of ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C0025CE0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C894 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C0001008 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     McTemplateK0jqxptdq_EtwWriteTransfer @ 0x1C00010C0 (McTemplateK0jqxptdq_EtwWriteTransfer.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C0025EBC (WPP_RECORDER_SF_Dqqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EFAE (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisWaitForPendingNblReturnLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0066FAC (-ndisWaitForPendingNblReturnLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C009F1FC (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FFD0 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF628 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C960 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *AllRequestsCompletedEvent; // r13
  _NDIS_OID_REQUEST *p_Blink; // r14
  _LIST_ENTRY *v4; // r15
  char v5; // bl
  unsigned int WSyncFlags; // edx
  _LIST_ENTRY *p_OidRequestList; // rcx
  _LIST_ENTRY *Flink; // r8
  KIRQL v9; // dl
  _NDIS_OID_REQUEST *v10; // rsi
  __int64 v11; // rdx
  UCHAR Type; // r11
  NDIS_OID Oid; // r9d
  char v14; // bl
  char v15; // r13
  unsigned int Timeout; // eax
  unsigned int CheckForHangSeconds; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // eax
  struct _NDIS_MINIPORT_BLOCK *v22; // rcx
  NDIS_OID v23; // r9d
  unsigned int v24; // r10d
  int v25; // r8d
  __int64 (__fastcall *v26)(__int128 *); // rax
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  bool v30; // zf
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int PnPFlags; // ecx
  int v33; // ecx
  _LIST_ENTRY *v34; // rcx
  unsigned __int64 *p_Lock; // rcx
  unsigned int Flags; // eax
  KIRQL v37; // al
  KIRQL v38; // dl
  _LIST_ENTRY *v39; // rax
  KIRQL v40; // dl
  KIRQL v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  KIRQL v46; // dl
  _DEVICE_POWER_STATE v47; // esi
  KIRQL v48; // dl
  KIRQL v49; // dl
  int v50; // [rsp+20h] [rbp-79h]
  __int128 v51; // [rsp+50h] [rbp-49h] BYREF
  __int128 v52; // [rsp+60h] [rbp-39h]
  __int128 v53; // [rsp+70h] [rbp-29h]
  _OWORD v54[2]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v55; // [rsp+A0h] [rbp+7h]
  unsigned __int8 v56; // [rsp+100h] [rbp+67h] BYREF
  NDIS_OID v57; // [rsp+108h] [rbp+6Fh]
  struct _KEVENT *v58; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY *v59; // [rsp+118h] [rbp+7Fh]

  AllRequestsCompletedEvent = 0LL;
  v58 = 0LL;
  while ( 1 )
  {
    p_Blink = 0LL;
    v4 = 0LL;
    v5 = 0;
    v56 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (WSyncFlags & 1) != 0 )
    {
      v41 = v56;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v41);
      v10 = 0LL;
      v59 = 0LL;
    }
    else
    {
      p_OidRequestList = &a1->OidRequestList;
      Flink = a1->OidRequestList.Flink;
      if ( Flink == &a1->OidRequestList || (a1->PnPFlags & 0x20000) != 0 )
      {
        if ( (a1->PnPFlags & 0x20000) != 0 && (v5 = 1, a1->AllRequestsCompletedEvent) )
        {
          v46 = v56;
          AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
          v58 = AllRequestsCompletedEvent;
          a1->AllRequestsCompletedEvent = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, v46);
          v10 = 0LL;
          v59 = 0LL;
        }
        else
        {
          v9 = v56;
          v59 = 0LL;
          v10 = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, v9);
          if ( !v5 )
            goto LABEL_6;
        }
        ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
      }
      else
      {
        v4 = a1->OidRequestList.Flink;
        a1->WSyncFlags = WSyncFlags | 1;
        if ( Flink->Blink != p_OidRequestList || (v39 = Flink->Flink, Flink->Flink->Blink != Flink) )
          __fastfail(3u);
        v40 = v56;
        p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        p_OidRequestList->Flink = v39;
        v39->Blink = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v40);
        v59 = v4;
        v10 = p_Blink;
      }
    }
LABEL_6:
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      v58 = 0LL;
    }
    if ( !v4 )
      break;
    Type = a1->Header.Type;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    v14 = 0;
    v15 = 0;
    v57 = Oid;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    if ( Type == 17 )
    {
      Timeout = p_Blink->Timeout;
      if ( Timeout < 0x3C )
      {
        CheckForHangSeconds = a1->CheckForHangSeconds;
        if ( CheckForHangSeconds )
        {
          v18 = CheckForHangSeconds + Timeout - 1;
          if ( CheckForHangSeconds == 2 )
          {
            v19 = v18 >> 1;
          }
          else
          {
            v11 = v18 % CheckForHangSeconds;
            v19 = v18 / CheckForHangSeconds;
          }
          a1->CFHangXTicks = v19;
        }
      }
    }
    *(_DWORD *)&p_Blink->NdisReserved[16] &= ~4u;
    v20 = 0;
    v21 = 73;
    if ( a1->Header.Type == 17 )
      v22 = a1;
    else
      v22 = *(struct _NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    if ( !p_Blink->PortNumber || (v22->InfoFlags & 0x200) == 0 )
    {
      v23 = p_Blink->DATA.QUERY_INFORMATION.Oid;
      v24 = 146;
      while ( v21 >= v20 )
      {
        v11 = 3LL * v21;
        v22 = (struct _NDIS_MINIPORT_BLOCK *)&unk_1C00D5E60;
        if ( *((_DWORD *)&unk_1C00D5E60 + 6 * v21) > v23 )
        {
          if ( !v21 )
            break;
          v24 = v21 - 1;
        }
        else
        {
          if ( *((_DWORD *)&unk_1C00D5E60 + 6 * v21) == v23 )
          {
            *(_DWORD *)&p_Blink->NdisReserved[20] = v21;
            v22 = 0LL;
            v25 = *(_DWORD *)&p_Blink->NdisReserved[16];
            HIDWORD(v53) = 0;
            *(_DWORD *)&p_Blink->NdisReserved[16] = v25 | 4;
            if ( Type == 17 )
            {
              *(_QWORD *)&v51 = a1;
              *(_QWORD *)&v52 = 0LL;
            }
            else
            {
              if ( Type == 5 )
                v22 = a1;
              *(_QWORD *)&v52 = v22;
              v22 = 0LL;
            }
            *(_QWORD *)&v53 = p_Blink;
            if ( (v25 & 0x220) != 0 )
            {
              v22 = *(struct _NDIS_MINIPORT_BLOCK **)&p_Blink->NdisReserved[32];
              v11 = (__int64)&p_Blink->NdisReserved[32];
            }
            else
            {
              v11 = (__int64)&v10->NdisReserved[32];
            }
            *((_QWORD *)&v52 + 1) = v22;
            if ( (v25 & 0x40) != 0 )
            {
              v22 = *(struct _NDIS_MINIPORT_BLOCK **)v11;
              *((_QWORD *)&v51 + 1) = *(_QWORD *)v11;
            }
            else
            {
              *((_QWORD *)&v51 + 1) = 0LL;
            }
            DWORD2(v53) = 0;
            if ( (v25 & 0x840080) == 0 )
            {
              v22 = (struct _NDIS_MINIPORT_BLOCK *)&unk_1C00D5E60;
              v26 = (__int64 (__fastcall *)(__int128 *))*((_QWORD *)&unk_1C00D5E60 + 3 * v21 + 1);
              if ( v26 )
              {
                v14 = v26(&v51);
                if ( v14 == 1 )
                {
                  HIDWORD(v53) |= 4u;
                  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v51, v11, v27, v28);
                  v15 = 3;
                }
                else
                {
                  v15 = BYTE8(v53);
                }
              }
            }
            break;
          }
          v20 = v21 + 1;
        }
        v21 = v20 + ((v24 - v20 + 1) >> 1);
        if ( v21 > v24 )
          break;
      }
      LOBYTE(Oid) = v57;
    }
    if ( (byte_1C00F7641 & 0x40) != 0 )
      McTemplateK0jqxptdq_EtwWriteTransfer(
        (__int64)v22,
        v11,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v14,
        v15,
        Oid);
    if ( v14 == 1 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v57, 20, v50, v57, (char)p_Blink, (char)a1, v15);
      AllRequestsCompletedEvent = v58;
    }
    else
    {
      v56 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v29 = 0;
      v30 = (a1->Flags & 0x80000) == 0;
      a1->MiniportThread = KeGetCurrentThread();
      if ( !v30 )
      {
        v29 = -1073676275;
        goto LABEL_73;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v29 = -2147483633;
LABEL_73:
        v38 = v56;
        goto LABEL_110;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v29 = -1073676280;
        goto LABEL_73;
      }
      v33 = PnPFlags & 0x20000;
      if ( !v33 && ((unsigned int)(a1->DriverPowerState - 2) > 2 || p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855) )
      {
        ++a1->RequestCount;
        a1->PendingOidRequest = p_Blink;
        if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855
          && p_Blink->RequestType == NdisRequestSetInformation
          && p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v47 = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
          if ( (unsigned int)(v47 - 1) <= 3 )
          {
            v48 = v56;
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v48);
            ndisWaitForPendingNblReturnLock(a1);
            v49 = v56;
            a1->PrevDriverPowerState = a1->DriverPowerState;
            a1->DriverPowerState = v47;
            KeReleaseSpinLock(&a1->PowerStateLock, v49);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v56);
          }
        }
        if ( (a1->Flags & 0x20000) != 0 )
        {
          LODWORD(v4[1].Flink) |= 0x2000u;
          v34 = v4 + 1;
        }
        else
        {
          v34 = v59 + 1;
        }
        LODWORD(v34->Flink) |= 0x10000u;
        p_Lock = &a1->Lock;
        a1->MiniportThread = 0LL;
        if ( a1->MajorNdisVersion < 6u )
        {
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v29 = ndisMOidRequestToRequest(a1, p_Blink);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          v37 = v56;
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v56);
          Flags = a1->Flags;
          if ( (Flags & 0x20000) != 0 )
          {
            v29 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
          }
          else if ( (Flags & 0x80u) != 0 )
          {
            v29 = ndisMInvokeOidRequest(a1, p_Blink);
          }
          else
          {
            if ( a1->SelectiveSuspend )
              ndisWdmSetBusySync(a1, 33LL, v57);
            v29 = ndisMInvokeOidRequest(a1, p_Blink);
            if ( v29 != 259 && a1->SelectiveSuspend )
              ndisClearBusy(a1, 1LL, 33LL);
          }
          v37 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        }
        --a1->RequestCount;
        if ( v29 == 259 )
          goto LABEL_75;
        p_Blink = a1->PendingOidRequest;
        v38 = v37;
        a1->PendingOidRequest = 0LL;
LABEL_110:
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v38);
        goto LABEL_76;
      }
      if ( (RequestType & 0xFFFFFFFD) == 0 )
      {
        p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
LABEL_109:
        v29 = -1073741823;
        goto LABEL_73;
      }
      if ( RequestType == NdisRequestSetInformation )
      {
        p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
        v29 = -1071448017;
        if ( v33 )
          v29 = -1073741823;
        goto LABEL_97;
      }
      if ( RequestType == NdisRequestMethod )
      {
        p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
        goto LABEL_109;
      }
LABEL_97:
      v37 = v56;
LABEL_75:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v37);
      AllRequestsCompletedEvent = v58;
      if ( v29 != 259 )
      {
LABEL_76:
        AllRequestsCompletedEvent = v58;
        if ( p_Blink )
        {
          memset(v54, 0, sizeof(v54));
          v55 = 0LL;
          if ( (byte_1C00F7641 & 0x40) != 0 )
            McTemplateK0jqxqdq_EtwWriteTransfer(
              v43,
              (__int64)&CompletingOidRequestMiniportEx,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              p_Blink->DATA.QUERY_INFORMATION.Oid,
              v29);
          *(_QWORD *)&v55 = p_Blink;
          DWORD2(v55) = v29;
          *(_QWORD *)&v54[0] = a1;
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v54, v42, v44, v45);
        }
      }
    }
  }
}
