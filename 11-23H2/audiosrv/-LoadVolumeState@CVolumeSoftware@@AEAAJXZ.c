/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180127BFC
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127230 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180019D98 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18001A548 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18001B1C4 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800E3F14 (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x1800E4118 (WPP_SF_qdg.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rsi
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  float *v11; // r15
  unsigned int v12; // edi
  float v13; // xmm6_4
  unsigned int *v14; // r13
  unsigned __int16 i; // cx
  float v16; // xmm7_4
  __int64 v17; // rdx
  float v18; // xmm3_4
  ATL::CAtlException *v20; // rbx
  __int64 v21; // [rsp+0h] [rbp-118h] BYREF
  int v22[2]; // [rsp+20h] [rbp-F8h]
  __int64 v23; // [rsp+30h] [rbp-E8h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-D8h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-D0h] BYREF
  float *v27; // [rsp+58h] [rbp-C0h]
  float *v28; // [rsp+60h] [rbp-B8h]
  unsigned int *v29; // [rsp+68h] [rbp-B0h]
  ATL::CAtlException *v30; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v31[96]; // [rsp+80h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  float v34; // [rsp+128h] [rbp+10h]
  unsigned int v35; // [rsp+130h] [rbp+18h]
  int v36; // [rsp+138h] [rbp+20h]

  v1 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this,
      *((_QWORD *)this + 7));
  }
  v2 = 0;
  v24 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v24);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x712,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v3);
LABEL_37:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
    return v4;
  }
  v23 = 0LL;
  v5 = *v24;
  v23 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 32))(v24, 0LL, &v23);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x715,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v6);
LABEL_36:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v23);
    goto LABEL_37;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, v1);
  }
  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
         v23,
         &PKEY_APO_MasterVolumeLevel,
         pvar);
  v4 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 1823LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v9);
    PropVariantClear(pvar);
    goto LABEL_36;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v11 = v27;
    v28 = v27;
    v12 = LODWORD(pvar[1]) >> 2;
    v25 = LODWORD(pvar[1]) >> 2;
    v13 = *v27;
    v34 = *v27;
    v14 = (unsigned int *)((char *)v1 + 116);
    v29 = (unsigned int *)((char *)v1 + 116);
    if ( LODWORD(pvar[1]) >> 2 != *((_DWORD *)v1 + 29) )
    {
      for ( i = 1; i < v12; ++i )
      {
        v13 = fmaxf(v27[i], v13);
        v34 = v13;
      }
    }
    while ( 1 )
    {
      v35 = v2;
      if ( v2 >= *v14 )
        break;
      if ( v12 == *v14 )
        v16 = v11[v2];
      else
        v16 = v13;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v22[0] = v2;
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Fu,
          (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
          v1,
          *(_QWORD *)v22,
          v16);
      }
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v31, (__int64)v8);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v18 = FLOAT_30_0;
      else
        v18 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v31, v17, -96.0, v18, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v31, v16);
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v1 + 10, v2, (__int64)v31);
      }
      catch ( ATL::CAtlException *v30 )
      {
        v8 = &v21;
        v20 = v30;
        if ( *(_DWORD *)v30 == -1073741571 )
          _o__resetstkoflw();
        v36 = *(_DWORD *)v20;
        v4 = *(_DWORD *)v20;
        if ( v36 < 0 )
        {
          v9 = (unsigned int)v36;
          v10 = 1862LL;
          goto LABEL_35;
        }
        v1 = this;
        v11 = v28;
        v12 = v25;
        v13 = v34;
        v2 = v35;
        v14 = v29;
      }
      ++v2;
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
    return 0LL;
  }
  else
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
    return 2147943568LL;
  }
}
