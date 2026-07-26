/*
 * XREFs of ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000ABC0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C000999C (WPP_RECORDER_SF_Dqqd.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009D80 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009FB0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B240 (WPP_RECORDER_SF_qDqd.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C00239B0 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0101C6C (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C0101CA0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  KSPIN_LOCK *p_Lock; // r12
  KIRQL v3; // al
  KIRQL v4; // r8
  unsigned int Flags; // edx
  _LIST_ENTRY *p_OidRequestList; // rcx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v8; // rax
  _NDIS_OID_REQUEST *p_Blink; // r13
  __int64 v10; // r8
  unsigned int v11; // eax
  struct _NDIS_FILTER_BLOCK *Miniport; // rcx
  NDIS_OID Oid; // r10d
  __int64 v14; // r9
  __int64 Flink_low; // rdx
  unsigned __int8 (__fastcall *v16)(__int128 *, __int64, __int64, __int64); // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  KIRQL v20; // al
  KIRQL v21; // al
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r15
  NDIS_OID v23; // r14d
  int v24; // edx
  NDIS_STATUS v25; // ebx
  int v26; // r8d
  int v27; // r9d
  struct _NDIS_OID_REQUEST *v28; // rsi
  struct _NDIS_OID_REQUEST *v29; // rdx
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  NdisWatchdogState *m_ptr; // rcx
  int v37; // [rsp+28h] [rbp-89h]
  __int128 v38; // [rsp+58h] [rbp-59h] BYREF
  __int128 v39; // [rsp+68h] [rbp-49h]
  __int128 v40; // [rsp+78h] [rbp-39h]
  _QWORD v41[5]; // [rsp+88h] [rbp-29h] BYREF
  int v42; // [rsp+B0h] [rbp-1h]
  int v43; // [rsp+B4h] [rbp+3h]
  _QWORD v44[5]; // [rsp+B8h] [rbp+7h] BYREF
  NDIS_STATUS v45; // [rsp+E0h] [rbp+2Fh]
  int v46; // [rsp+E4h] [rbp+33h]
  struct _NDIS_OID_REQUEST *v47; // [rsp+118h] [rbp+67h] BYREF

  p_Lock = &Parameter->Lock;
LABEL_2:
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v4 = v3;
    Flags = Parameter->Flags;
    Parameter->LockThread = KeGetCurrentThread();
    if ( (Flags & 0x800) != 0 )
      break;
    p_OidRequestList = &Parameter->OidRequestList;
    Flink = Parameter->OidRequestList.Flink;
    if ( Flink == &Parameter->OidRequestList )
      break;
    Parameter->Flags = Flags | 0x800;
    if ( Flink->Blink != p_OidRequestList || (v8 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_OidRequestList->Flink = v8;
    v8->Blink = p_OidRequestList;
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, v4);
    if ( !Flink )
      return;
    p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
    LODWORD(Flink[1].Flink) &= ~4u;
    v30 = Parameter->Header.Type == 17;
    v10 = 0LL;
    v38 = 0LL;
    v11 = 73;
    v39 = 0LL;
    v40 = 0LL;
    if ( v30 )
      Miniport = Parameter;
    else
      Miniport = (struct _NDIS_FILTER_BLOCK *)Parameter->Miniport;
    if ( !p_Blink->PortNumber || ((__int64)Miniport[2].Miniport & 0x200) == 0 )
    {
      Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
      v14 = 146LL;
      while ( v11 >= (unsigned int)v10 )
      {
        if ( *((_DWORD *)&unk_1C00CEAB0 + 6 * v11) == Oid )
        {
          HIDWORD(Flink[1].Flink) = v11;
          LODWORD(Flink[1].Flink) |= 4u;
          Flink_low = LODWORD(Flink[1].Flink);
          HIDWORD(v40) = 0;
          *(_QWORD *)&v39 = Parameter;
          *(_QWORD *)&v38 = 0LL;
          *(_QWORD *)&v40 = (char *)Flink - 72;
          if ( (Flink_low & 0x220) != 0 )
            *((_QWORD *)&v39 + 1) = Flink[2].Flink;
          else
            *((_QWORD *)&v39 + 1) = 0LL;
          if ( (Flink_low & 0x40) != 0 )
            *((_QWORD *)&v38 + 1) = Flink[2].Flink;
          else
            *((_QWORD *)&v38 + 1) = 0LL;
          DWORD2(v40) = 0;
          if ( (Flink_low & 0x840080) != 0 )
            break;
          v16 = (unsigned __int8 (__fastcall *)(__int128 *, __int64, __int64, __int64))*((_QWORD *)&unk_1C00CEAB0
                                                                                       + 3 * v11
                                                                                       + 1);
          if ( !v16 || v16(&v38, Flink_low, v10, v14) != 1 )
            break;
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v38, v17, v18, v19);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v31, v32, 0x15u, v37);
          goto LABEL_2;
        }
        if ( *((_DWORD *)&unk_1C00CEAB0 + 6 * v11) <= Oid )
        {
          v10 = v11 + 1;
        }
        else
        {
          if ( !v11 )
            break;
          v14 = v11 - 1;
        }
        v11 = v10 + ((unsigned int)(v14 - v10 + 1) >> 1);
        if ( v11 > (unsigned int)v14 )
          break;
      }
    }
    v20 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v30 = (Parameter->Flags & 0x10000) == 0;
    Parameter->LockThread = 0LL;
    if ( v30 )
    {
      KeReleaseSpinLock(p_Lock, v20);
      LODWORD(Flink[1].Flink) |= 0x20000u;
      v21 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      Parameter->PendingOidRequest = p_Blink;
      Parameter->LockThread = 0LL;
      KeReleaseSpinLock(p_Lock, v21);
      ndisDrainWatchdog(Parameter->PendingOidWatchdog.m_ptr);
      ndisArmWatchdog(
        Parameter->PendingOidWatchdog.m_ptr,
        Parameter,
        0x24u,
        Parameter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler,
        0x88B8u,
        p_Blink->DATA.QUERY_INFORMATION.Oid);
      FilterDriver = Parameter->FilterDriver;
      v23 = p_Blink->DATA.QUERY_INFORMATION.Oid;
      v47 = 0LL;
      v25 = ndisOidCloneForCompatibility(&Parameter->Header, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1, &v47);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          v26,
          104,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          (char)Parameter,
          v23,
          (char)p_Blink);
      }
      v28 = v47;
      if ( !v25 )
      {
        v29 = p_Blink;
        if ( v47 )
          v29 = v47;
        v25 = FilterDriver->DefaultFilterCharacteristics.OidRequestHandler(Parameter->FilterModuleContext, v29);
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          v26,
          105,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          (char)Parameter,
          v23,
          (char)p_Blink,
          v25);
      v30 = v25 == 259;
      if ( v25 != 259 )
      {
        if ( v28 )
          ndisOidFreeInternalCloneRequest(Parameter, v28, 1, 0LL);
        v30 = v25 == 259;
      }
      if ( !v30 )
      {
        m_ptr = (NdisWatchdogState *)Parameter->PendingOidWatchdog.m_ptr;
        if ( m_ptr != (NdisWatchdogState *)-1LL )
          NdisWatchdogState::CancelTimer(m_ptr);
        v44[0] = 0LL;
        v44[1] = 0LL;
        v44[3] = 0LL;
        v46 = 0;
        v44[4] = p_Blink;
        v44[2] = Parameter;
        v45 = v25;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v44, v24, v26, v27);
      }
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v20);
      v41[0] = 0LL;
      v41[1] = 0LL;
      v41[3] = 0LL;
      v43 = 0;
      v41[4] = (char *)Flink - 72;
      v41[2] = Parameter;
      v42 = -1073676286;
      ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v41, v33, v34, v35);
    }
  }
  Parameter->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, v3);
}
