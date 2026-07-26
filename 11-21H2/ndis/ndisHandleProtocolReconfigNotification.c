/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C014A20C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0027DB8 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001CC34 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0025C84 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisMapOpenByName @ 0x1C006F280 (ndisMapOpenByName.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106340 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106378 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01066C4 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE5C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C014AAA8 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING a2,
        void *a3,
        unsigned int a4,
        int a5)
{
  struct _NDIS_PROTOCOL_BLOCK *v5; // rbx
  __int64 v8; // rdi
  char v9; // r12
  char v10; // r15
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  struct _NDIS_MINIPORT_BLOCK *v19; // r12
  bool v20; // r15
  KIRQL v21; // r13
  struct _KEVENT *v22; // rcx
  bool v23; // zf
  struct _NDIS_MINIPORT_BLOCK *v24; // rdx
  char v26; // [rsp+40h] [rbp-C0h]
  struct _NDIS_PROTOCOL_BLOCK *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v28; // [rsp+50h] [rbp-B0h]
  unsigned int v29; // [rsp+58h] [rbp-A8h]
  void *v30; // [rsp+60h] [rbp-A0h]
  struct _KEVENT v31; // [rsp+68h] [rbp-98h] BYREF
  char v32[160]; // [rsp+80h] [rbp-80h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v33; // [rsp+120h] [rbp+20h] BYREF

  v5 = 0LL;
  v30 = a3;
  v27 = 0LL;
  v28 = 0LL;
  v29 = a4;
  v8 = 0LL;
  memset(&v33, 0, sizeof(v33));
  v26 = 0;
  v9 = 0;
  memset(&v31, 0, sizeof(v31));
  v10 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x12u,
      (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
      &a2->Length);
  v12 = ndisReferenceProtocolByName(a2, &v27, 0, PTREF_RECONFIG);
  if ( v12 >= 0 )
  {
    if ( SourceString->Length )
    {
      while ( 1 )
      {
        v5 = v27;
        WAIT_FOR_PROTO_MUTEX(v27);
        v15 = ndisMapOpenByName(SourceString, (__int64)v5);
        v8 = v15;
        if ( v15 )
          break;
        RELEASE_PROT_MUTEX(v5);
        LOBYTE(v16) = 4;
        ndisDereferenceProtocol(v5, v17, v16, v18);
        if ( !v9 )
        {
          v9 = 1;
          v27 = 0LL;
        }
        if ( (int)ndisReferenceProtocolByName(a2, &v27, 1u, PTREF_RECONFIG) < 0 )
        {
          v5 = v27;
          v12 = -1073741772;
          v19 = v28;
          goto LABEL_40;
        }
      }
      v26 = 1;
      v28 = *(struct _NDIS_MINIPORT_BLOCK **)(v15 + 16);
      v10 = 1;
      if ( v5->MajorNdisVersion < 6u && !v5->PnPEventHandler )
      {
        RELEASE_PROT_MUTEX(v5);
        v19 = v28;
        v12 = -1073741823;
        goto LABEL_21;
      }
    }
    else
    {
      v5 = v27;
      if ( v27->MajorNdisVersion < 6u && !v27->PnPEventHandler )
      {
        v12 = -1073741823;
        v10 = 0;
        v19 = 0LL;
        goto LABEL_40;
      }
      WAIT_FOR_PROTO_MUTEX(v27);
    }
    ndisInitializeNetPnPEvent(&v33, &v31);
    if ( a5 == 3 )
    {
      v33.NetPnPEvent.NetEvent = NetEventReconfigure;
    }
    else
    {
      if ( a5 != 9 )
      {
        v12 = -1073741808;
        RELEASE_PROT_MUTEX(v5);
        goto LABEL_19;
      }
      v33.NetPnPEvent.NetEvent = NetEventBindList;
    }
    v33.NetPnPEvent.Buffer = v30;
    v33.NetPnPEvent.BufferLength = v29;
    v12 = ndisDeliverNetPnPEventSynchronously(v5, (struct _NDIS_PROTOCOL_BLOCK *)v8, &v33);
    RELEASE_PROT_MUTEX(v5);
    v20 = v12 == 65539;
    if ( v8 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 232));
      if ( (*(_DWORD *)(v8 + 224) & 0x80000) == 0 )
      {
        *(_DWORD *)(v8 + 224) &= ~0x10u;
        v22 = *(struct _KEVENT **)(v8 + 912);
        if ( v22 )
        {
          KeSetEvent(v22, 0, 0);
          *(_QWORD *)(v8 + 912) = 0LL;
          v20 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 232), v21);
      v19 = v28;
      if ( v28 && v20 && (v23 = v5->MajorNdisVersion == 6, v5->MajorNdisVersion <= 6u) )
      {
        v5 = v27;
        if ( !v23 || v27->MinorNdisVersion < 0x28u )
        {
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v8 + 16) + 5112LL));
          if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v8 + 856), BindingDisabled, Reason_RebindNeeded) )
          {
            memset(v32, 0, sizeof(v32));
            if ( (unsigned __int8)byte_1C00EC66B >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_PROTOCOL_LINK **)(v8 + 856),
                (struct NDIS_PNPTRACE_LOCALS *)v32);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v24,
                  0x1Cu,
                  0x13u,
                  (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
                  *(unsigned __int16 **)&v32[8],
                  *(_QWORD *)v32);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v8 + 16) + 5112LL), v24);
          Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v8 + 16) + 5112LL), RunSynchronous, 0);
        }
      }
      else
      {
        v5 = v27;
      }
LABEL_20:
      v10 = v26;
      if ( !v26 )
      {
LABEL_40:
        if ( v5 )
        {
          LOBYTE(v13) = 4;
          ndisDereferenceProtocol(v5, v11, v13, v14);
        }
        if ( v10 )
          ndisDereferenceMiniport(v19, 0x34u);
        goto LABEL_44;
      }
LABEL_21:
      ndisMDereferenceOpenUnlocked(v8, 4u);
      goto LABEL_40;
    }
LABEL_19:
    v19 = v28;
    goto LABEL_20;
  }
LABEL_44:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
      v5);
  return (unsigned int)v12;
}
