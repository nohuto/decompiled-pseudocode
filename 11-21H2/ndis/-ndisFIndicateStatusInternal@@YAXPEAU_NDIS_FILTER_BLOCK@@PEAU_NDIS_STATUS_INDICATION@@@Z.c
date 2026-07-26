/*
 * XREFs of ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790
 * Callers:
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001B994 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x1C001C770 (-ndisFIndicateStatusWrapper@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001BCF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001BD40 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001CB88 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E6B0 (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C002505C (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0061D68 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C008B414 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008BB30 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008D700 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008D790 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008D7E4 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00ABE58 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B23A8 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C00B2460 (-ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z.c)
 */

void __fastcall ndisFIndicateStatusInternal(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  BOOL v2; // ebx
  int v3; // r15d
  int StatusCode; // esi
  unsigned int StatusBufferSize; // r9d
  _NDIS_MINIPORT_BLOCK *Miniport; // r13
  int *StatusBuffer; // rdi
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  KIRQL v11; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v13; // rbx
  unsigned int v14; // r14d
  KSPIN_LOCK *p_Lock; // r15
  unsigned int Flags; // eax
  int v17; // eax
  struct _NDIS_STATUS_INDICATION *v18; // r14
  struct _NDIS_FILTER_BLOCK *v19; // r12
  char v20; // si
  KIRQL v21; // dl
  unsigned int v22; // eax
  char v23; // bl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // eax
  _NET_IF_MEDIA_CONNECT_STATE v25; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v26; // ecx
  int v27; // edx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // edx
  int v29; // ecx
  char v30; // al
  unsigned __int8 v31; // al
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-60h] BYREF
  int v33; // [rsp+24h] [rbp-5Ch]
  BOOL v34; // [rsp+28h] [rbp-58h]
  unsigned int v35; // [rsp+2Ch] [rbp-54h]
  bool v36; // [rsp+30h] [rbp-50h]
  char v37; // [rsp+31h] [rbp-4Fh]
  struct _NDIS_STATUS_INDICATION *v38; // [rsp+38h] [rbp-48h]
  struct _NDIS_FILTER_BLOCK *v39; // [rsp+40h] [rbp-40h]
  int v40; // [rsp+48h] [rbp-38h] BYREF
  int v41; // [rsp+4Ch] [rbp-34h]
  _NET_IF_MEDIA_DUPLEX_STATE v42; // [rsp+50h] [rbp-30h]
  int v43; // [rsp+54h] [rbp-2Ch]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+58h] [rbp-28h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+60h] [rbp-20h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+68h] [rbp-18h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+6Ch] [rbp-14h]

  StatusCode = a2->StatusCode;
  LOBYTE(v2) = 0;
  StatusBufferSize = a2->StatusBufferSize;
  LOBYTE(v3) = 0;
  Miniport = a1->Miniport;
  StatusBuffer = (int *)a2->StatusBuffer;
  v38 = a2;
  v39 = a1;
  v35 = StatusBufferSize;
  v34 = v2;
  v33 = v3;
  if ( StatusCode == 1073873072 )
  {
    if ( a2->SourceHandle == (void *)0x1C0000000LL )
    {
      ndisIfUpdateCurrentMacAddress(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)StatusBuffer);
      goto LABEL_3;
    }
  }
  else
  {
    if ( StatusCode != 1073873073 )
      goto LABEL_3;
    if ( a2->SourceHandle == (void *)0x1C0000000LL )
    {
      ndisIfUpdateL2MtuSize(a1->IfBlock, *StatusBuffer);
LABEL_3:
      MediaDuplexStateIndicateUp = a1->MediaDuplexStateIndicateUp;
      v41 = 0;
      v43 = 0;
      v42 = MediaDuplexStateIndicateUp;
      XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
      RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
      PauseFunctionsIndicateUp = a1->PauseFunctionsIndicateUp;
      AutoNegotiationFlagsIndicateUp = a1->AutoNegotiationFlagsIndicateUp;
      v40 = 2621824;
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->LockThread = KeGetCurrentThread();
      switch ( StatusCode )
      {
        case 1073807372:
          v41 = 2;
          break;
        case 1073807371:
          v41 = 1;
          break;
        case 1073807383:
          goto LABEL_32;
        default:
          goto LABEL_6;
      }
      a2->StatusBuffer = &v40;
      StatusBuffer = &v40;
      a2->StatusCode = 1073807383;
      a2->StatusBufferSize = 40;
      StatusCode = 1073807383;
      v35 = 40;
LABEL_32:
      MediaConnectStateIndicateUp = a1->MediaConnectStateIndicateUp;
      v25 = StatusBuffer[1];
      if ( MediaConnectStateIndicateUp != v25 )
      {
        if ( v25 == MediaConnectStateConnected )
        {
          LOBYTE(v3) = 1;
          v33 = v3;
        }
        else
        {
          LOBYTE(v2) = MediaConnectStateIndicateUp == MediaConnectStateConnected;
          v34 = MediaConnectStateIndicateUp == MediaConnectStateConnected;
        }
      }
      a1->MediaConnectStateIndicateUp = v25;
      a1->MediaDuplexStateIndicateUp = StatusBuffer[2];
      a1->XmitLinkSpeedIndicateUp = *((_QWORD *)StatusBuffer + 2);
      a1->RcvLinkSpeedIndicateUp = *((_QWORD *)StatusBuffer + 3);
      a1->PauseFunctionsIndicateUp = StatusBuffer[8];
      a1->AutoNegotiationFlagsIndicateUp = StatusBuffer[9];
      a1->IfBlock->MediaConnectState = v25;
      a1->IfBlock->MediaDuplexState = a1->MediaDuplexStateIndicateUp;
      a1->IfBlock->RcvLinkSpeed = a1->RcvLinkSpeedIndicateUp;
      a1->IfBlock->XmitLinkSpeed = a1->XmitLinkSpeedIndicateUp;
LABEL_6:
      v11 = NewIrql[0];
      a1->LockThread = 0LL;
      v37 = v3;
      v36 = v2;
      KeReleaseSpinLock(&a1->Lock, v11);
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, a1, FPNPREF_FSTATUS);
      v13 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v14 = v35;
        p_Lock = &HigherFilterWithPnpRef->Lock;
        while ( 1 )
        {
          NDIS_ACQUIRE_FILTER_SPIN_LOCK(v13, NewIrql);
          Flags = v13->Flags;
          v13->LockThread = 0LL;
          if ( (Flags & 0x2000) == 0 )
            break;
          KeReleaseSpinLock(p_Lock, NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
            KeStallExecutionProcessor(1u);
          else
            NdisMSleep(0x32u);
        }
        v35 = v14;
        v13->Flags = Flags | 0x2000;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        v18 = v38;
        v19 = v39;
        if ( StatusCode == 1073807383 )
        {
          if ( StatusBuffer && v35 >= 0x28 )
          {
            MediaConnectState = v13->MediaConnectState;
            v29 = StatusBuffer[1];
            if ( MediaConnectState != v29 )
            {
              if ( v29 == 1 )
              {
                LOBYTE(v17) = 1;
                v33 = v17;
              }
              else
              {
                v30 = v34;
                if ( MediaConnectState == MediaConnectStateConnected )
                  v30 = 1;
                LOBYTE(v34) = v30;
              }
            }
            v13->MediaConnectState = v29;
            v13->MediaDuplexState = StatusBuffer[2];
            v13->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
            v13->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
            v13->PauseFunctions = StatusBuffer[8];
            v13->AutoNegotiationFlags = StatusBuffer[9];
          }
          goto LABEL_15;
        }
        LOBYTE(v17) = v37;
        v33 = v17;
        LOBYTE(v34) = v36;
        if ( StatusCode == 1073872902 )
        {
          v20 = v37;
          LOBYTE(v34) = v36;
          if ( ndisFIndicateOffloadChange(v13, StatusBuffer, v35) )
            goto LABEL_16;
        }
        else
        {
          switch ( StatusCode )
          {
            case 1073938515:
              ndisFilterIndicatePMCapabilities(v13, v38);
              goto LABEL_15;
            case 1073938513:
              v31 = ndisFilterIndicateWoLPatternReject(v13, v38);
              break;
            case 1073938514:
              v31 = ndisFilterIndicatePMOffloadReject(v13, v38);
              break;
            default:
              if ( (unsigned int)(StatusCode - 1074073600) > 1 )
              {
LABEL_15:
                v20 = v33;
LABEL_16:
                if ( v13->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
                  ndisFInvokeStatus(v13, v18);
                else
                  ndisFIndicateStatusInternal(v13, v18);
                if ( v34 )
                  ndisSwapFilterHandlersForMediaDisconnect(Miniport, v19, v13);
                if ( v20 )
                  ndisRestoreFilterHandlersForMediaDisconnect(Miniport, v19, v13);
                goto LABEL_22;
              }
              v31 = ndisFIndicateTimestampChange(v13, StatusCode, StatusBuffer, v35);
              break;
          }
          if ( v31 )
            goto LABEL_15;
        }
LABEL_22:
        KeAcquireSpinLockAtDpcLevel(p_Lock);
        v21 = NewIrql[0];
        v13->Flags &= ~0x2000u;
        v13->LockThread = 0LL;
        KeReleaseSpinLock(p_Lock, v21);
        ndisDereferenceRef(&v13->PnPRef.SpinLock, 8u);
        return;
      }
      ndisMAcquireStInLockWithSpinLock(Miniport, NewIrql);
      v22 = v35;
      if ( StatusCode == 1073807383 )
      {
        if ( StatusBuffer )
        {
          if ( v35 >= 0x28 )
          {
            v26 = Miniport->MediaConnectState;
            v27 = StatusBuffer[1];
            if ( v26 != v27 )
            {
              if ( v26 == MediaConnectStateConnected )
              {
                v23 = 1;
LABEL_26:
                a2->Flags |= 2u;
                if ( StatusCode != 1073872902 )
                {
LABEL_27:
                  ndisIndicateStatusInternal(Miniport, a2, 2u);
                  if ( v23 )
                    ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
                  if ( (_BYTE)v3 )
                    ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
                  goto LABEL_31;
                }
                if ( v22 >= 0x70
                  && *(_BYTE *)StatusBuffer == 0xA7
                  && *((_WORD *)StatusBuffer + 1) >= 0x70u
                  && *((_BYTE *)StatusBuffer + 1) )
                {
                  if ( Miniport->Offload )
                    goto LABEL_27;
                  ndisMAllocateMiniportOffload(Miniport);
                }
LABEL_31:
                ndisMReleaseStInLockAndSpinLock(Miniport, NewIrql[0]);
                return;
              }
              if ( v27 == 1 )
                LOBYTE(v3) = 1;
            }
          }
        }
      }
      v23 = v34;
      goto LABEL_26;
    }
  }
}
