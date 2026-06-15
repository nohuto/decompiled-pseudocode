/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180019EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180019D98 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180019E3C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18001A434 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18001A548 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18001B1C4 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800E4168 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x180129FE8 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x18012A130 (WPP_SF_qgg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  int v2; // ebx
  _QWORD *v3; // r12
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r8
  float v7; // xmm8_4
  float v8; // xmm9_4
  float i; // esi
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  float v13; // xmm7_4
  float v14; // xmm6_4
  unsigned int v15; // esi
  char *v16; // r14
  CVolumeUnit *v17; // rax
  float v19[6]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int *v20; // [rsp+58h] [rbp-E0h]
  char *v21; // [rsp+60h] [rbp-D8h]
  char *v22; // [rsp+68h] [rbp-D0h]
  char *v23; // [rsp+70h] [rbp-C8h]
  _BYTE v24[128]; // [rsp+80h] [rbp-B8h] BYREF
  float v25; // [rsp+148h] [rbp+10h] BYREF
  float v26; // [rsp+150h] [rbp+18h] BYREF
  float v27; // [rsp+158h] [rbp+20h] BYREF

  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, this);
  }
  v3 = (_QWORD *)((char *)this + 256);
  v22 = (char *)this + 256;
  if ( !*((_QWORD *)this + 32) )
    goto LABEL_25;
  v4 = *((_DWORD *)this + 71);
  v20 = (unsigned int *)((char *)this + 116);
  *((_DWORD *)this + 29) = v4;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, this, v4);
  }
  v21 = (char *)this + 80;
  v23 = (char *)this + 80;
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((__int64)this + 80, 0LL);
  if ( !*v3 )
  {
LABEL_25:
    v2 = -2147418113;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 0x51Bu, v2);
    return (unsigned int)v2;
  }
  v7 = FLOAT_1000_0;
  v8 = FLOAT_N1000_0;
  for ( i = 0.0; ; ++LODWORD(i) )
  {
    v19[1] = i;
    v10 = v20;
    if ( LODWORD(i) >= *v20 )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v24);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(*(_QWORD *)*v3 + 32LL))(
           *v3,
           0LL,
           &v27,
           &v26,
           &v25);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, this, LODWORD(i), v27, v26, v25);
    }
    v13 = v26;
    v14 = v27;
    CVolumeUnit::SetDBRange(v24);
    v7 = fminf(v14, v7);
    v19[3] = v7;
    v8 = fmaxf(v13, v8);
    v19[4] = v8;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(*(_QWORD *)*v3 + 40LL))(*v3, LODWORD(i), v19);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        this,
        LODWORD(i),
        v19[0]);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v24, v19[0]);
    v2 = 0;
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
      (_QWORD *)this + 10,
      LODWORD(i),
      (__int64)v24);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, this, v7, v8);
    v10 = v20;
  }
  v15 = 0;
  v16 = v23;
  while ( v15 < *v10 )
  {
    v17 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](v16, v15);
    CVolumeUnit::SetTaperOverallRange(v17, v7, v8);
    ++v15;
    v10 = v20;
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  if ( v2 < 0 )
    goto LABEL_26;
  return (unsigned int)v2;
}
