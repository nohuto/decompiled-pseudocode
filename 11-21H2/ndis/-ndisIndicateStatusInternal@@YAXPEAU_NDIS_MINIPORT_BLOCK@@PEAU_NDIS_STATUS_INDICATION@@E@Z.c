/*
 * XREFs of ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0
 * Callers:
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017FD0 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00240EC (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisMIndicateStatus @ 0x1C006A120 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C007D618 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DD50 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001414C (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001DAB8 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001DE0C (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E77C (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001E920 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C001EAF4 (WPP_RECORDER_SF_qdq_ea_1C001EAF4.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00244CC (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025EFC (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C00578F4 (WPP_RECORDER_SF_qLLL.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00668E4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066B8C (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C0066C08 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066FAC (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069538 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C007BF48 (-ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C008BA98 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008C654 (-ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008D640 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090EC0 (-ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009394C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00942F8 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C0099D84 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F200 (-ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B42F0 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // eax
  void *StatusBuffer; // r14
  _NDIS_OPEN_BLOCK *DestinationHandle; // r12
  int StatusCode; // r15d
  unsigned int v8; // ebx
  _NDIS_OPEN_BLOCK *v9; // rax
  _NDIS_OPEN_BLOCK *v10; // r12
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  bool v14; // r12
  int v15; // r14d
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rbx
  __int64 v17; // r8
  struct _NDIS_MINIPORT_BLOCK *v18; // rax
  struct _NDIS_MINIPORT_BLOCK *v19; // rdi
  struct _NDIS_QOS_PARAMETERS *v20; // r14
  int v21; // edi
  KIRQL v22; // al
  unsigned int v23; // edx
  bool v24; // zf
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  char v27; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // r14
  _NDIS_OPEN_BLOCK *v29; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rbx
  KIRQL v31; // bl
  unsigned int Flags; // edi
  int v33; // eax
  _NET_IF_MEDIA_CONNECT_STATE v34; // ecx
  bool v35; // cf
  unsigned __int8 v36; // cl
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  struct _NDIS_OID_REQUEST *v41; // rax
  struct _NDIS_OID_REQUEST *v42; // rdi
  int v43; // ebx
  unsigned __int8 v44; // al
  int v45; // edx
  unsigned int v46; // eax
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v49; // ecx
  unsigned __int16 v50; // ax
  char v51; // bl
  unsigned int v52; // ecx
  struct _NDIS_WORK_ITEM *p_WorkItem; // rbx
  struct _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v55; // eax
  __int64 v56; // r9
  void *v57; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  unsigned int PnPFlags; // eax
  unsigned int IfIndex; // [rsp+20h] [rbp-E0h]
  enum _NDIS_MP_REFTAG v61[8]; // [rsp+28h] [rbp-D8h]
  __int64 v62; // [rsp+30h] [rbp-D0h]
  char v63[8]; // [rsp+38h] [rbp-C8h]
  char v64; // [rsp+50h] [rbp-B0h]
  bool v65; // [rsp+51h] [rbp-AFh]
  bool v66; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v67; // [rsp+53h] [rbp-ADh]
  char v68; // [rsp+54h] [rbp-ACh]
  KIRQL NewIrql[8]; // [rsp+58h] [rbp-A8h] BYREF
  char v70; // [rsp+60h] [rbp-A0h]
  char v71[4]; // [rsp+64h] [rbp-9Ch]
  char v72; // [rsp+68h] [rbp-98h]
  char v73; // [rsp+69h] [rbp-97h]
  unsigned __int8 v74; // [rsp+6Ah] [rbp-96h] BYREF
  char v75; // [rsp+6Bh] [rbp-95h]
  char v76[4]; // [rsp+6Ch] [rbp-94h]
  _NDIS_OPEN_BLOCK *v77; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  _NDIS_OPEN_BLOCK *v79; // [rsp+80h] [rbp-80h]
  struct _NDIS_STATUS_INDICATION v80; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_STATUS_INDICATION v81; // [rsp+100h] [rbp+0h] BYREF
  __int64 v82; // [rsp+170h] [rbp+70h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+178h] [rbp+78h]
  __int128 v84; // [rsp+180h] [rbp+80h] BYREF
  __int128 v85; // [rsp+190h] [rbp+90h]
  __int64 v86; // [rsp+1A0h] [rbp+A0h]

  StatusBufferSize = a2->StatusBufferSize;
  StatusBuffer = a2->StatusBuffer;
  DestinationHandle = (_NDIS_OPEN_BLOCK *)a2->DestinationHandle;
  StatusCode = a2->StatusCode;
  *(_DWORD *)v76 = 0;
  v70 = 0;
  v68 = 0;
  v8 = StatusBufferSize;
  v67 = 0;
  v72 = 0;
  NewIrql[0] = 2;
  Src = StatusBuffer;
  *(_DWORD *)v71 = StatusBufferSize;
  v79 = DestinationHandle;
  memset(&v81, 0, sizeof(v81));
  v82 = 0LL;
  v65 = 0;
  v64 = 0;
  v75 = 0;
  v66 = 0;
  v73 = 0;
  v74 = 0;
  ifOperStatusFlags = 0;
  v84 = 0LL;
  v86 = 0LL;
  v85 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      0,
      0x18u,
      0x37u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      StatusCode,
      DestinationHandle);
  v9 = 0LL;
  if ( DestinationHandle != (_NDIS_OPEN_BLOCK *)&ndisIntReqWmi )
    v9 = DestinationHandle;
  v77 = v9;
  v10 = v9;
  if ( v9 )
  {
    v24 = v9->Header.Type == 18;
    v77 = v9;
    if ( !v24 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x38u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          a1);
      v10 = 0LL;
      v77 = 0LL;
    }
  }
  v11 = *(_OWORD *)&a2->PortNumber;
  *(_OWORD *)&v80.Header.Type = *(_OWORD *)&a2->Header.Type;
  *(_OWORD *)&v80.PortNumber = v11;
  v12 = *(_OWORD *)&a2->StatusBuffer;
  *(_OWORD *)&v80.DestinationHandle = *(_OWORD *)&a2->DestinationHandle;
  *(_OWORD *)&v80.StatusBuffer = v12;
  v13 = *(_OWORD *)a2->NdisReserved;
  *(_OWORD *)&v80.Guid.Data2 = *(_OWORD *)&a2->Guid.Data2;
  *(_OWORD *)v80.NdisReserved = v13;
  *(_OWORD *)&v80.NdisReserved[2] = *(_OWORD *)&a2->NdisReserved[2];
  if ( (unsigned int)(StatusCode - 1073807371) > 1 )
  {
    if ( StatusCode == 1073807383 )
    {
      Flags = a2->Flags;
      a1->LinkStateIndicationFlags |= 7u;
      v14 = (Flags & 8) != 0;
      if ( !StatusBuffer )
        goto LABEL_13;
      v33 = *(_DWORD *)v71;
      if ( *(_DWORD *)v71 < 0x28u )
        goto LABEL_13;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v62) = *((_DWORD *)StatusBuffer + 1);
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0x39u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          (char)a1,
          v62);
        v33 = *(_DWORD *)v71;
      }
      if ( v33 == -2 )
      {
        *(_DWORD *)v71 = 40;
        a2->StatusBufferSize = 40;
      }
      v34 = *((_DWORD *)StatusBuffer + 1);
      if ( v34 == MediaConnectStateConnected )
      {
        v24 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v76 = 1073807371;
        v65 = v24;
        v66 = !v24;
      }
      else if ( v34 == MediaConnectStateDisconnected )
      {
        v24 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v76 = 1073807372;
        v65 = !v24;
        v66 = v24;
      }
      else
      {
        v65 = 1;
      }
      v35 = a1->MajorNdisVersion < 6u;
      a1->MediaConnectState = v34;
      a1->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
      a1->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      a1->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
      a1->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
      if ( v35 )
      {
        MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *((_QWORD *)StatusBuffer + 2) )
          a1->MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *((_QWORD *)StatusBuffer + 3) )
          a1->MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
        v39 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v39 == 0x40000000 || v39 < *((_QWORD *)StatusBuffer + 2) )
          a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        v40 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v40 == 0x40000000 || v40 < *((_QWORD *)StatusBuffer + 3) )
          a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      }
      a1->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
      v67 = ndisIfSetInterfaceState(a1, 1u, 2u);
      v36 = v67;
      goto LABEL_82;
    }
    *(_DWORD *)v71 = v8;
    if ( StatusCode != 1073807394 )
    {
      if ( StatusCode == 1073807379 )
      {
        a1->LinkStateIndicationFlags |= 2u;
        v41 = ndisMAllocateRequest(&ndisIntReqGeneric, 0x10107u, NdisRequestQueryInformation, 0LL, 4u);
        v42 = v41;
        if ( v41 )
        {
          *(_DWORD *)&v41->NdisReserved[16] |= 2u;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(&a1->Lock, 2u);
          v43 = ndisQueueRequestOnTopAsync(a1, v42);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
          if ( v43 != 259 )
            ExFreePoolWithTag(v42, 0);
        }
        v68 = 1;
        v14 = 0;
        v67 = 0;
        *(_DWORD *)v76 = 0;
        v65 = 0;
        v66 = 0;
      }
      else
      {
        *(_DWORD *)v71 = v8;
        if ( StatusCode == 1073872897 || (*(_DWORD *)v71 = v8, StatusCode == 1073872899) )
        {
          v44 = ndisTopTcpConnectionOffloadStatus(a1, a2);
          v45 = 0;
          if ( !v44 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v45) = 4;
              WPP_RECORDER_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v45,
                24,
                59,
                (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                StatusCode);
            }
            return;
          }
        }
        v68 = 0;
        v14 = 0;
        v67 = 0;
        *(_DWORD *)v76 = 0;
        v65 = 0;
        v66 = 0;
        if ( StatusCode == 1073807384 )
        {
          v46 = a2->Flags;
          v68 = 0;
          v67 = 0;
          *(_DWORD *)v76 = 0;
          v65 = 0;
          v66 = 0;
          if ( (v46 & 4) != 0 )
          {
            v66 = 1;
            *(_DWORD *)v76 = 1073807371;
            a1->MediaConnectState = MediaConnectStateConnected;
            v36 = ndisIfSetInterfaceState(a1, 1u, 2u);
            v67 = v36;
            MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
            v80.Flags |= 0x1000u;
            v14 = 0;
            *((_QWORD *)&v84 + 1) = (unsigned int)MiniportMediaDuplexState;
            v85 = *(_OWORD *)&a1->MiniportXmitLinkSpeed;
            v86 = *(_QWORD *)&a1->MiniportPauseFunctions;
            v80.StatusBuffer = &v84;
            *(_QWORD *)&v84 = 0x100280180LL;
            v80.StatusCode = 1073807383;
            v80.StatusBufferSize = 40;
            v68 = 0;
LABEL_120:
            v65 = 0;
LABEL_82:
            if ( v36 )
            {
              IfBlock = a1->IfBlock;
              LODWORD(v82) = 786816;
              v72 = 1;
              HIDWORD(v82) = IfBlock->ifOperStatus;
              ifOperStatusFlags = IfBlock->ifOperStatusFlags;
              v81.StatusBuffer = &v82;
              v81.Header = (_NDIS_OBJECT_HEADER)7340440;
              v81.SourceHandle = a1;
              v81.StatusCode = 1073807395;
              v81.StatusBufferSize = 12;
            }
          }
        }
      }
LABEL_13:
      v15 = 0;
      a1->MiniportThread = 0LL;
      BaseMiniport = a1;
      KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
      v18 = ndisReferenceTopMiniportByNameForNsi(
              a1,
              0x200000,
              v17,
              a1->MiniportMediaType == NdisMediumNative802_11,
              NSIREF_STATUS,
              MPREF_SI_NSI);
      v19 = v18;
      if ( !v18 )
        goto LABEL_86;
      if ( v18 == a1 )
      {
        if ( ndisReferenceMiniportByHandle(a1->BaseMiniport, 0, 0x38u) )
        {
          BaseMiniport = a1->BaseMiniport;
          v73 = 1;
        }
      }
      else
      {
        v15 = -1073741823;
      }
      ndisDereferenceMiniportForNsi(v19, 1u, 0x39u);
      if ( v15 )
      {
LABEL_86:
        v66 = 0;
        v72 = 0;
      }
      v20 = (struct _NDIS_QOS_PARAMETERS *)Src;
      ndisWriteWmiStatusIndication(
        BaseMiniport,
        BaseMiniport->pAdapterInstanceName,
        a2,
        StatusCode,
        (int *)Src,
        *(unsigned int *)v71);
      v21 = *(_DWORD *)v76;
      if ( v66 )
        ndisWriteWmiStatusIndication(BaseMiniport, BaseMiniport->pAdapterInstanceName, a2, *(unsigned int *)v76, 0LL, 0);
      if ( v72 )
        ndisWriteWmiStatusIndication(
          BaseMiniport,
          BaseMiniport->pAdapterInstanceName,
          a2,
          0x40010023u,
          (int *)&v82,
          0xCu);
      v22 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v24 = v73 == 0;
      NewIrql[0] = v22;
      a1->MiniportThread = KeGetCurrentThread();
      if ( !v24 )
        ndisDereferenceMiniport(BaseMiniport, 0x38u);
      if ( StatusCode == 1073807383 )
        StatusCode = v21;
      if ( StatusCode == 1073807384 )
      {
        if ( (a2->Flags & 4) != 0 )
        {
          StatusCode = 1073807371;
          goto LABEL_39;
        }
      }
      else
      {
        if ( StatusCode > 1073872902 )
        {
          if ( StatusCode == 1073872912 )
          {
            ndisMIndicateReceiveFilterCapsChange(a1, 1073872912, v20, *(unsigned int *)v71, 1u);
          }
          else
          {
            v23 = 1073872960;
            if ( StatusCode == 1073872960 )
            {
              ndisMIndicateNicSwitchCapsChange(a1, 1073872960, v20, *(unsigned int *)v71, 1u);
            }
            else if ( StatusCode > 1073873055 )
            {
              if ( StatusCode <= 1073873057 )
              {
                ndisMIndicateQosParametersChange(a1, StatusCode, v20, v71[0]);
              }
              else if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
              {
                ndisMIndicateHwTimestampCapabilitiesChange(a1, StatusCode, v20, *(unsigned int *)v71, 1, &v74);
                if ( StatusCode == 1074073601 )
                {
                  if ( v74 )
                    ndisIfScheduleTimestampCapabilityChangeNotification(a1, NewIrql[0]);
                }
              }
            }
          }
          goto LABEL_42;
        }
        if ( StatusCode == 1073872902 )
        {
          v27 = 1;
          v64 = 1;
          ndisIndicateOffloadChangeInternal(a1, v20, *(unsigned int *)v71);
LABEL_43:
          if ( v79 != (_NDIS_OPEN_BLOCK *)&ndisIntReqWmi )
          {
            OpenQueue = a1->OpenQueue;
            if ( OpenQueue )
            {
              v29 = v77;
              while ( v29 && v29 != OpenQueue )
              {
                MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_63:
                OpenQueue = MiniportNextOpen;
                v24 = MiniportNextOpen == 0LL;
                v27 = v64;
                if ( v24 )
                  goto LABEL_64;
              }
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
                goto LABEL_156;
              if ( v27 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
              {
                if ( !v75 )
                {
                  p_WorkItem = &OpenQueue->StatusUnbindWorkItem->WorkItem;
                  if ( p_WorkItem )
                  {
                    ndisReferenceMiniportNoCheck(a1, MPREF_PT_LEGACYREBIND);
                    OpenQueue->StatusUnbindWorkItem = 0LL;
                    v75 = 1;
                    ndisScheduleWorkItemInternal(p_WorkItem);
                  }
                }
                goto LABEL_156;
              }
              switch ( StatusCode )
              {
                case 1073938515:
                  ndisOpenIndicatePMCapabilities(OpenQueue, a2);
                  goto LABEL_54;
                case 1073938513:
                  if ( a2->StatusBufferSize < 4 )
                    goto LABEL_156;
                  p_WOLPatternList = &OpenQueue->WOLPatternList;
                  break;
                case 1073938514:
                  if ( a2->StatusBufferSize < 4 )
                  {
LABEL_156:
                    MiniportNextOpen = OpenQueue->MiniportNextOpen;
                    KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_62:
                    v29 = v77;
                    goto LABEL_63;
                  }
                  p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
                  break;
                default:
LABEL_54:
                  v31 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker, 7u);
                  ++OpenQueue->References;
                  KeReleaseSpinLock(&OpenQueue->RefCountLock, v31);
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
                      if ( !v65 && !a2->PortNumber )
                      {
                        v55 = a2->StatusCode;
                        if ( v55 == 1073807383 || v55 == 1073807384 && (a2->Flags & 4) != 0 )
                        {
                          v56 = 0LL;
                          v57 = 0LL;
                        }
                        else
                        {
                          v56 = *(unsigned int *)v71;
                          v57 = Src;
                        }
                        ((void (__fastcall *)(void *, _QWORD, void *, __int64, unsigned int, enum _NDIS_MP_REFTAG *, _DWORD, _DWORD))OpenQueue->StatusHandler)(
                          OpenQueue->ProtocolBindingContext,
                          (unsigned int)StatusCode,
                          v57,
                          v56,
                          IfIndex,
                          *(enum _NDIS_MP_REFTAG **)v61,
                          v62,
                          *(_DWORD *)v63);
                        StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                        if ( StatusCompleteHandler )
                          StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                      }
                    }
                    else if ( !v68 )
                    {
                      ndisInvokeStatus(OpenQueue, a2);
                      if ( a2->StatusCode == 1073807384 && (a2->Flags & 4) != 0 )
                        ndisInvokeStatus(OpenQueue, &v80);
                      if ( v67 )
                        ndisInvokeStatus(OpenQueue, &v81);
                    }
                    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
                    a1->MiniportThread = KeGetCurrentThread();
                    KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                    OpenQueue->OpenFlags &= ~0x100u;
                    KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                  }
                  MiniportNextOpen = OpenQueue->MiniportNextOpen;
                  ndisMDereferenceOpenLocked((__int64)OpenQueue, 7u);
                  goto LABEL_62;
              }
              if ( ndisDeletePatternEntry(p_WOLPatternList, *(_DWORD *)a2->StatusBuffer) )
              {
                --LODWORD(a2->NdisReserved[2]);
                goto LABEL_54;
              }
              goto LABEL_156;
            }
LABEL_64:
            if ( StatusCode == 1073938516 )
              ndisUpdateAndIndicatePMCapabilities(a1);
            if ( v70 && (a2->Flags & 2) == 0 )
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
              v23,
              0x18u,
              0x3Fu,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              (char)a1,
              StatusCode,
              a2->DestinationHandle);
          return;
        }
      }
      if ( StatusCode != 1073807371 )
      {
        switch ( StatusCode )
        {
          case 1073807372:
            v49 = a1->Flags;
            v50 = a1->MediaSenseDisconnectCount + 1;
            a1->MediaSenseDisconnectCount = v50;
            if ( (v49 & 0x20000000) != 0 || v50 == 1 )
            {
              v51 = 1;
              v70 = 1;
              v23 = v49;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_qLLL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v49,
                  24,
                  60,
                  (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                  (char)a1,
                  v49,
                  a1->PnPFlags,
                  a1->CurrentDevicePowerState);
                v23 = a1->Flags;
              }
              v49 = v23;
              if ( byte_1C00EE584 < 0 )
              {
                McTemplateK0jqxddq_EtwWriteTransfer(
                  v23,
                  (unsigned int)&MiniportStatusIndicationDisconnect,
                  (_DWORD)a1 + 4008,
                  (_DWORD)a1 + 4008,
                  a1->IfIndex,
                  a1->NetLuid.Value,
                  v23,
                  a1->PnPFlags,
                  a1->CurrentDevicePowerState);
                v49 = a1->Flags;
              }
            }
            else
            {
              v51 = v70;
            }
            v52 = v49 & 0xDFFFFFFF;
            a1->MediaConnectState = MediaConnectStateDisconnected;
            a1->Flags = v52;
            if ( !v14 )
            {
              a1->Flags = v52 | 0x4000000;
              if ( v51 )
                ndisSetMediaDisconnectTimer(a1);
            }
            break;
          case 1073807384:
            v65 = 1;
            if ( *(_DWORD *)v71 >= 4u && (byte_1C00EE585 & 1) != 0 )
            {
              LODWORD(v62) = v20->Header;
              *(_QWORD *)v61 = a1->NetLuid.Value;
              IfIndex = a1->IfIndex;
              McTemplateK0jqxd_EtwWriteTransfer();
            }
            break;
          case 1073807395:
            v65 = 1;
            if ( *(_DWORD *)v71 >= 0xCu )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v63 = v20->NumTrafficClasses;
                WPP_RECORDER_SF_qDL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v23,
                  0x18u,
                  0x3Eu,
                  (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                  (char)a1,
                  v20->Flags,
                  *(_QWORD *)v63);
              }
              if ( v20->Flags != 1 )
              {
                if ( (byte_1C00EE585 & 1) == 0 )
                  break;
                *(_DWORD *)v63 = v20->NumTrafficClasses;
                LODWORD(v62) = v20->Flags;
                goto LABEL_125;
              }
              if ( (byte_1C00EE585 & 1) != 0 )
              {
                *(_DWORD *)v63 = v20->NumTrafficClasses;
                LODWORD(v62) = 1;
LABEL_125:
                *(_QWORD *)v61 = a1->NetLuid.Value;
                IfIndex = a1->IfIndex;
                McTemplateK0jqxqq_EtwWriteTransfer();
              }
            }
            break;
        }
LABEL_42:
        v27 = 0;
        goto LABEL_43;
      }
LABEL_39:
      v25 = a1->Flags;
      ++a1->MediaSenseConnectCount;
      if ( (v25 & 0x20000000) == 0 )
      {
        v70 = 1;
        v23 = v25;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_qLLL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            24,
            61,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            (char)a1,
            v25,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
          v23 = a1->Flags;
        }
        v25 = v23;
        if ( byte_1C00EE584 < 0 )
        {
          McTemplateK0jqxddq_EtwWriteTransfer(
            v23,
            (unsigned int)&MiniportStatusIndicationConnect,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            v23,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
          v25 = a1->Flags;
        }
      }
      v26 = v25 | 0x20000000;
      a1->MediaConnectState = MediaConnectStateConnected;
      a1->Flags = v26;
      if ( !v14 )
      {
        a1->Flags = v26 | 0x4000000;
        ndisCancelMediaDisconnectTimer(a1);
      }
      goto LABEL_42;
    }
    if ( !(unsigned int)ndisUpdateMiniportPortStates(a1, a2) )
    {
      v14 = 0;
      *(_DWORD *)v76 = 0;
      *(_DWORD *)v71 = v8;
      v67 = 0;
      v65 = 0;
      v66 = 0;
      if ( a2->PortNumber )
        goto LABEL_13;
      v67 = ndisIfSetInterfaceState(a1, 1u, 2u);
      v36 = v67;
      *(_DWORD *)v76 = 0;
      *(_DWORD *)v71 = v8;
      v66 = 0;
      goto LABEL_120;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        0,
        0x18u,
        0x3Au,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        (char)a1,
        34,
        v10);
  }
}
