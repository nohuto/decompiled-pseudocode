/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190
 * Callers:
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180004BC0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180019EF0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127230 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180128A40 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128C20 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128E10 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001A4CC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     pow @ 0x180067A04 (pow.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qd @ 0x1800E4064 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800E4118 (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  __int64 v2; // rax
  double v3; // xmm0_8
  unsigned int v4; // esi
  CAudioSessionManager *v5; // rbx
  float i; // xmm6_4
  float v7; // xmm1_4
  CVolumeUnit *v8; // rax
  float Wiper; // xmm0_4
  __int64 v10; // rax
  double v11; // xmm0_8

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v2 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 80, 0LL);
  v3 = pow(10.0, *(float *)(v2 + 4) / 20.0);
  v4 = 0;
  *((_DWORD *)this + 28) = 0;
  v5 = WPP_GLOBAL_Control;
  for ( i = v3; v4 < *((_DWORD *)this + 29); ++v4 )
  {
    if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v5 + 7) & 0x10000) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (char *)this + 80,
                            v4);
      Wiper = CVolumeUnit::GetWiper(v8);
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        this,
        v4,
        Wiper);
      v5 = WPP_GLOBAL_Control;
    }
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v7 = pow(10.0, *(float *)(((unsigned __int64)v4 << 6) + *((_QWORD *)this + 10) + 4) / 20.0);
    if ( v7 > i )
    {
      v10 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 80, v4);
      v11 = pow(10.0, *(float *)(v10 + 4) / 20.0);
      *((_DWORD *)this + 28) = v4;
      v5 = WPP_GLOBAL_Control;
      i = v11;
    }
  }
  if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v5 + 7) & 0x10000) != 0
    && *((_BYTE *)v5 + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)v5 + 2),
      18LL,
      &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this,
      *((_DWORD *)this + 28),
      i);
  }
}
