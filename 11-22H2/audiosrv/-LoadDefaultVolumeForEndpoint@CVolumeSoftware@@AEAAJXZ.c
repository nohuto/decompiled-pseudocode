/*
 * XREFs of ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18012795C
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127280 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180019D98 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18001A548 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18001B1C4 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800E3F64 (WPP_SF_qS.c)
 *     WPP_SF_qg @ 0x18012A06C (WPP_SF_qg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 *v3; // rdx
  __int64 v4; // r8
  float v5; // xmm6_4
  unsigned int i; // esi
  __int64 v7; // rdx
  float v8; // xmm3_4
  ATL::CAtlException *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v15; // [rsp+50h] [rbp-88h]
  ATL::CAtlException *v16; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v17[64]; // [rsp+60h] [rbp-78h] BYREF
  int v19; // [rsp+F0h] [rbp+18h]
  float v20; // [rsp+F8h] [rbp+20h]

  v1 = this;
  v13 = 0LL;
  v12 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x30u,
      (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this,
      *((_QWORD *)this + 7));
  }
  *(_OWORD *)pvar = 0LL;
  v15 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v13);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v12);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x31u,
          (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
          v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
             v12,
             &PKEY_AudioEndpoint_Default_VolumeInDb,
             pvar);
      if ( v2 >= 0 )
      {
        if ( LOWORD(pvar[0]) == 19 )
        {
          v5 = (float)SLODWORD(pvar[1]) * 0.000015258789;
          v20 = v5;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, v1, v5);
          }
          for ( i = 0; i < *((_DWORD *)v1 + 29); ++i )
          {
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v17, (__int64)v3);
            if ( *((_DWORD *)v1 + 74) == 4 )
              v8 = FLOAT_30_0;
            else
              v8 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v17, v7, -96.0, v8, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
            CVolumeUnit::SetDB((CVolumeUnit *)v17, v5);
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
                (_QWORD *)v1 + 10,
                i,
                (__int64)v17);
            }
            catch ( ATL::CAtlException *v16 )
            {
              v3 = &v11;
              v10 = v16;
              if ( *(_DWORD *)v16 == -1073741571 )
                _o__resetstkoflw();
              v19 = *(_DWORD *)v10;
              v2 = *(_DWORD *)v10;
              if ( v19 < 0 )
                break;
              v1 = this;
              v5 = v20;
            }
          }
        }
        else
        {
          v2 = -2147023728;
        }
      }
    }
  }
  PropVariantClear(pvar);
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadDefaultVolumeForEndpoint", 1936, v2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  return (unsigned int)v2;
}
