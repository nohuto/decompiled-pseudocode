/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800CDA94
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800CD460 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_dg @ 0x1800CF1E0 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int v3; // esi
  CVolumeUnit *v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  float v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 32) )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = *((_DWORD *)this + 29);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x28u,
        (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
        this,
        v6);
    }
    v3 = 0;
    if ( !*((_DWORD *)this + 29) )
    {
LABEL_15:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 40LL))(
             *((_QWORD *)this + 32),
             v3,
             &v7);
      if ( v1 < 0 )
        break;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, v3, v7);
      }
      v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 10,
                            v3);
      CVolumeUnit::SetDB(v4, v7);
      if ( ++v3 >= *((_DWORD *)this + 29) )
        goto LABEL_15;
    }
  }
  else
  {
    v1 = -2147418113;
  }
  AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 1523, v1);
  return (unsigned int)v1;
}
