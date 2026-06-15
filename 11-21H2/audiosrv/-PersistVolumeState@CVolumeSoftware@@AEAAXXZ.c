/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800CD560
 * Callers:
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800CD8E0 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_32c63f42a8a47fd484a232b52df8772e__void_::_Do_call @ 0x1800CF090 (std--_Func_impl_no_alloc__lambda_32c63f42a8a47fd484a232b52df8772e__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180043034 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800CF0FC (WPP_SF_Sdg.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVolumeSoftware::PersistVolumeState(CVolumeSoftware *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  CVolumeUnit *v7; // rax
  CVolumeUnit *v8; // rax
  double DB; // [rsp+28h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  float *v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  if ( _InterlockedExchange((volatile __int32 *)this + 75, 0) )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
        *((const wchar_t **)this + 7));
    }
    v14 = 0LL;
    v3 = *(_QWORD *)g_DeviceEnumerator;
    v14 = 0LL;
    v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 **))(v3 + 40))(
           g_DeviceEnumerator,
           *((_QWORD *)this + 7),
           &v14);
    if ( v4 >= 0 )
    {
      v13 = 0LL;
      v5 = *v14;
      v13 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 32))(v14, 1LL, &v13);
      if ( v6 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v11 = 0LL;
        LOWORD(pvar[0]) = 65;
        LODWORD(pvar[1]) = 4 * *((_DWORD *)this + 29);
        v11 = (float *)CoTaskMemAlloc(LODWORD(pvar[1]));
        if ( v11 )
        {
          if ( *((_DWORD *)this + 29) )
          {
            do
            {
              v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                    (_QWORD *)this + 10,
                                    v2);
              v11[v2] = CVolumeUnit::GetDB(v7);
              if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                      (_QWORD *)this + 10,
                                      v2);
                DB = CVolumeUnit::GetDB(v8);
                WPP_SF_Sdg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  44,
                  (unsigned int)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
                  *((_QWORD *)this + 7),
                  v2,
                  SLOBYTE(DB));
              }
              ++v2;
            }
            while ( v2 < *((_DWORD *)this + 29) );
          }
          (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v13 + 48LL))(
            v13,
            &PKEY_APO_MasterVolumeLevel,
            pvar);
        }
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6B1,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v6);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6AE,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v4);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  }
}
