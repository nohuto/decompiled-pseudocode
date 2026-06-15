/*
 * XREFs of ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800CC8AC
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800CBF60 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180043300 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x1800438FC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 *     WPP_SF_qg @ 0x1800CF3CC (WPP_SF_qg.c)
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
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x30u,
      (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
      this,
      *((_QWORD *)this + 7));
  }
  *(_OWORD *)pvar = 0LL;
  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v13);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v12);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x31u,
          (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
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
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
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
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadDefaultVolumeForEndpoint", 1881, v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return (unsigned int)v2;
}
