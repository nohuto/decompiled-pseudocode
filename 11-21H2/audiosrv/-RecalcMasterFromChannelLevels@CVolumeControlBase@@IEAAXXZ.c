/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180043090 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800CBF60 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800CDA94 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CDC20 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CDD90 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CDF40 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001156C (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     pow @ 0x18005F984 (pow.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800CF278 (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  float v4; // xmm6_4
  __int64 v5; // rax
  float v6; // xmm1_4
  CVolumeUnit *v7; // rax
  float Wiper; // xmm0_4
  __int64 v9; // rax
  double v10; // xmm0_8

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_972200849a753c8240eefd9f39169899_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v2 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, 0LL);
  v3 = 0;
  v4 = pow(10.0, *(float *)(v2 + 4) / 20.0);
  for ( *((_DWORD *)this + 28) = 0; v3 < *((_DWORD *)this + 29); ++v3 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 10,
                            v3);
      Wiper = CVolumeUnit::GetWiper(v7);
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_972200849a753c8240eefd9f39169899_Traceguids,
        this,
        v3,
        Wiper);
    }
    v5 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v3);
    v6 = pow(10.0, *(float *)(v5 + 4) / 20.0);
    if ( v6 > v4 )
    {
      v9 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v3);
      v10 = pow(10.0, *(float *)(v9 + 4) / 20.0);
      *((_DWORD *)this + 28) = v3;
      v4 = v10;
    }
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_972200849a753c8240eefd9f39169899_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v4);
  }
}
