/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800CCB9C
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800CBF60 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180043300 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x1800438FC (--0CVolumeUnit@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x1800CF278 (WPP_SF_qdg.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rdx
  float *v9; // r15
  unsigned int v10; // esi
  float v11; // xmm6_4
  unsigned __int16 i; // cx
  float v13; // xmm7_4
  __int64 v14; // rdx
  float v15; // xmm3_4
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+0h] [rbp-108h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C8h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-C0h] BYREF
  float *v23; // [rsp+58h] [rbp-B0h]
  float *v24; // [rsp+60h] [rbp-A8h]
  ATL::CAtlException *v25; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v26[104]; // [rsp+70h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  float v29; // [rsp+118h] [rbp+10h]
  unsigned int v30; // [rsp+120h] [rbp+18h]
  int v31; // [rsp+128h] [rbp+20h]

  v1 = this;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
      this,
      *((_QWORD *)this + 7));
  }
  v2 = 0;
  v20 = 0LL;
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 **))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DB,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v3);
LABEL_36:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    return v4;
  }
  v19 = 0LL;
  v5 = *v20;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 32))(v20, 0LL, &v19);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v6);
LABEL_35:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    goto LABEL_36;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids, v1);
  }
  *(_OWORD *)pvar = 0LL;
  v23 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v19 + 40LL))(
         v19,
         &PKEY_APO_MasterVolumeLevel,
         pvar);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v7);
    PropVariantClear(pvar);
    goto LABEL_35;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v9 = v23;
    v24 = v23;
    v10 = LODWORD(pvar[1]) >> 2;
    v21 = LODWORD(pvar[1]) >> 2;
    v11 = *v23;
    v29 = *v23;
    if ( LODWORD(pvar[1]) >> 2 != *((_DWORD *)v1 + 29) )
    {
      for ( i = 1; i < v10; ++i )
      {
        v11 = fmaxf(v23[i], v11);
        v29 = v11;
      }
    }
    while ( 1 )
    {
      v30 = v2;
      if ( v2 >= *((_DWORD *)v1 + 29) )
        break;
      if ( v10 == *((_DWORD *)v1 + 29) )
        v13 = v9[v2];
      else
        v13 = v11;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          47LL,
          &WPP_972200849a753c8240eefd9f39169899_Traceguids,
          v1,
          v2,
          v13);
      }
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v26, (__int64)v8);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v15 = FLOAT_30_0;
      else
        v15 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v26, v14, -96.0, v15, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v26, v13);
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v1 + 10, v2, (__int64)v26);
      }
      catch ( ATL::CAtlException *v25 )
      {
        v8 = &v18;
        v17 = v25;
        if ( *(_DWORD *)v25 == -1073741571 )
          _o__resetstkoflw();
        v31 = *(_DWORD *)v17;
        v4 = *(_DWORD *)v17;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x70F,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
            (const char *)(unsigned int)v31);
          PropVariantClear(pvar);
          goto LABEL_35;
        }
        v1 = this;
        v9 = v24;
        v10 = v21;
        v11 = v29;
        v2 = v30;
      }
      ++v2;
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    return 0LL;
  }
  else
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    return 2147943568LL;
  }
}
