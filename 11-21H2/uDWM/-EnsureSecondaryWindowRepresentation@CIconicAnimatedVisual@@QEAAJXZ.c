/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800BE0D8
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE1C4 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180011518 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(CIconicAnimatedVisual *this)
{
  CSecondaryWindowRepresentation **v1; // rsi
  unsigned int v3; // ebx
  _DWORD *v4; // rbp
  HMONITOR v5; // rax
  int ScaleFactorForMonitorImp; // eax
  int v7; // r9d
  int v8; // eax
  void *v10; // [rsp+20h] [rbp-28h]
  enum DEVICE_SCALE_FACTOR v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = (CSecondaryWindowRepresentation **)((char *)this + 296);
  v3 = 0;
  if ( !*((_QWORD *)this + 37) && *((_QWORD *)this + 38) )
  {
    v4 = (_DWORD *)((char *)this + 360);
    v5 = MonitorFromRect((LPCRECT)((char *)this + 360), 2u);
    ScaleFactorForMonitorImp = GetScaleFactorForMonitorImp(v5, &v11);
    v3 = ScaleFactorForMonitorImp;
    if ( ScaleFactorForMonitorImp >= 0 )
    {
      v7 = v4[2] - *v4;
      if ( v7 < 0 )
        v7 = 0;
      LODWORD(v10) = v11;
      v8 = CSecondaryWindowRepresentation::Create(
             *((_DWORD *)this + 98) | 0x802u,
             (__int64)this + 288,
             *((_QWORD *)this + 38),
             v7,
             v10,
             v1);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x53u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleFactorForMonitorImp, 0x4Cu);
    }
  }
  return v3;
}
