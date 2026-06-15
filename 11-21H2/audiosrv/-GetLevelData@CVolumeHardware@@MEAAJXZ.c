/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180043090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180043300 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180043494 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180043684 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x1800438FC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800CF278 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x1800CF344 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x1800CF494 (WPP_SF_qgg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  float i; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  float v11; // xmm7_4
  float v12; // xmm6_4
  unsigned int j; // esi
  CVolumeUnit *v14; // rax
  float v16[8]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v17[136]; // [rsp+60h] [rbp-A8h] BYREF
  float v18; // [rsp+118h] [rbp+10h] BYREF
  float v19; // [rsp+120h] [rbp+18h] BYREF
  float v20; // [rsp+128h] [rbp+20h] BYREF

  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, this);
  }
  if ( !*((_QWORD *)this + 32) )
    goto LABEL_25;
  v3 = *((_DWORD *)this + 71);
  *((_DWORD *)this + 29) = v3;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, this, v3);
  }
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)this + 80, 0LL);
  if ( !*((_QWORD *)this + 32) )
  {
LABEL_25:
    v2 = -2147418113;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 0x4FCu, v2);
    return (unsigned int)v2;
  }
  v6 = FLOAT_1000_0;
  v7 = FLOAT_N1000_0;
  for ( i = 0.0; ; ++LODWORD(i) )
  {
    v16[1] = i;
    if ( LODWORD(i) >= *((_DWORD *)this + 29) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v17);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)this + 32) + 32LL))(
           *((_QWORD *)this + 32),
           0LL,
           &v20,
           &v19,
           &v18);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, this, LODWORD(i), v20, v19, v18);
    }
    v11 = v19;
    v12 = v20;
    CVolumeUnit::SetDBRange(v17);
    v6 = fminf(v12, v6);
    v16[3] = v6;
    v7 = fmaxf(v11, v7);
    v16[4] = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 40LL))(
           *((_QWORD *)this + 32),
           LODWORD(i),
           v16);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_972200849a753c8240eefd9f39169899_Traceguids,
        this,
        LODWORD(i),
        v16[0]);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v17, v16[0]);
    v2 = 0;
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)this + 80, LODWORD(i), v17);
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, this, v6, v7);
  }
  for ( j = 0; j < *((_DWORD *)this + 29); ++j )
  {
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 80, j);
    CVolumeUnit::SetTaperOverallRange(v14, v6, v7);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  if ( v2 < 0 )
    goto LABEL_26;
  return (unsigned int)v2;
}
