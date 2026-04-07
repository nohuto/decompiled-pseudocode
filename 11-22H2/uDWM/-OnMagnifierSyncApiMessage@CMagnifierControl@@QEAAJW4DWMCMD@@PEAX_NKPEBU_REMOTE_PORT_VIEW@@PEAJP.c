/*
 * XREFs of ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800CBCB0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x1800CA53C (-OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTUR.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x1800CB3D4 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMagnifierControl::OnMagnifierSyncApiMessage(
        CMagnifierControl *a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        CMagnifier *a6,
        int *a7,
        _DWORD *a8)
{
  int v12; // edi
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 == 1073741928 && a4 )
  {
    *a8 = 40;
    a6 = 0LL;
    v12 = CMagnifierControl::LookupAndValidateMagnifier(a1, *(_QWORD *)(a3 + 48), &a6);
    if ( v12 < 0 )
    {
      v13 = -2147023728;
      if ( v12 != -2147023728 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129208, 1LL, v12, 0x1D5u);
        goto LABEL_11;
      }
      v12 = 0;
    }
    else
    {
      v13 = CMagnifier::OnCaptureRTBitsWorker(
              a6,
              *(_QWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 4),
              (const struct MAGN_UPDATE_TEXTURES_PARAM *)(a3 + 8),
              (struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *)a3);
    }
    if ( a7 )
      *a7 = v13;
    *(_DWORD *)a3 = 1073741929;
    *(_DWORD *)(a3 + 4) = v13;
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return (unsigned int)v12;
}
