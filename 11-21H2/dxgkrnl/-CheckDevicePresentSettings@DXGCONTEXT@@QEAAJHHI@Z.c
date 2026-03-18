/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0178780
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rdx
  ADAPTER_DISPLAY *v17; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9

  v4 = *((_QWORD *)this + 2);
  v6 = a4;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 1848) + 2792LL);
  v10 = *(_QWORD *)(v9 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry1(1LL, 6088LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6088LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = *(_DWORD *)(v9 + 96);
  if ( (unsigned int)v6 >= v11 )
  {
    WdLogSingleEntry1(1LL, 6089LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6089LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = *(_DWORD *)(v9 + 96);
  }
  if ( (unsigned int)v6 < v11 && v4 == *(_QWORD *)(*(_QWORD *)(v9 + 128) + 4000 * v6 + 728) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL);
    if ( !v12 )
      goto LABEL_15;
    v13 = *(_QWORD *)(v12 + 2792);
    if ( v13
      || (WdLogSingleEntry1(1LL, 10119LL),
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10119LL, 0LL, 0LL, 0LL, 0LL),
          (v13 = *(_QWORD *)(v12 + 2792)) != 0) )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 96) )
      {
        WdLogSingleEntry1(1LL, 6126LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          6126LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 128) + 4000 * v6 + 760) )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 1 )
    {
      WdLogSingleEntry3(4LL, -1071775738LL, this, v6);
      return 3223191558LL;
    }
    if ( !a2 )
    {
LABEL_15:
      if ( a3 )
        return 0LL;
      v14 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v14 + 432) != 1 || (*(_DWORD *)(v14 + 4 * v6 + 1208) & 0x100) != 0 )
      {
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(4LL, -1071775739LL, this, v6);
        return 3223191557LL;
      }
    }
    else
    {
      WdLogSingleEntry3(4LL, 0LL, this, v6);
      return 3223192376LL;
    }
  }
  else
  {
    WdLogSingleEntry3(3LL, -1071775744LL, this, v6);
    v16 = *((_QWORD *)this + 2);
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 424LL) & 4) != 0
      && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                         *(ADAPTER_DISPLAY **)(*(_QWORD *)(v16 + 1848) + 2792LL),
                         v6) == 1 )
    {
      v17 = *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL);
      if ( (*(_DWORD *)(*(_QWORD *)(4000 * v6 + *((_QWORD *)v17 + 16) + 752) + 424LL) & 4) != 0 )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v17, v6);
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v6, VidPnSourceOwner);
        v19 = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
                v6);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM device (0x%I6"
                    "4x) has shared ownership, likely Dwm device leak",
          *((_QWORD *)this + 2),
          v6,
          (__int64)v19,
          0LL,
          0LL);
        LOBYTE(v20) = 1;
        *(_BYTE *)(*((_QWORD *)this + 2) + 1906LL) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v20) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
          __debugbreak();
        }
        else
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_reporting,
            0xA84D9Au,
            v21,
            v22,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
            0);
        }
      }
    }
    return 3223191552LL;
  }
}
