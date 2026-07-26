/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0026320 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C003A380 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0121F04 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001BCF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001BD40 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001CB88 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E6B0 (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C002505C (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00263F8 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029554 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0061D68 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C006683C (-ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00668E4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066B8C (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C0066C08 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066FAC (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0069978 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C00763B4 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C0080BB8 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C008B414 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C008BBFC (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C008BD60 (-ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008D700 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008D790 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008D7E4 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008DE48 (-ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008DEE0 (-ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@.c)
 *     ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008DFE0 (-ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E0BC (-ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E57C (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00ABE58 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C010C49C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int StatusCode; // edi
  int *StatusBuffer; // r15
  unsigned __int8 updated; // r12
  unsigned int StatusBufferSize; // r13d
  const struct _GUID *v8; // rdx
  int v9; // eax
  KSPIN_LOCK *v10; // rsi
  bool v11; // zf
  KIRQL v12; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rsi
  unsigned int Flags; // eax
  unsigned __int8 v15; // al
  bool v16; // r12
  char v17; // di
  KIRQL v18; // dl
  int v19; // edx
  bool v20; // di
  char v21; // di
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r9
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // al
  KIRQL v26; // dl
  unsigned __int8 v27; // al
  KIRQL v28; // dl
  unsigned __int8 v29; // al
  KIRQL v30; // dl
  char v31; // si
  __int64 v32; // rdx
  size_t v33; // r8
  KIRQL v34; // dl
  unsigned __int8 v35; // al
  KIRQL v36; // dl
  unsigned __int16 v37; // r9
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *SourceHandle; // rcx
  _OWORD *v39; // rax
  KIRQL v40; // dl
  int v41; // edi
  int v42; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  bool v48; // cl
  int v49; // eax
  int v50; // eax
  unsigned __int8 v51; // [rsp+20h] [rbp-49h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-29h] BYREF
  int v53; // [rsp+44h] [rbp-25h]
  BOOL v54; // [rsp+48h] [rbp-21h]
  int v55; // [rsp+58h] [rbp-11h] BYREF
  int v56; // [rsp+5Ch] [rbp-Dh]
  int v57; // [rsp+60h] [rbp-9h]
  int v58; // [rsp+64h] [rbp-5h]
  __int64 v59; // [rsp+68h] [rbp-1h]
  __int64 v60; // [rsp+70h] [rbp+7h]
  int v61; // [rsp+78h] [rbp+Fh]
  int v62; // [rsp+7Ch] [rbp+13h]

  StatusCode = a2->StatusCode;
  StatusBuffer = (int *)a2->StatusBuffer;
  updated = 1;
  StatusBufferSize = a2->StatusBufferSize;
  NewIrql[0] = 0;
  LOBYTE(v54) = 0;
  LOBYTE(v53) = 0;
  v8 = &WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      24,
      178,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      StatusCode);
    v8 = &WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids;
  }
  v9 = *((_DWORD *)a1 + 87);
  v56 = 0;
  v58 = 0;
  v11 = a2->Header.Type == 0x98;
  v57 = v9;
  v59 = *((_QWORD *)a1 + 345);
  v60 = *((_QWORD *)a1 + 346);
  v61 = *((_DWORD *)a1 + 203);
  v62 = *((_DWORD *)a1 + 204);
  v55 = 2621824;
  if ( !v11 || a2->Header.Size < 0x70u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v22 = 179;
    goto LABEL_196;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize >= 4 )
      goto LABEL_9;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v22 = 180;
LABEL_196:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x18u,
      v22,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
    return;
  }
  if ( (unsigned int)(StatusCode - 1073872902) <= 1 )
  {
    updated = ndisMIndicateOffloadChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = 181;
LABEL_70:
        v24 = 4;
LABEL_72:
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          0x18u,
          v23,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
      v25 = ndisMIndicateReceiveFilterCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      v26 = NewIrql[0];
      v10 = (KSPIN_LOCK *)(a1 + 24);
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v25;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v26);
      if ( !updated )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = 183;
          goto LABEL_70;
        }
        return;
      }
LABEL_10:
      if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
        v27 = ndisMIndicateHwTimestampCapabilitiesChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                StatusCode,
                StatusBuffer,
                StatusBufferSize,
                0,
                0LL);
        v28 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v27;
        KeReleaseSpinLock(v10, v28);
        if ( !updated )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v23 = 184;
            goto LABEL_70;
          }
          return;
        }
      }
      if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
        v29 = ndisMIndicateNicSwitchCapsChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                StatusCode,
                StatusBuffer,
                StatusBufferSize,
                0);
        v30 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v29;
        KeReleaseSpinLock(v10, v30);
        if ( !updated )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v23 = 185;
            goto LABEL_70;
          }
          return;
        }
      }
      switch ( StatusCode )
      {
        case 1073873408:
          updated = ndisMIndicatePDConfigChange(
                      (struct _NDIS_MINIPORT_BLOCK *)a1,
                      (int)v8,
                      StatusBuffer,
                      StatusBufferSize,
                      v51);
          if ( !updated )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v23 = 186;
              goto LABEL_70;
            }
            return;
          }
          break;
        case 1076105216:
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
          if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)a1) )
          {
            v32 = *((_QWORD *)a1 + 69);
            v33 = StatusBufferSize;
            if ( StatusBufferSize >= *(unsigned __int16 *)(v32 + 12) )
              v33 = *(unsigned __int16 *)(v32 + 12);
            memmove((void *)(v32 + *(unsigned int *)(v32 + 16)), StatusBuffer, v33);
            v31 = 1;
          }
          else
          {
            v31 = 0;
          }
          v34 = NewIrql[0];
          *((_QWORD *)a1 + 65) = 0LL;
          updated = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v34);
          if ( !v31 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return;
            v23 = 187;
            goto LABEL_71;
          }
          break;
        case 1073872995:
          v20 = *(_BYTE *)StatusBuffer != 0;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 4;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v8,
              24,
              188,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              v20);
          }
          ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)a1, v20);
          ndisIfUpdateInterfaceHiddenFlag(*((struct _NDIS_IF_BLOCK **)a1 + 505), v20);
          return;
        default:
          if ( (unsigned int)(StatusCode - 1073873056) <= 1 )
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
            v35 = ndisMIndicateQosParametersChange(
                    (struct _NDIS_MINIPORT_BLOCK *)a1,
                    StatusCode,
                    (struct _NDIS_QOS_PARAMETERS *)StatusBuffer,
                    StatusBufferSize);
            v36 = NewIrql[0];
            *((_QWORD *)a1 + 65) = 0LL;
            updated = v35;
            KeReleaseSpinLock(v10, v36);
            if ( !updated )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return;
              v23 = 189;
              goto LABEL_71;
            }
          }
          if ( StatusCode == 1073872944 )
          {
            updated = 0;
            if ( StatusBufferSize >= 0x444
              && *(_BYTE *)StatusBuffer == 0x80
              && *((_WORD *)StatusBuffer + 1) >= 0x444u
              && *((_BYTE *)StatusBuffer + 1) >= 2u
              && (StatusBuffer[1] & 0xFFFF0000) == 0x100000 )
            {
              updated = ndisUpdateRcvFilterQueueParameters(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)StatusBuffer);
            }
            if ( !updated )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return;
              v23 = 190;
              goto LABEL_71;
            }
          }
          else
          {
            if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
            {
              updated = ndisMIndicateTcpConnectionOffloadChange(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          StatusCode,
                          StatusBuffer,
                          StatusBufferSize);
              if ( !updated )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  return;
                v23 = 191;
LABEL_71:
                v24 = 3;
                goto LABEL_72;
              }
            }
            switch ( StatusCode )
            {
              case 1073938515:
                ndisMIndicatePMCapabilities((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
                goto LABEL_24;
              case 1073938516:
                ndisMIndicatePMHardwareCapabilities((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
                goto LABEL_24;
              case 1073938513:
                ndisMIndicateWoLPatternReject((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
                goto LABEL_24;
              case 1073938514:
                ndisMIndicatePMOffloadReject((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
                goto LABEL_24;
            }
            if ( StatusCode != 1073938517 )
            {
              if ( (unsigned int)(StatusCode - 1073873072) <= 1 )
              {
                SourceHandle = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->SourceHandle;
                if ( SourceHandle != (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)0x1C0000000LL )
                {
                  if ( StatusCode == 1073873072 )
                  {
                    if ( !ndisValidateMacAddressChange((struct _NDIS_MINIPORT_BLOCK *)a1, a2) )
                    {
                      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                        return;
                      v37 = 193;
                      goto LABEL_118;
                    }
                  }
                  else if ( StatusCode == 1073873073
                         && (*((_BYTE *)a1 + 32) <= 6u && (*((_BYTE *)a1 + 32) != 6 || *((_BYTE *)a1 + 33) < 0x32u)
                          || a2->Header.Type != 0x98
                          || !a2->Header.Revision
                          || a2->Header.Size < 0x70u
                          || a2->DestinationHandle
                          || SourceHandle != a1
                          || a2->PortNumber
                          || a2->StatusBufferSize != 4) )
                  {
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                      return;
                    v37 = 194;
LABEL_118:
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      3u,
                      0x18u,
                      v37,
                      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                      a1);
                    return;
                  }
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
                  if ( !*((_BYTE *)a1 + 5320) )
                  {
                    if ( !ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au) )
                    {
LABEL_142:
                      v40 = NewIrql[0];
                      *((_QWORD *)a1 + 65) = 0LL;
                      KeReleaseSpinLock(v10, v40);
                      return;
                    }
                    if ( !ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)a1, MPIFREF_CHANGEMACMTU) )
                    {
                      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au);
                      goto LABEL_142;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1322), (WORK_QUEUE_TYPE)40);
                    *((_BYTE *)a1 + 5320) = 1;
                  }
                  v41 = StatusCode - 1073873072;
                  if ( v41 )
                  {
                    if ( v41 == 1 )
                    {
                      a1[1340] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
                      *((_BYTE *)a1 + 5322) = 1;
                    }
                  }
                  else
                  {
                    v39 = a2->StatusBuffer;
                    *(_OWORD *)(a1 + 1331) = *v39;
                    *(_OWORD *)(a1 + 1335) = v39[1];
                    *((_WORD *)a1 + 2678) = *((_WORD *)v39 + 16);
                    *((_BYTE *)a1 + 5321) = 1;
                  }
                  goto LABEL_142;
                }
              }
LABEL_24:
              v11 = StatusCode == 1073807372;
              if ( StatusCode == 1073807372 )
              {
                v56 = 2;
                goto LABEL_150;
              }
LABEL_25:
              if ( StatusCode == 1073807371 )
              {
                v56 = 1;
              }
              else if ( !v11 )
              {
                goto LABEL_27;
              }
LABEL_150:
              a2->StatusBuffer = &v55;
              StatusBuffer = &v55;
              a2->StatusCode = 1073807383;
              a2->StatusBufferSize = 40;
              StatusBufferSize = 40;
              StatusCode = 1073807383;
LABEL_27:
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
              if ( StatusCode == 1073807383 )
              {
                *((_BYTE *)a1 + 88) |= 0x18u;
                v42 = StatusBuffer[1];
                if ( v42 == 1 && *((_DWORD *)a1 + 86) != 1 )
                {
                  *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
                  v42 = StatusBuffer[1];
                }
                *((_DWORD *)a1 + 86) = v42;
                *((_DWORD *)a1 + 87) = StatusBuffer[2];
                *((_QWORD *)a1 + 345) = *((_QWORD *)StatusBuffer + 2);
                *((_QWORD *)a1 + 346) = *((_QWORD *)StatusBuffer + 3);
                *((_DWORD *)a1 + 203) = StatusBuffer[8];
                *((_DWORD *)a1 + 204) = StatusBuffer[9];
              }
              else if ( StatusCode == 1073938437 )
              {
                *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
              }
              v12 = NewIrql[0];
              *((_QWORD *)a1 + 65) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v12);
              HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 9u);
              if ( HigherFilterWithPnpRef )
              {
                while ( 1 )
                {
                  NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilterWithPnpRef, NewIrql);
                  Flags = HigherFilterWithPnpRef->Flags;
                  HigherFilterWithPnpRef->LockThread = 0LL;
                  if ( (Flags & 0x2000) == 0 )
                    break;
                  KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, NewIrql[0]);
                  if ( KeGetCurrentIrql() == 2 )
                    KeStallExecutionProcessor(1u);
                  else
                    NdisMSleep(0x32u);
                }
                HigherFilterWithPnpRef->Flags = Flags | 0x2000;
                KeReleaseSpinLockFromDpcLevel(&HigherFilterWithPnpRef->Lock);
                if ( a2->SourceHandle == &ndisIntReqGeneric )
                {
                  if ( StatusCode != 1073807383 )
                    goto LABEL_34;
                  StatusBuffer[1] = *((_DWORD *)a1 + 86);
                }
                else if ( StatusCode != 1073807383 )
                {
LABEL_34:
                  if ( StatusCode != 1073938515 )
                  {
                    if ( StatusCode == 1073938513 )
                    {
                      v15 = ndisFilterIndicateWoLPatternReject(HigherFilterWithPnpRef, a2);
                    }
                    else
                    {
                      v15 = updated;
                      if ( StatusCode == 1073938514 )
                      {
                        v15 = ndisFilterIndicatePMOffloadReject(HigherFilterWithPnpRef, a2);
                      }
                      else
                      {
                        if ( StatusCode != 1073872902 )
                        {
                          if ( StatusCode == 1074073600 || (v16 = 0, LOBYTE(v53) = 0, StatusCode == 1074073601) )
                          {
                            v15 = ndisFIndicateTimestampChange(
                                    HigherFilterWithPnpRef,
                                    StatusCode,
                                    StatusBuffer,
                                    StatusBufferSize);
                            v16 = 0;
                            v17 = 0;
                            goto LABEL_41;
                          }
LABEL_40:
                          v17 = v53;
LABEL_41:
                          if ( v15 )
                          {
                            if ( HigherFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
                              ndisFInvokeStatus(HigherFilterWithPnpRef, a2);
                            else
                              ndisFIndicateStatusInternal(HigherFilterWithPnpRef, a2);
                            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
                            *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                            if ( v16 )
                              ndisSwapFilterHandlersForMediaDisconnect(
                                (struct _NDIS_MINIPORT_BLOCK *)a1,
                                0LL,
                                HigherFilterWithPnpRef);
                            if ( v17 )
                              ndisRestoreFilterHandlersForMediaDisconnect(
                                (struct _NDIS_MINIPORT_BLOCK *)a1,
                                0LL,
                                HigherFilterWithPnpRef);
                            *((_QWORD *)a1 + 65) = 0LL;
                            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
                          }
                          KeAcquireSpinLockAtDpcLevel(&HigherFilterWithPnpRef->Lock);
                          v18 = NewIrql[0];
                          HigherFilterWithPnpRef->Flags &= ~0x2000u;
                          HigherFilterWithPnpRef->LockThread = 0LL;
                          KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v18);
                          ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 9u);
LABEL_50:
                          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          {
                            LOBYTE(v19) = 4;
                            WPP_RECORDER_SF_qD(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              v19,
                              24,
                              195,
                              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                              (char)a1,
                              a2->StatusCode);
                          }
                          return;
                        }
                        v15 = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, StatusBuffer, StatusBufferSize);
                      }
                    }
                    v16 = 0;
                    LOBYTE(v53) = 0;
                    goto LABEL_40;
                  }
                  ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, a2);
                  LOBYTE(v54) = 0;
                  LOBYTE(v53) = 0;
                  goto LABEL_172;
                }
                if ( StatusBufferSize == -2 )
                {
                  StatusBufferSize = 40;
                  a2->StatusBufferSize = 40;
                }
                v15 = updated;
                if ( !StatusBuffer || StatusBufferSize < 0x28 )
                  goto LABEL_173;
                MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
                v44 = StatusBuffer[1];
                if ( MediaConnectState != v44 )
                {
                  if ( MediaConnectState == MediaConnectStateConnected )
                  {
                    LOBYTE(v54) = 1;
                  }
                  else
                  {
                    v45 = (unsigned __int8)v53;
                    if ( v44 == MediaConnectStateConnected )
                      v45 = 1;
                    v53 = v45;
                  }
                }
                HigherFilterWithPnpRef->MediaConnectState = v44;
                HigherFilterWithPnpRef->MediaDuplexState = StatusBuffer[2];
                HigherFilterWithPnpRef->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
                HigherFilterWithPnpRef->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
                HigherFilterWithPnpRef->PauseFunctions = StatusBuffer[8];
                HigherFilterWithPnpRef->AutoNegotiationFlags = StatusBuffer[9];
LABEL_172:
                v15 = updated;
LABEL_173:
                v16 = v54;
                goto LABEL_40;
              }
              ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
              if ( a2->SourceHandle == &ndisIntReqGeneric )
              {
                if ( StatusCode != 1073807383 )
                  goto LABEL_58;
                StatusBuffer[1] = *((_DWORD *)a1 + 86);
              }
              else if ( StatusCode != 1073807383 )
              {
                goto LABEL_58;
              }
              if ( StatusBuffer && StatusBufferSize >= 0x28 )
              {
                if ( StatusBuffer[1] == 1
                  || (v46 = *((_DWORD *)a1 + 30),
                      *((_DWORD *)a1 + 30) = v46 & 0xDFFFFFFF,
                      v47 = StatusBuffer[1],
                      v54 = (v46 & 0x20000000) != 0,
                      v47 == 1) )
                {
                  v49 = *((_DWORD *)a1 + 30);
                  *((_DWORD *)a1 + 30) = v49 | 0x20000000;
                  v47 = StatusBuffer[1];
                  v48 = (v49 & 0x20000000) == 0;
                  v53 = v48;
                }
                else
                {
                  v48 = v53;
                }
                v50 = *((_DWORD *)a1 + 120);
                if ( v50 != v47 )
                {
                  if ( v50 != 1 )
                  {
                    v21 = v48;
                    if ( v47 == 1 )
                      v21 = 1;
                    goto LABEL_59;
                  }
                  LOBYTE(v54) = 1;
                }
              }
LABEL_58:
              v21 = v53;
LABEL_59:
              a2->Flags |= 2u;
              ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, a2, 2u);
              if ( v54 )
                ndisSwapFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
              if ( v21 )
                ndisRestoreFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
              ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
              goto LABEL_50;
            }
            updated = ndisMValidatePMWakeReason((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
            if ( !updated )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return;
              v37 = 192;
              goto LABEL_118;
            }
          }
          break;
      }
      v11 = StatusCode == 1073807372;
      goto LABEL_25;
    }
LABEL_9:
    v10 = (KSPIN_LOCK *)(a1 + 24);
    goto LABEL_10;
  }
  updated = ndisMIndicateHDSplitChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusBuffer, StatusBufferSize);
  if ( updated )
    goto LABEL_9;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v23 = 182;
    goto LABEL_70;
  }
}
