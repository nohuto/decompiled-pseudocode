/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127230
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180019D98 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18001A548 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18001B1C4 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18012790C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180127BFC (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  unsigned int *v2; // r14
  int v4; // edi
  __int64 *v5; // rdx
  unsigned int i; // esi
  __int64 v7; // rdx
  float v8; // xmm3_4
  int *v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-B8h] BYREF
  ATL::CAtlException *v11; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[64]; // [rsp+40h] [rbp-78h] BYREF
  char *v14; // [rsp+D8h] [rbp+20h]

  v1 = this;
  v2 = (unsigned int *)((char *)this + 116);
  v14 = (char *)this + 116;
  if ( !*((_DWORD *)this + 29) )
    return 0LL;
  v4 = 0;
  if ( (int)CVolumeSoftware::LoadVolumeState(this) < 0 && (int)CVolumeSoftware::LoadDefaultVolumeForEndpoint(v1) < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x33u,
        (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        *((const wchar_t **)v1 + 7));
    }
    for ( i = 0; i < *v2; ++i )
    {
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v12, (__int64)v5);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v8 = FLOAT_30_0;
      else
        v8 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v12, v7, -96.0, v8, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v12, 0.0);
      v4 = 0;
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v1 + 10, i, (__int64)v12);
      }
      catch ( ATL::CAtlException *v11 )
      {
        v5 = &v10;
        v9 = (int *)v11;
        if ( *(_DWORD *)v11 == -1073741571 )
          _o__resetstkoflw();
        v4 = *v9;
        if ( *v9 < 0 )
          goto LABEL_19;
        v1 = this;
        v2 = (unsigned int *)v14;
      }
    }
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v4 < 0 )
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 1999, v4);
  return (unsigned int)v4;
}
