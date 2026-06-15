/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800CBF60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180043300 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x1800438FC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800CC8AC (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800CCB9C (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  int v3; // esi
  __int64 *v4; // rdx
  unsigned int i; // edi
  __int64 v6; // rdx
  float v7; // xmm3_4
  int *v8; // rbx
  __int64 v9; // [rsp+0h] [rbp-A8h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = this;
  if ( !*((_DWORD *)this + 29) )
    return 0LL;
  v3 = 0;
  if ( (int)CVolumeSoftware::LoadVolumeState(this) < 0 && (int)CVolumeSoftware::LoadDefaultVolumeForEndpoint(v1) < 0 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x33u,
        (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
        *((const wchar_t **)v1 + 7));
    }
    for ( i = 0; i < *((_DWORD *)v1 + 29); ++i )
    {
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v11, (__int64)v4);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v7 = FLOAT_30_0;
      else
        v7 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v11, v6, -96.0, v7, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v11, 0.0);
      v3 = 0;
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v1 + 10, i, (__int64)v11);
      }
      catch ( ATL::CAtlException *v10 )
      {
        v4 = &v9;
        v8 = (int *)v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _o__resetstkoflw();
        v3 = *v8;
        if ( *v8 < 0 )
          goto LABEL_19;
        v1 = this;
      }
    }
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v3 < 0 )
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 1944, v3);
  return (unsigned int)v3;
}
