/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18001A14C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBU.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ??_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z @ 0x18001A93C (--_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003D75C (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DeleteTouchInfo@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchUpdateInfo@2@_K@Z @ 0x1801ADEDC (-DeleteTouchInfo@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchUpdateInfo@2@.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  CDisplayManager *v8; // rcx
  __int64 v9; // r10
  char v10; // r9
  int updated; // eax
  unsigned int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // edx
  struct InteractionLatencyTelemetry::TouchUpdateInfo *v17; // rdi
  unsigned __int64 v18; // r14
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  struct IDXGIAdapter1 *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct InteractionLatencyTelemetry::TouchUpdateInfo *v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[296]; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID v24; // [rsp+198h] [rbp+98h] BYREF
  int v25; // [rsp+1A0h] [rbp+A0h]

  v3 = *((_QWORD *)this + 564);
  v5 = 0;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 184);
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v17 = *(struct InteractionLatencyTelemetry::TouchUpdateInfo **)(*(_QWORD *)(v3 + 160) + 8LL * v7);
        if ( v17 )
        {
          if ( *(_QWORD *)v17 == *(_QWORD *)a2 )
            break;
        }
        if ( ++v7 >= v6 )
          goto LABEL_3;
      }
      v18 = *(_QWORD *)v3;
      if ( !(unsigned int)InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
                            (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
                            a2,
                            *(_QWORD *)v3) )
      {
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
          (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
          a2,
          v17,
          v18);
        return v5;
      }
      InteractionLatencyTelemetry::InteractionTraceProvider::DeleteTouchInfo(v17, v18);
      DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt(*((_QWORD *)this + 564) + 160LL, v7);
      InteractionLatencyTelemetry::TouchUpdateInfo::`scalar deleting destructor'(v17);
    }
LABEL_3:
    memset_0(v23, 0, 0x138uLL);
    v20 = 0LL;
    if ( (int)CDisplayManager::GetPrimaryAdapter(v8, &v20) >= 0 )
      ((void (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v20->lpVtbl->GetDesc1)(v20, v23);
    v9 = *((_QWORD *)this + 564);
    v21 = 0LL;
    v10 = *(_BYTE *)(v9 + 240);
    v22 = 10000000 * (*(_QWORD *)(v9 + 256) / g_qpcFrequency.QuadPart)
        + (unsigned __int64)(10000000 * (*(_QWORD *)(v9 + 256) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
    updated = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
                a2,
                *(_QWORD *)v9,
                v10,
                &v22,
                2 - (unsigned int)(*(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) != 0),
                &v24,
                (v25 & 2) != 0,
                &v21);
    v5 = updated;
    if ( updated < 0 )
    {
      v19 = 1960;
    }
    else
    {
      if ( !v21 )
        goto LABEL_10;
      v13 = *((_QWORD *)this + 564);
      v14 = *(unsigned int *)(v13 + 184);
      v15 = v14 + 1;
      if ( (int)v14 + 1 < (unsigned int)v14 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_10;
      }
      if ( v15 <= *(_DWORD *)(v13 + 180) )
      {
        *(_QWORD *)(*(_QWORD *)(v13 + 160) + 8 * v14) = v21;
        *(_DWORD *)(v13 + 184) = v15;
        goto LABEL_10;
      }
      updated = DynArrayImpl<0>::AddMultipleAndSet(v13 + 160, 8LL, 1LL, &v21);
      if ( updated >= 0 )
      {
LABEL_10:
        wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v20);
        return v5;
      }
      v19 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, v19, 0LL);
    goto LABEL_10;
  }
  return v5;
}
