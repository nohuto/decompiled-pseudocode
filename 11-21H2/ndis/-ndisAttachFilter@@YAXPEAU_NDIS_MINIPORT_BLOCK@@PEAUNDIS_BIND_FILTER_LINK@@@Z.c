/*
 * XREFs of ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0105808
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0019104 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C001A8D8 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF__guid_DqD @ 0x1C001A8FC (WPP_RECORDER_SF__guid_DqD.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x1C001A9C8 (WPP_RECORDER_SF__guid_Dq.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0105940 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C012ADC4 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 */

void __fastcall ndisAttachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *this, __int64 a3)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx
  struct _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // rbp
  unsigned int v7; // edi
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-F8h]
  char v12[160]; // [rsp+50h] [rbp-C8h] BYREF

  p = this->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&p->_t.Guid,
      a3,
      0x1Fu,
      v11,
      (__int64)&p->_t.Guid);
  v7 = ndisAttachFilterInner(a1, RunningDriver, this->FilterIndex, this);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&this->BindDriver._p->_t.Guid,
      v8,
      0x20u,
      v11,
      (__int64)&this->BindDriver._p->_t.Guid);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v7 )
  {
    this->BindState.m_LastErrorCode = v7;
    if ( Ndis::BindState::SetBinding(&this->BindState, BindingDisabled, Reason_LastBindAttemptFailed) )
    {
      memset(v12, 0, sizeof(v12));
      if ( (unsigned __int8)byte_1C00EC66B >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v12);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            0x1Cu,
            0x21u,
            (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
            *(unsigned __int16 **)&v12[8],
            *(_QWORD *)v12);
      }
    }
    if ( ndisReferenceFilterDriver(RunningDriver, 0) )
    {
      NdisTraceLoggingRareFilterPath(RunningDriver, 2LL, v7);
      ndisDereferenceFilterDriver(RunningDriver, v10, 0);
    }
    else
    {
      NdisTraceLoggingRareFilterPath(0LL, 2LL, v7);
    }
  }
  else
  {
    ndisClearTransientBindFailuresAboveThisFilter(a1, this);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
