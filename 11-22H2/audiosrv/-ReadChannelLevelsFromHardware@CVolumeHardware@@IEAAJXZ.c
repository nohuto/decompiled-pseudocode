/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180004BC0
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180004AF0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800E3E88 (WPP_SF_dg.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int v3; // esi
  CVolumeUnit *v4; // rax
  float v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 32) )
  {
    v1 = -2147418113;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 0x62Au, v1);
    return (unsigned int)v1;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      40LL,
      &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v3 = 0;
  if ( *((_DWORD *)this + 29) )
  {
    do
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 40LL))(
             *((_QWORD *)this + 32),
             v3,
             &v6);
      if ( v1 < 0 )
        goto LABEL_12;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, v3, v6);
      }
      v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (char *)this + 80,
                            v3);
      CVolumeUnit::SetDB(v4, v6);
    }
    while ( ++v3 < *((_DWORD *)this + 29) );
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  return (unsigned int)v1;
}
