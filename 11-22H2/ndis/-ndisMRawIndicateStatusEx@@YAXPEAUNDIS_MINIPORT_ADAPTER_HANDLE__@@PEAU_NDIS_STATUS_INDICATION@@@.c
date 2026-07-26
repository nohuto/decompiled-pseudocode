/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0025250 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0040020 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C012D9C4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D5BC (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001D9B0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001DB60 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001DF94 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001F85C (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00212C0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0024094 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     WPP_RECORDER_SF_l @ 0x1C00248A0 (WPP_RECORDER_SF_l.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C0025380 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029CD8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     NdisMSleep @ 0x1C0040C80 (NdisMSleep.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0066CD8 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C006BAFC (-ndisMIndicateHDSplitChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006BBA4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006BE64 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BEE0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006C284 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C006ED34 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C007B874 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C008609C (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C0091048 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C009183C (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C00919A0 (-ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C009372C (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00937B8 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C009380C (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093E00 (-ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093E98 (-ndisMIndicatePMHardwareCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@.c)
 *     ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093F98 (-ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0094078 (-ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0094534 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00B1868 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0117874 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int v2; // r12d
  int v3; // r13d
  unsigned int StatusBufferSize; // esi
  int StatusCode; // edi
  int *StatusBuffer; // r15
  int v8; // edx
  int v10; // eax
  bool v11; // zf
  KIRQL v12; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rsi
  unsigned __int8 v14; // r12
  unsigned int Flags; // eax
  char v16; // r12
  char v17; // r13
  _NET_IF_MEDIA_CONNECT_STATE *v18; // r8
  unsigned __int8 v19; // al
  KIRQL v20; // dl
  int v21; // edx
  bool v22; // di
  _DWORD *v23; // rdx
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r9
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // al
  KIRQL v28; // dl
  unsigned __int8 v29; // si
  unsigned __int8 v30; // al
  KIRQL v31; // dl
  unsigned __int8 v32; // si
  unsigned __int8 v33; // al
  KIRQL v34; // dl
  unsigned __int8 v35; // si
  char v36; // si
  __int64 v37; // rdx
  size_t v38; // r8
  KIRQL v39; // dl
  unsigned __int8 v40; // al
  KIRQL v41; // dl
  unsigned __int8 v42; // si
  unsigned __int8 updated; // si
  unsigned __int16 v44; // r9
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *SourceHandle; // rcx
  _OWORD *v46; // rax
  KIRQL v47; // dl
  int v48; // edi
  unsigned int v49; // edx
  unsigned __int8 v50; // cl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // edx
  _NET_IF_MEDIA_CONNECT_STATE v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // [rsp+20h] [rbp-60h]
  KIRQL NewIrql; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 v58; // [rsp+41h] [rbp-3Fh]
  char v59[4]; // [rsp+44h] [rbp-3Ch]
  int v60; // [rsp+48h] [rbp-38h]
  int v61; // [rsp+4Ch] [rbp-34h]
  int v62; // [rsp+50h] [rbp-30h] BYREF
  int v63; // [rsp+54h] [rbp-2Ch]
  int v64; // [rsp+58h] [rbp-28h]
  int v65; // [rsp+5Ch] [rbp-24h]
  __int64 v66; // [rsp+60h] [rbp-20h]
  __int64 v67; // [rsp+68h] [rbp-18h]
  int v68; // [rsp+70h] [rbp-10h]
  int v69; // [rsp+74h] [rbp-Ch]

  StatusBufferSize = a2->StatusBufferSize;
  LOBYTE(v3) = 0;
  StatusCode = a2->StatusCode;
  StatusBuffer = (int *)a2->StatusBuffer;
  LOBYTE(v2) = 0;
  v8 = 1;
  v61 = v2;
  NewIrql = 0;
  *(_DWORD *)v59 = StatusBufferSize;
  v60 = v3;
  v58 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      24,
      178,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      StatusCode);
    v8 = 1;
  }
  v10 = *((_DWORD *)a1 + 87);
  v63 = 0;
  v65 = 0;
  v11 = a2->Header.Type == 0x98;
  v64 = v10;
  v66 = *((_QWORD *)a1 + 345);
  v67 = *((_QWORD *)a1 + 346);
  v68 = *((_DWORD *)a1 + 203);
  v69 = *((_DWORD *)a1 + 204);
  v62 = 2621824;
  if ( !v11 || a2->Header.Size < 0x70u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v24 = 179;
    goto LABEL_189;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize >= 4 )
      goto LABEL_9;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v24 = 180;
LABEL_189:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x18u,
      v24,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
    return;
  }
  if ( (unsigned int)(StatusCode - 1073872902) <= 1 )
  {
    v58 = ndisMIndicateOffloadChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !v58 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v25 = 181;
LABEL_68:
        v26 = 4;
LABEL_70:
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v26,
          0x18u,
          v25,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
      v27 = ndisMIndicateReceiveFilterCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      v28 = NewIrql;
      *((_QWORD *)a1 + 65) = 0LL;
      v29 = v27;
      v58 = v27;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v28);
      if ( !v29 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = 183;
          goto LABEL_68;
        }
        return;
      }
    }
LABEL_9:
    if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
      v30 = ndisMIndicateHwTimestampCapabilitiesChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              *(unsigned int *)v59,
              0,
              0LL);
      v31 = NewIrql;
      *((_QWORD *)a1 + 65) = 0LL;
      v32 = v30;
      v58 = v30;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v31);
      if ( !v32 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = 184;
          goto LABEL_68;
        }
        return;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
      v33 = ndisMIndicateNicSwitchCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              *(unsigned int *)v59,
              0);
      v34 = NewIrql;
      *((_QWORD *)a1 + 65) = 0LL;
      v35 = v33;
      v58 = v33;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v34);
      if ( !v35 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = 185;
          goto LABEL_68;
        }
        return;
      }
    }
    switch ( StatusCode )
    {
      case 1073873408:
        v58 = ndisMIndicatePDConfigChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                v8,
                StatusBuffer,
                *(unsigned int *)v59,
                v56);
        if ( !v58 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v25 = 186;
            goto LABEL_68;
          }
          return;
        }
        break;
      case 1076105216:
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
        if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)a1) )
        {
          v37 = *((_QWORD *)a1 + 69);
          v38 = *(unsigned int *)v59;
          if ( *(_DWORD *)v59 >= (unsigned int)*(unsigned __int16 *)(v37 + 12) )
            v38 = *(unsigned __int16 *)(v37 + 12);
          memmove((void *)(v37 + *(unsigned int *)(v37 + 16)), StatusBuffer, v38);
          v36 = 1;
        }
        else
        {
          v36 = 0;
        }
        v39 = NewIrql;
        *((_QWORD *)a1 + 65) = 0LL;
        v58 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v39);
        if ( !v36 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return;
          v25 = 187;
          goto LABEL_69;
        }
        break;
      case 1073872995:
        v22 = *(_BYTE *)StatusBuffer != 0;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_l(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            24,
            188,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            v22);
        }
        ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)a1, v22);
        ndisIfUpdateInterfaceHiddenFlag(*((struct _NDIS_IF_BLOCK **)a1 + 505), v22);
        return;
      default:
        if ( (unsigned int)(StatusCode - 1073873056) <= 1 )
        {
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
          v40 = ndisMIndicateQosParametersChange(
                  (struct _NDIS_MINIPORT_BLOCK *)a1,
                  StatusCode,
                  (struct _NDIS_QOS_PARAMETERS *)StatusBuffer,
                  v59[0]);
          v41 = NewIrql;
          *((_QWORD *)a1 + 65) = 0LL;
          v42 = v40;
          v58 = v40;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v41);
          if ( !v42 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return;
            v25 = 189;
            goto LABEL_69;
          }
        }
        if ( StatusCode == 1073872944 )
        {
          updated = 0;
          v58 = 0;
          if ( *(_DWORD *)v59 >= 0x444u
            && *(_BYTE *)StatusBuffer == 0x80
            && *((_WORD *)StatusBuffer + 1) >= 0x444u
            && *((_BYTE *)StatusBuffer + 1) >= 2u
            && (StatusBuffer[1] & 0xFFFF0000) == 0x100000 )
          {
            updated = ndisUpdateRcvFilterQueueParameters(
                        (struct _NDIS_MINIPORT_BLOCK *)a1,
                        (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)StatusBuffer);
            v58 = updated;
          }
          if ( !updated )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return;
            v25 = 190;
            goto LABEL_69;
          }
        }
        else
        {
          if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
          {
            v58 = ndisMIndicateTcpConnectionOffloadChange(
                    (struct _NDIS_MINIPORT_BLOCK *)a1,
                    StatusCode,
                    StatusBuffer,
                    *(unsigned int *)v59);
            if ( !v58 )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return;
              v25 = 191;
LABEL_69:
              v26 = 3;
              goto LABEL_70;
            }
          }
          switch ( StatusCode )
          {
            case 1073938515:
              ndisMIndicatePMCapabilities((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
              goto LABEL_23;
            case 1073938516:
              ndisMIndicatePMHardwareCapabilities((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
              goto LABEL_23;
            case 1073938513:
              ndisMIndicateWoLPatternReject((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
              goto LABEL_23;
            case 1073938514:
              ndisMIndicatePMOffloadReject((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
              goto LABEL_23;
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
                    v44 = 193;
                    goto LABEL_116;
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
                  v44 = 194;
LABEL_116:
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    0x18u,
                    v44,
                    (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                    a1);
                  return;
                }
                NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
                if ( !*((_BYTE *)a1 + 5320) )
                {
                  if ( !ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au) )
                  {
LABEL_140:
                    v47 = NewIrql;
                    *((_QWORD *)a1 + 65) = 0LL;
                    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v47);
                    return;
                  }
                  if ( !ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)a1, MPIFREF_CHANGEMACMTU) )
                  {
                    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au);
                    goto LABEL_140;
                  }
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1322), (WORK_QUEUE_TYPE)40);
                  *((_BYTE *)a1 + 5320) = 1;
                }
                v48 = StatusCode - 1073873072;
                if ( v48 )
                {
                  if ( v48 == 1 )
                  {
                    a1[1340] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
                    *((_BYTE *)a1 + 5322) = 1;
                  }
                }
                else
                {
                  v46 = a2->StatusBuffer;
                  *(_OWORD *)(a1 + 1331) = *v46;
                  *(_OWORD *)(a1 + 1335) = v46[1];
                  *((_WORD *)a1 + 2678) = *((_WORD *)v46 + 16);
                  *((_BYTE *)a1 + 5321) = 1;
                }
                goto LABEL_140;
              }
            }
LABEL_23:
            v11 = StatusCode == 1073807372;
            if ( StatusCode == 1073807372 )
            {
              v63 = 2;
              goto LABEL_148;
            }
LABEL_24:
            if ( StatusCode == 1073807371 )
            {
              v63 = 1;
            }
            else if ( !v11 )
            {
              goto LABEL_26;
            }
LABEL_148:
            a2->StatusBuffer = &v62;
            StatusBuffer = &v62;
            a2->StatusCode = 1073807383;
            a2->StatusBufferSize = 40;
            StatusCode = 1073807383;
            *(_DWORD *)v59 = 40;
LABEL_26:
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
            if ( StatusCode == 1073807383 )
            {
              *((_BYTE *)a1 + 88) |= 0x18u;
              if ( StatusBuffer[1] == 1 && *((_DWORD *)a1 + 86) != 1 )
                *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
              *((_DWORD *)a1 + 86) = StatusBuffer[1];
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
            v12 = NewIrql;
            *((_QWORD *)a1 + 65) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v12);
            HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 9u);
            if ( HigherFilterWithPnpRef )
            {
              v14 = v58;
              while ( 1 )
              {
                NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilterWithPnpRef, &NewIrql);
                Flags = HigherFilterWithPnpRef->Flags;
                HigherFilterWithPnpRef->LockThread = 0LL;
                if ( (Flags & 0x2000) == 0 )
                  break;
                KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, NewIrql);
                if ( KeGetCurrentIrql() == 2 )
                  KeStallExecutionProcessor(1u);
                else
                  NdisMSleep(0x32u);
              }
              v58 = v14;
              HigherFilterWithPnpRef->Flags = Flags | 0x2000;
              KeReleaseSpinLockFromDpcLevel(&HigherFilterWithPnpRef->Lock);
              v16 = v61;
              v17 = v60;
              if ( a2->SourceHandle == &ndisIntReqGeneric )
              {
                if ( StatusCode != 1073807383 )
                {
LABEL_34:
                  if ( StatusCode == 1073938515 )
                  {
                    ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, a2);
                    v19 = v58;
                  }
                  else if ( StatusCode == 1073938513 )
                  {
                    v19 = ndisFilterIndicateWoLPatternReject(HigherFilterWithPnpRef, a2);
                  }
                  else
                  {
                    v19 = v58;
                    switch ( StatusCode )
                    {
                      case 1073938514:
                        v19 = ndisFilterIndicatePMOffloadReject(HigherFilterWithPnpRef, a2);
                        break;
                      case 1073872902:
                        v19 = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, StatusBuffer, *(unsigned int *)v59);
                        break;
                      case 1074073600:
                      case 1074073601:
                        v19 = ndisFIndicateTimestampChange(
                                HigherFilterWithPnpRef,
                                StatusCode,
                                StatusBuffer,
                                *(unsigned int *)v59);
                        break;
                    }
                  }
LABEL_40:
                  if ( v19 )
                  {
                    if ( HigherFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
                      ndisFInvokeStatus(HigherFilterWithPnpRef, a2);
                    else
                      ndisFIndicateStatusInternal(HigherFilterWithPnpRef, a2);
                    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
                    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                    if ( v17 )
                      ndisSwapFilterHandlersForMediaDisconnect(
                        (struct _NDIS_MINIPORT_BLOCK *)a1,
                        0LL,
                        HigherFilterWithPnpRef);
                    if ( v16 )
                      ndisRestoreFilterHandlersForMediaDisconnect(
                        (struct _NDIS_MINIPORT_BLOCK *)a1,
                        0LL,
                        HigherFilterWithPnpRef);
                    *((_QWORD *)a1 + 65) = 0LL;
                    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
                  }
                  KeAcquireSpinLockAtDpcLevel(&HigherFilterWithPnpRef->Lock);
                  v20 = NewIrql;
                  HigherFilterWithPnpRef->Flags &= ~0x2000u;
                  HigherFilterWithPnpRef->LockThread = 0LL;
                  KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v20);
                  ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 9u);
LABEL_49:
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v21) = 4;
                    WPP_RECORDER_SF_qd(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v21,
                      24,
                      195,
                      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                      (char)a1,
                      a2->StatusCode);
                  }
                  return;
                }
                v18 = (_NET_IF_MEDIA_CONNECT_STATE *)(StatusBuffer + 1);
                StatusBuffer[1] = *((_DWORD *)a1 + 86);
              }
              else
              {
                v18 = (_NET_IF_MEDIA_CONNECT_STATE *)(StatusBuffer + 1);
                if ( StatusCode != 1073807383 )
                  goto LABEL_34;
              }
              v49 = *(_DWORD *)v59;
              if ( *(_DWORD *)v59 == -2 )
              {
                v49 = 40;
                a2->StatusBufferSize = 40;
              }
              v50 = v58;
              v19 = v58;
              if ( StatusBuffer && v49 >= 0x28 )
              {
                MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
                v52 = *v18;
                if ( MediaConnectState != *v18 )
                {
                  if ( MediaConnectState == MediaConnectStateConnected )
                  {
                    v17 = 1;
                  }
                  else if ( v52 == MediaConnectStateConnected )
                  {
                    v16 = 1;
                  }
                }
                HigherFilterWithPnpRef->MediaConnectState = v52;
                HigherFilterWithPnpRef->MediaDuplexState = StatusBuffer[2];
                HigherFilterWithPnpRef->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
                HigherFilterWithPnpRef->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
                HigherFilterWithPnpRef->PauseFunctions = StatusBuffer[8];
                HigherFilterWithPnpRef->AutoNegotiationFlags = StatusBuffer[9];
                v19 = v50;
              }
              goto LABEL_40;
            }
            ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
            if ( a2->SourceHandle == &ndisIntReqGeneric )
            {
              if ( StatusCode != 1073807383 )
                goto LABEL_57;
              v23 = StatusBuffer + 1;
              StatusBuffer[1] = *((_DWORD *)a1 + 86);
            }
            else
            {
              v23 = StatusBuffer + 1;
              if ( StatusCode != 1073807383 )
              {
LABEL_57:
                a2->Flags |= 2u;
                ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, a2, 2u);
                if ( (_BYTE)v3 )
                  ndisSwapFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
                if ( (_BYTE)v2 )
                  ndisRestoreFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
                ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
                goto LABEL_49;
              }
            }
            if ( StatusBuffer && *(_DWORD *)v59 >= 0x28u )
            {
              if ( *v23 == 1
                || (v53 = *((_DWORD *)a1 + 30),
                    LOBYTE(v3) = (v53 & 0x20000000) != 0,
                    *((_DWORD *)a1 + 30) = v53 & 0xDFFFFFFF,
                    *v23 == 1) )
              {
                v54 = *((_DWORD *)a1 + 30);
                *((_DWORD *)a1 + 30) = v54 | 0x20000000;
                LOBYTE(v2) = (v54 & 0x20000000) == 0;
              }
              v55 = *((_DWORD *)a1 + 120);
              if ( v55 != *v23 )
              {
                if ( v55 == 1 )
                {
                  LOBYTE(v3) = 1;
                }
                else if ( *v23 == 1 )
                {
                  LOBYTE(v2) = 1;
                }
              }
            }
            goto LABEL_57;
          }
          v58 = ndisMValidatePMWakeReason((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
          if ( !v58 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return;
            v44 = 192;
            goto LABEL_116;
          }
        }
        break;
    }
    v11 = StatusCode == 1073807372;
    goto LABEL_24;
  }
  v58 = ndisMIndicateHDSplitChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusBuffer, StatusBufferSize);
  if ( v58 )
    goto LABEL_9;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v25 = 182;
    goto LABEL_68;
  }
}
