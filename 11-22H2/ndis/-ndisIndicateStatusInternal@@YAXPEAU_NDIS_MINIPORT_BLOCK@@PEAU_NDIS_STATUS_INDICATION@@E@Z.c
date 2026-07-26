/*
 * XREFs of ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001DB60 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0021894 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022064 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMIndicateStatus @ 0x1C006F4D0 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0082B58 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D740 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0014354 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001E900 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001EA64 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001EF70 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F534 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C001F770 (WPP_RECORDER_SF_qdq_ea_1C001F770.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C002019C (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00210F4 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021F54 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0023C08 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0024220 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0024F84 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C005CB34 (WPP_RECORDER_SF_qLLL.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006BBA4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006BE64 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BEE0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006C284 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E8F4 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0081454 (-ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C00916D8 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C009228C (-ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0093664 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0096ED0 (-ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009996C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A320 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009FD78 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A55E0 (-ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B92D8 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  void *StatusBuffer; // r14
  unsigned __int8 v3; // bl
  unsigned int StatusBufferSize; // eax
  _NDIS_OPEN_BLOCK *DestinationHandle; // rsi
  int StatusCode; // r15d
  KIRQL v9; // r12
  int v10; // edx
  _NDIS_OPEN_BLOCK *v11; // rax
  char v12; // si
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  int v16; // r14d
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rbx
  char v18; // r12
  int v19; // r8d
  struct _NDIS_MINIPORT_BLOCK *v20; // rax
  struct _NDIS_MINIPORT_BLOCK *v21; // rsi
  char v22; // r14
  struct _NDIS_QOS_PARAMETERS *v23; // r12
  int v24; // esi
  int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  char v29; // si
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_BLOCK *v31; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rsi
  bool v33; // zf
  unsigned int Flags; // esi
  bool v35; // si
  int v36; // eax
  _NET_IF_MEDIA_CONNECT_STATE v37; // ecx
  bool v38; // cf
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  int v43; // edx
  struct _NDIS_OID_REQUEST *v44; // rax
  struct _NDIS_OID_REQUEST *v45; // rsi
  int v46; // ebx
  int v47; // edx
  unsigned __int8 v48; // al
  _NDIS_IF_BLOCK *IfBlock; // rcx
  const EVENT_DESCRIPTOR *v50; // rdx
  unsigned int v51; // ecx
  unsigned __int16 v52; // ax
  char v53; // bl
  unsigned int v54; // eax
  struct _NDIS_WORK_ITEM *p_WorkItem; // rsi
  struct _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v57; // eax
  __int64 v58; // r9
  struct _NDIS_QOS_PARAMETERS *v59; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  unsigned int PnPFlags; // eax
  __int64 v62; // [rsp+30h] [rbp-D0h]
  char v63[8]; // [rsp+38h] [rbp-C8h]
  char v64; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v65; // [rsp+51h] [rbp-AFh]
  bool v66; // [rsp+52h] [rbp-AEh]
  bool v67; // [rsp+53h] [rbp-ADh]
  bool v68; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v69[8]; // [rsp+58h] [rbp-A8h] BYREF
  char v70; // [rsp+60h] [rbp-A0h]
  char v71; // [rsp+61h] [rbp-9Fh]
  char v72; // [rsp+62h] [rbp-9Eh]
  char v73[4]; // [rsp+64h] [rbp-9Ch]
  char v74; // [rsp+68h] [rbp-98h]
  unsigned __int8 v75; // [rsp+69h] [rbp-97h] BYREF
  char v76; // [rsp+6Ah] [rbp-96h]
  char v77[4]; // [rsp+6Ch] [rbp-94h]
  _NDIS_OPEN_BLOCK *v78; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  _NDIS_OPEN_BLOCK *v80; // [rsp+80h] [rbp-80h]
  struct _NDIS_STATUS_INDICATION v81; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_STATUS_INDICATION v82; // [rsp+100h] [rbp+0h] BYREF
  __int64 v83; // [rsp+170h] [rbp+70h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+178h] [rbp+78h]
  __int128 v85; // [rsp+180h] [rbp+80h] BYREF
  __int128 v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+1A0h] [rbp+A0h]

  StatusBuffer = a2->StatusBuffer;
  v3 = 0;
  StatusBufferSize = a2->StatusBufferSize;
  DestinationHandle = (_NDIS_OPEN_BLOCK *)a2->DestinationHandle;
  StatusCode = a2->StatusCode;
  v9 = 2;
  *(_DWORD *)v77 = 0;
  v69[0] = 2;
  Src = StatusBuffer;
  *(_DWORD *)v73 = StatusBufferSize;
  v72 = 0;
  v68 = 0;
  v80 = DestinationHandle;
  memset(&v81, 0, sizeof(v81));
  v70 = 0;
  v74 = 0;
  v65 = 0;
  memset(&v82, 0, sizeof(v82));
  v83 = 0LL;
  v66 = 0;
  v64 = 0;
  v76 = 0;
  v67 = 0;
  v71 = 0;
  v75 = 0;
  ifOperStatusFlags = 0;
  v85 = 0LL;
  v87 = 0LL;
  v86 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x18u,
      0x37u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      StatusCode,
      DestinationHandle);
  v11 = 0LL;
  if ( DestinationHandle != (_NDIS_OPEN_BLOCK *)&ndisIntReqWmi )
    v11 = DestinationHandle;
  v78 = v11;
  v12 = (char)v11;
  if ( v11 )
  {
    v33 = v11->Header.Type == 18;
    v78 = v11;
    if ( !v33 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x38u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          a1);
      v12 = 0;
      v78 = 0LL;
    }
  }
  v13 = *(_OWORD *)&a2->PortNumber;
  *(_OWORD *)&v81.Header.Type = *(_OWORD *)&a2->Header.Type;
  *(_OWORD *)&v81.PortNumber = v13;
  v14 = *(_OWORD *)&a2->StatusBuffer;
  *(_OWORD *)&v81.DestinationHandle = *(_OWORD *)&a2->DestinationHandle;
  *(_OWORD *)&v81.StatusBuffer = v14;
  v15 = *(_OWORD *)a2->NdisReserved;
  *(_OWORD *)&v81.Guid.Data2 = *(_OWORD *)&a2->Guid.Data2;
  *(_OWORD *)v81.NdisReserved = v15;
  *(_OWORD *)&v81.NdisReserved[2] = *(_OWORD *)&a2->NdisReserved[2];
  if ( (unsigned int)(StatusCode - 1073807371) > 1 )
  {
    if ( StatusCode == 1073807383 )
    {
      Flags = a2->Flags;
      a1->LinkStateIndicationFlags |= 7u;
      v35 = (Flags & 8) != 0;
      v68 = v35;
      if ( !StatusBuffer )
        goto LABEL_13;
      v36 = *(_DWORD *)v73;
      v68 = v35;
      if ( *(_DWORD *)v73 < 0x28u )
        goto LABEL_13;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v62) = *((_DWORD *)StatusBuffer + 1);
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0x39u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          (char)a1,
          v62);
        v36 = *(_DWORD *)v73;
      }
      if ( v36 == -2 )
      {
        *(_DWORD *)v73 = 40;
        a2->StatusBufferSize = 40;
      }
      v37 = *((_DWORD *)StatusBuffer + 1);
      if ( v37 == MediaConnectStateConnected )
      {
        v33 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v77 = 1073807371;
        v66 = v33;
        v67 = !v33;
      }
      else if ( v37 == MediaConnectStateDisconnected )
      {
        v33 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v77 = 1073807372;
        v66 = !v33;
        v67 = v33;
      }
      else
      {
        v66 = 1;
      }
      v38 = a1->MajorNdisVersion < 6u;
      a1->MediaConnectState = v37;
      a1->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
      a1->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      a1->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
      a1->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
      if ( v38 )
      {
        MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *((_QWORD *)StatusBuffer + 2) )
          a1->MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *((_QWORD *)StatusBuffer + 3) )
          a1->MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
        v41 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v41 == 0x40000000 || v41 < *((_QWORD *)StatusBuffer + 2) )
          a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        v42 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v42 == 0x40000000 || v42 < *((_QWORD *)StatusBuffer + 3) )
          a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      }
      a1->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
      v3 = ndisIfSetInterfaceState(a1, 1u, 2u);
      v65 = v3;
      v68 = v35;
      v70 = 0;
      goto LABEL_83;
    }
    if ( StatusCode != 1073807394 )
    {
      v65 = 0;
      if ( StatusCode == 1073807379 )
      {
        a1->LinkStateIndicationFlags |= 2u;
        v44 = ndisMAllocateRequest(&ndisIntReqGeneric, 0x10107u, NdisRequestQueryInformation, 0LL, 4u);
        v45 = v44;
        if ( v44 )
        {
          *(_DWORD *)&v44->NdisReserved[16] |= 2u;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, 2u);
          v46 = ndisQueueRequestOnTopAsync(a1, v45);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v69);
          if ( v46 != 259 )
            ExFreePoolWithTag(v45, 0);
          v9 = v69[0];
        }
        v3 = 0;
        v70 = 1;
        v65 = 0;
      }
      else
      {
        v70 = 0;
        if ( StatusCode == 1073872897 || (v70 = 0, v65 = 0, StatusCode == 1073872899) )
        {
          if ( !ndisTopTcpConnectionOffloadStatus(a1, a2) )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v47) = 4;
              WPP_RECORDER_SF_L(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v47,
                24,
                59,
                (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                StatusCode);
            }
            return;
          }
        }
        if ( StatusCode != 1073807384 )
        {
LABEL_13:
          v16 = 0;
          a1->MiniportThread = 0LL;
          BaseMiniport = a1;
          KeReleaseSpinLock(&a1->Lock, v9);
          v18 = 1;
          v20 = ndisReferenceTopMiniportByNameForNsi(
                  a1,
                  0x200000,
                  v19,
                  a1->MiniportMediaType == NdisMediumNative802_11,
                  NSIREF_STATUS,
                  MPREF_SI_NSI);
          v21 = v20;
          if ( !v20
            || (v20 != a1
              ? (_NDIS_MINIPORT_BLOCK *)(v18 = v71, v16 = -1073741823)
              : !ndisReferenceMiniportByHandle(a1->BaseMiniport, 0, 0x38u)
              ? (_NDIS_MINIPORT_BLOCK *)(v18 = 0)
              : (BaseMiniport = a1->BaseMiniport),
                v71 = v18,
                ndisDereferenceMiniportForNsi(v21, 1u, 0x39u),
                v16) )
          {
            v67 = 0;
            v22 = 0;
          }
          else
          {
            v22 = v74;
          }
          v23 = (struct _NDIS_QOS_PARAMETERS *)Src;
          ndisWriteWmiStatusIndication(
            BaseMiniport,
            BaseMiniport->pAdapterInstanceName,
            a2,
            StatusCode,
            (int *)Src,
            *(unsigned int *)v73);
          v24 = *(_DWORD *)v77;
          if ( v67 )
            ndisWriteWmiStatusIndication(
              BaseMiniport,
              BaseMiniport->pAdapterInstanceName,
              a2,
              *(unsigned int *)v77,
              0LL,
              0);
          if ( v22 )
            ndisWriteWmiStatusIndication(
              BaseMiniport,
              BaseMiniport->pAdapterInstanceName,
              a2,
              0x40010023u,
              (int *)&v83,
              0xCu);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v69);
          if ( v71 )
            ndisDereferenceMiniport(BaseMiniport, 0x38u);
          if ( StatusCode == 1073807383 )
            StatusCode = v24;
          if ( StatusCode == 1073807384 )
          {
            if ( (a2->Flags & 4) != 0 )
            {
              StatusCode = 1073807371;
              goto LABEL_40;
            }
          }
          else
          {
            if ( StatusCode > 1073872912 )
            {
              if ( StatusCode == 1073872960 )
              {
                ndisMIndicateNicSwitchCapsChange(a1, 1073872960, v23, *(unsigned int *)v73, 1u);
              }
              else if ( StatusCode == 1073873056 || StatusCode == 1073873057 )
              {
                ndisMIndicateQosParametersChange(a1, StatusCode, v23, v73[0]);
              }
              else if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
              {
                ndisMIndicateHwTimestampCapabilitiesChange(a1, StatusCode, v23, *(unsigned int *)v73, 1, &v75);
                if ( StatusCode == 1074073601 )
                {
                  if ( v75 )
                    ndisIfScheduleTimestampCapabilityChangeNotification(a1, v69[0]);
                }
              }
              goto LABEL_43;
            }
            if ( StatusCode == 1073872912 )
            {
              ndisMIndicateReceiveFilterCapsChange(a1, 1073872912, v23, *(unsigned int *)v73, 1u);
              goto LABEL_43;
            }
          }
          if ( StatusCode != 1073807371 )
          {
            switch ( StatusCode )
            {
              case 1073807372:
                v51 = a1->Flags;
                v52 = a1->MediaSenseDisconnectCount + 1;
                a1->MediaSenseDisconnectCount = v52;
                if ( (v51 & 0x20000000) != 0 || v52 == 1 )
                {
                  v53 = 1;
                  v72 = 1;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_qLLL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v25,
                      24,
                      60,
                      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                      (char)a1,
                      v51,
                      a1->PnPFlags,
                      a1->CurrentDevicePowerState);
                    v51 = a1->Flags;
                  }
                  if ( byte_1C00F7644 < 0 )
                    McTemplateK0jqxddq_EtwWriteTransfer(
                      v51,
                      (unsigned int)&MiniportStatusIndicationDisconnect,
                      (_DWORD)a1 + 4008,
                      (_DWORD)a1 + 4008,
                      a1->IfIndex,
                      a1->NetLuid.Value,
                      v51,
                      a1->PnPFlags,
                      a1->CurrentDevicePowerState);
                }
                else
                {
                  v53 = v72;
                }
                v54 = a1->Flags & 0xDFFFFFFF;
                a1->MediaConnectState = MediaConnectStateDisconnected;
                a1->Flags = v54;
                if ( !v68 )
                {
                  a1->Flags = v54 | 0x4000000;
                  if ( v53 )
                    ndisSetMediaDisconnectTimer(a1);
                }
                break;
              case 1073807384:
                v66 = 1;
                if ( *(_DWORD *)v73 >= 4u && (byte_1C00F7645 & 1) != 0 )
                  McTemplateK0jqxq_EtwWriteTransfer(
                    (unsigned int)(StatusCode - 1073807384),
                    (__int64)&MiniportStatusIndicationNetworkChange,
                    (__int64)&a1->InterfaceGuid,
                    (__int64)&a1->InterfaceGuid,
                    a1->IfIndex,
                    a1->NetLuid.Value,
                    *(_DWORD *)&v23->Header);
                break;
              case 1073807395:
                v66 = 1;
                if ( *(_DWORD *)v73 >= 0xCu )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    *(_DWORD *)v63 = v23->NumTrafficClasses;
                    WPP_RECORDER_SF_qLL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v25,
                      0x18u,
                      0x3Eu,
                      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                      (char)a1,
                      v23->Flags,
                      *(_QWORD *)v63);
                  }
                  v26 = v23->Flags;
                  if ( (_DWORD)v26 != 1 )
                  {
                    if ( (byte_1C00F7645 & 1) == 0 )
                      break;
                    v50 = (const EVENT_DESCRIPTOR *)&MiniportStatusIndicationOperStatusNotUp;
                    goto LABEL_129;
                  }
                  if ( (byte_1C00F7645 & 1) != 0 )
                  {
                    v50 = (const EVENT_DESCRIPTOR *)&MiniportStatusIndicationOperStatusUp;
LABEL_129:
                    McTemplateK0jqxqq_EtwWriteTransfer(
                      v26,
                      v50,
                      &a1->InterfaceGuid,
                      (__int64)&a1->InterfaceGuid,
                      a1->IfIndex,
                      a1->NetLuid.Value,
                      v26,
                      v23->NumTrafficClasses);
                  }
                }
                break;
              case 1073872902:
                v64 = 1;
                v29 = 1;
                ndisIndicateOffloadChangeInternal(a1, v23, *(unsigned int *)v73);
LABEL_44:
                if ( v80 != (_NDIS_OPEN_BLOCK *)&ndisIntReqWmi )
                {
                  OpenQueue = a1->OpenQueue;
                  if ( OpenQueue )
                  {
                    v31 = v78;
                    while ( v31 && v31 != OpenQueue )
                    {
                      MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_64:
                      OpenQueue = MiniportNextOpen;
                      v33 = MiniportNextOpen == 0LL;
                      v29 = v64;
                      if ( v33 )
                        goto LABEL_65;
                    }
                    KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                    if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
                      goto LABEL_157;
                    if ( v29 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
                    {
                      if ( !v76 )
                      {
                        p_WorkItem = &OpenQueue->StatusUnbindWorkItem->WorkItem;
                        if ( p_WorkItem )
                        {
                          ndisReferenceMiniportNoCheck(a1, MPREF_PT_LEGACYREBIND);
                          OpenQueue->StatusUnbindWorkItem = 0LL;
                          v76 = 1;
                          ndisScheduleWorkItemInternal(p_WorkItem);
                        }
                      }
                      goto LABEL_157;
                    }
                    switch ( StatusCode )
                    {
                      case 1073938515:
                        ndisOpenIndicatePMCapabilities(OpenQueue, a2);
                        goto LABEL_55;
                      case 1073938513:
                        if ( a2->StatusBufferSize < 4 )
                          goto LABEL_157;
                        p_WOLPatternList = &OpenQueue->WOLPatternList;
                        break;
                      case 1073938514:
                        if ( a2->StatusBufferSize < 4 )
                        {
LABEL_157:
                          MiniportNextOpen = OpenQueue->MiniportNextOpen;
                          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_63:
                          v31 = v78;
                          goto LABEL_64;
                        }
                        p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
                        break;
                      default:
LABEL_55:
                        ndisMReferenceOpen((__int64)OpenQueue, 7u);
                        KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                        if ( OpenQueue->StatusHandler )
                        {
                          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                          OpenQueue->OpenFlags |= 0x100u;
                          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                          a1->MiniportThread = 0LL;
                          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
                          if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
                          {
                            if ( !v66 && !a2->PortNumber )
                            {
                              v57 = a2->StatusCode;
                              if ( v57 == 1073807383 || v57 == 1073807384 && (a2->Flags & 4) != 0 )
                              {
                                v58 = 0LL;
                                v59 = 0LL;
                              }
                              else
                              {
                                v58 = *(unsigned int *)v73;
                                v59 = v23;
                              }
                              OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, StatusCode, v59, v58);
                              StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                              if ( StatusCompleteHandler )
                                StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                            }
                          }
                          else if ( !v70 )
                          {
                            ndisInvokeStatus(OpenQueue, a2);
                            if ( a2->StatusCode == 1073807384 && (a2->Flags & 4) != 0 )
                              ndisInvokeStatus(OpenQueue, &v81);
                            if ( v65 )
                              ndisInvokeStatus(OpenQueue, &v82);
                          }
                          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
                          a1->MiniportThread = KeGetCurrentThread();
                          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                          OpenQueue->OpenFlags &= ~0x100u;
                          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                        }
                        MiniportNextOpen = OpenQueue->MiniportNextOpen;
                        ndisMDereferenceOpenLocked((__int64)OpenQueue, 7u);
                        goto LABEL_63;
                    }
                    if ( ndisDeletePatternEntry(p_WOLPatternList, *(_DWORD *)a2->StatusBuffer) )
                    {
                      --LODWORD(a2->NdisReserved[2]);
                      goto LABEL_55;
                    }
                    goto LABEL_157;
                  }
LABEL_65:
                  if ( StatusCode == 1073938516 )
                    ndisUpdateAndIndicatePMCapabilities(a1);
                  if ( v72 && (a2->Flags & 2) == 0 )
                  {
                    PnPFlags = a1->PnPFlags;
                    if ( StatusCode == 1073807371 )
                    {
                      a1->PnPFlags = PnPFlags & 0xEFFFFFFF;
                      ndisMRestoreOpenHandlers(a1, 2u);
                      a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
                      a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
                    }
                    else
                    {
                      a1->PnPFlags = PnPFlags | 0x10000000;
                      ndisMSwapOpenHandlers(a1, 2u);
                      a1->ReceivePathEnabled = 0;
                      a1->PacketIndicateHandler = ndisMDummyIndicatePacket;
                    }
                  }
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qdq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v25,
                    0x18u,
                    0x3Fu,
                    (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                    (char)a1,
                    StatusCode,
                    a2->DestinationHandle);
                return;
            }
LABEL_43:
            v29 = 0;
            goto LABEL_44;
          }
LABEL_40:
          v27 = a1->Flags;
          ++a1->MediaSenseConnectCount;
          if ( (v27 & 0x20000000) == 0 )
          {
            v72 = 1;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qLLL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v25,
                24,
                61,
                (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                (char)a1,
                v27,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
              v27 = a1->Flags;
            }
            if ( byte_1C00F7644 < 0 )
              McTemplateK0jqxddq_EtwWriteTransfer(
                v27,
                (unsigned int)&MiniportStatusIndicationConnect,
                (_DWORD)a1 + 4008,
                (_DWORD)a1 + 4008,
                a1->IfIndex,
                a1->NetLuid.Value,
                v27,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
          }
          v28 = a1->Flags | 0x20000000;
          a1->MediaConnectState = MediaConnectStateConnected;
          a1->Flags = v28;
          if ( !v68 )
          {
            a1->Flags = v28 | 0x4000000;
            ndisCancelMediaDisconnectTimer(a1);
          }
          goto LABEL_43;
        }
        if ( (a2->Flags & 4) != 0 )
        {
          v67 = 1;
          *(_DWORD *)v77 = 1073807371;
          a1->MediaConnectState = MediaConnectStateConnected;
          v48 = ndisIfSetInterfaceState(a1, 1u, 2u);
          HIDWORD(v85) = 0;
          v81.Flags |= 0x1000u;
          v65 = v48;
          DWORD2(v85) = a1->MiniportMediaDuplexState;
          v86 = *(_OWORD *)&a1->MiniportXmitLinkSpeed;
          v87 = *(_QWORD *)&a1->MiniportPauseFunctions;
          v81.StatusBufferSize = 40;
          v3 = v48;
          v81.StatusBuffer = &v85;
          *(_QWORD *)&v85 = 0x100280180LL;
          v81.StatusCode = 1073807383;
        }
      }
LABEL_83:
      if ( v3 )
      {
        IfBlock = a1->IfBlock;
        LODWORD(v83) = 786816;
        v74 = 1;
        HIDWORD(v83) = IfBlock->ifOperStatus;
        ifOperStatusFlags = IfBlock->ifOperStatusFlags;
        v82.StatusBuffer = &v83;
        v82.Header = (_NDIS_OBJECT_HEADER)7340440;
        v82.SourceHandle = a1;
        v82.StatusCode = 1073807395;
        v82.StatusBufferSize = 12;
      }
      goto LABEL_13;
    }
    if ( !(unsigned int)ndisUpdateMiniportPortStates(a1, a2) )
    {
      if ( !a2->PortNumber )
      {
        v3 = ndisIfSetInterfaceState(a1, 1u, 2u);
        v65 = v3;
      }
      goto LABEL_83;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v43,
        24,
        58,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a1,
        34,
        v12);
  }
}
