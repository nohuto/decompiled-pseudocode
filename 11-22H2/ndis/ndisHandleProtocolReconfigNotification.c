/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C0156158
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00271A0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F2A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024C34 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026D48 (WPP_RECORDER_SF_Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ndisMapOpenByName @ 0x1C007467C (ndisMapOpenByName.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123E0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112418 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124F0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115960 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABCC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C01569CC (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING a2,
        void *a3,
        unsigned int a4,
        int a5)
{
  __int64 v7; // rdi
  char v8; // r13
  char v9; // r12
  int v10; // edx
  int v11; // esi
  int v12; // r9d
  struct _NDIS_PROTOCOL_BLOCK *v13; // rbx
  char v14; // r14
  const UNICODE_STRING *v15; // rsi
  int v16; // edx
  int v17; // r9d
  struct _NDIS_MINIPORT_BLOCK *v18; // r13
  bool v19; // cf
  bool v21; // r15
  KIRQL v22; // r13
  struct _KEVENT *v23; // rcx
  struct _NDIS_MINIPORT_BLOCK *v24; // rdx
  struct _NDIS_PROTOCOL_BLOCK *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+50h] [rbp-B0h]
  unsigned int v27; // [rsp+58h] [rbp-A8h]
  void *v28; // [rsp+68h] [rbp-98h]
  struct _KEVENT v29; // [rsp+70h] [rbp-90h] BYREF
  char v30[160]; // [rsp+90h] [rbp-70h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v31; // [rsp+130h] [rbp+30h] BYREF

  v28 = a3;
  v25[0] = 0LL;
  v26 = 0LL;
  v27 = a4;
  v7 = 0LL;
  memset(&v31, 0, sizeof(v31));
  memset(&v29, 0, sizeof(v29));
  v8 = 0;
  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x12u,
      (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
      &a2->Length);
  v11 = ndisReferenceProtocolByName(a2, v25, 0, PTREF_RECONFIG);
  if ( v11 < 0 )
  {
    v13 = 0LL;
    goto LABEL_29;
  }
  v14 = 1;
  if ( SourceString->Length )
  {
    v15 = SourceString;
    while ( 1 )
    {
      v13 = v25[0];
      WAIT_FOR_PROTO_MUTEX(v25[0]);
      v7 = ndisMapOpenByName(v15, (__int64)v13);
      if ( v7 )
        break;
      RELEASE_PROT_MUTEX(v13);
      ndisDereferenceProtocol(v13, v16, 4u, v17);
      if ( !v8 )
      {
        v8 = 1;
        v25[0] = 0LL;
      }
      if ( (int)ndisReferenceProtocolByName(a2, v25, 1u, PTREF_RECONFIG) < 0 )
      {
        v18 = v26;
        v14 = 0;
        v13 = v25[0];
        v11 = -1073741772;
        goto LABEL_25;
      }
    }
    v19 = v13->MajorNdisVersion < 6u;
    v9 = 1;
    v26 = *(struct _NDIS_MINIPORT_BLOCK **)(v7 + 16);
    if ( v19 && !v13->PnPEventHandler )
    {
      RELEASE_PROT_MUTEX(v13);
      v18 = v26;
      v11 = -1073741823;
LABEL_24:
      ndisMDereferenceOpenUnlocked(v7, 4u);
      goto LABEL_25;
    }
  }
  else
  {
    v13 = v25[0];
    if ( v25[0]->MajorNdisVersion < 6u && !v25[0]->PnPEventHandler )
    {
      v14 = 0;
      v11 = -1073741823;
      v18 = 0LL;
      goto LABEL_25;
    }
    WAIT_FOR_PROTO_MUTEX(v25[0]);
  }
  ndisInitializeNetPnPEvent(&v31, &v29);
  if ( a5 == 3 )
  {
    v31.NetPnPEvent.NetEvent = NetEventReconfigure;
  }
  else
  {
    if ( a5 != 9 )
    {
      v11 = -1073741808;
      RELEASE_PROT_MUTEX(v13);
LABEL_22:
      v18 = v26;
      goto LABEL_23;
    }
    v31.NetPnPEvent.NetEvent = NetEventBindList;
  }
  v31.NetPnPEvent.Buffer = v28;
  v31.NetPnPEvent.BufferLength = v27;
  v11 = ndisDeliverNetPnPEventSynchronously(v13, (struct _NDIS_PROTOCOL_BLOCK *)v7, &v31);
  RELEASE_PROT_MUTEX(v13);
  v21 = v11 == 65539;
  if ( !v7 )
    goto LABEL_22;
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 232));
  if ( (*(_DWORD *)(v7 + 224) & 0x80000) == 0 )
  {
    *(_DWORD *)(v7 + 224) &= ~0x10u;
    v23 = *(struct _KEVENT **)(v7 + 912);
    if ( v23 )
    {
      KeSetEvent(v23, 0, 0);
      *(_QWORD *)(v7 + 912) = 0LL;
      v21 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 232), v22);
  v18 = v26;
  if ( v26 && v21 )
  {
    v13 = v25[0];
    if ( v25[0]->MajorNdisVersion <= 6u && (v25[0]->MajorNdisVersion != 6 || v25[0]->MinorNdisVersion < 0x28u) )
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5112LL));
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v7 + 856), BindingDisabled, Reason_RebindNeeded) )
      {
        memset(v30, 0, sizeof(v30));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v7 + 856),
            (struct NDIS_PNPTRACE_LOCALS *)v30);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v24,
              0x1Cu,
              0x13u,
              (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
              *(unsigned __int16 **)&v30[8],
              *(_QWORD *)v30);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5112LL), v24);
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5112LL), RunSynchronous, 0);
    }
  }
  else
  {
    v13 = v25[0];
  }
LABEL_23:
  v14 = v9;
  if ( v9 )
    goto LABEL_24;
LABEL_25:
  if ( v13 )
    ndisDereferenceProtocol(v13, v10, 4u, v12);
  if ( v14 )
    ndisDereferenceMiniport(v18, 0x34u);
LABEL_29:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
      v13);
  return (unsigned int)v11;
}
