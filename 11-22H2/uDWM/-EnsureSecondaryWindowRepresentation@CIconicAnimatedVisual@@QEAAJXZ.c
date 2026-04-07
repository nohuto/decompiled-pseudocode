/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800C2428
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C251C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001C97C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180046BD0 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(CIconicAnimatedVisual *this)
{
  CBaseObject **v1; // rsi
  unsigned int v3; // ebx
  _DWORD *v4; // rbp
  HMONITOR v5; // rax
  int ScaleFactorForMonitorImp; // eax
  int v7; // r9d
  int v8; // eax
  void *v10; // [rsp+20h] [rbp-28h]
  enum DEVICE_SCALE_FACTOR v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = (CBaseObject **)((char *)this + 296);
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
             ((unsigned __int64)this + 288) & -(__int64)(this != 0LL),
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
