/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_::_Do_call @ 0x180102660 (std--_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_--_Do_call.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000EA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800FE5BC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180101B78 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18010279C (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_P @ 0x180102834 (WPP_SF_P.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        struct CEndpointStore *a2)
{
  char *v3; // rbx
  char *v4; // rdx
  int v5; // edi
  char v6; // r12
  int v7; // ebx
  struct tWAVEFORMATEX *v8; // rdi
  struct tWAVEFORMATEX *v9; // rsi
  __int64 *i; // rbx
  __int64 *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r14
  struct _GUID v15; // xmm8
  struct _GUID v16; // xmm7
  struct _GUID v17; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v18; // eax
  int v19; // eax
  struct tWAVEFORMATEX *v20; // r14
  struct CEndpointCharacteristics *v21; // r15
  struct _GUID v22; // xmm6
  unsigned int v23; // eax
  __int64 v24; // rax
  const struct tWAVEFORMATEX *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbx
  SaDeviceParams *v28[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v29; // [rsp+88h] [rbp-80h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h] BYREF
  struct CEndpointCharacteristics *v33; // [rsp+B8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v34; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v37; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v39; // [rsp+F0h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+F8h] [rbp-10h]
  struct tWAVEFORMATEX *v41; // [rsp+100h] [rbp-8h]
  CAudioResourceManager *v42; // [rsp+108h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+110h] [rbp+8h] BYREF
  struct _GUID v44; // [rsp+118h] [rbp+10h] BYREF
  struct _GUID v45; // [rsp+128h] [rbp+20h] BYREF
  char v46[16]; // [rsp+138h] [rbp+30h] BYREF
  char v47[16]; // [rsp+148h] [rbp+40h] BYREF
  char v48[16]; // [rsp+158h] [rbp+50h] BYREF
  char v49[16]; // [rsp+168h] [rbp+60h] BYREF

  v42 = this;
  v33 = 0LL;
  v3 = (char *)a2 + 16;
  v4 = v3;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v4 = *(char **)v3;
  v5 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         v4,
         0LL,
         0LL,
         &v33);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    if ( *((_QWORD *)v3 + 3) >= 8uLL )
      v3 = *(char **)v3;
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
      (const wchar_t *)v3);
  }
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)a2 + 13) + 120LL))(
      *((_QWORD *)a2 + 13),
      &v43);
    while ( 1 )
    {
      v6 = 1;
      v37 = 0LL;
      v38 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 88LL))(*((_QWORD *)a2 + 13), &v37);
      v31 = v7;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_P(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          24LL,
          &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
          (__int64)(*((_QWORD *)&v37 + 1) - v37) >> 3);
      }
      if ( v7 < 0 )
        goto LABEL_47;
      v32 = 0LL;
      v8 = 0LL;
      v40 = 0LL;
      v9 = 0LL;
      v41 = 0LL;
      for ( i = (__int64 *)v37; i != *((__int64 **)&v37 + 1); ++i )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
          && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i) )
          {
            v29 = 0LL;
            v30 = 0LL;
            if ( (*(int (__fastcall **)(_QWORD, __int64, struct _GUID *))(**((_QWORD **)a2 + 13) + 112LL))(
                   *((_QWORD *)a2 + 13),
                   *i,
                   &v29) < 0 )
              goto LABEL_28;
            v11 = *(__int64 **)&v29.Data1;
            if ( (__int64)(*(_QWORD *)v29.Data4 - *(_QWORD *)&v29.Data1) >> 3 == 1 )
            {
              v28[0] = 0LL;
              if ( (*(int (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, v28) >= 0 )
              {
                v12 = *i;
                v13 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v29.Data1 + 104LL))(**(_QWORD **)&v29.Data1);
                if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) != v13 )
                {
                  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                  if ( GetTickCount64() - v14 >= 0x2700 )
                  {
                    Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v32, i);
                    v8 = (struct tWAVEFORMATEX *)*((_QWORD *)v28[0] + 2);
                    *((_QWORD *)v28[0] + 2) = 0LL;
                    CoTaskMemFree(0LL);
                    v40 = v8;
                    v9 = (struct tWAVEFORMATEX *)*((_QWORD *)v28[0] + 3);
                    *((_QWORD *)v28[0] + 3) = 0LL;
                    CoTaskMemFree(0LL);
                    v41 = v9;
                    v27 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v29.Data1 + 104LL))(**(_QWORD **)&v29.Data1);
                    if ( v28[0] )
                      SaDeviceParams::`scalar deleting destructor'(v28[0]);
                    v28[0] = 0LL;
                    if ( *(_QWORD *)&v29.Data1 )
                    {
                      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                        *(__int64 **)&v29.Data1,
                        *(__int64 **)v29.Data4);
                      std::_Deallocate<16,0>(
                        *(void **)&v29.Data1,
                        (v30 - *(_QWORD *)&v29.Data1) & 0xFFFFFFFFFFFFFFF8uLL);
                    }
LABEL_43:
                    v6 = 0;
                    if ( v32 )
                    {
                      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v37);
                      v7 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
                             v42,
                             v33,
                             *((_QWORD *)a2 + 13),
                             v8,
                             v9,
                             v27,
                             &v32);
                      goto LABEL_46;
                    }
                    break;
                  }
                }
              }
              if ( v28[0] )
                SaDeviceParams::`scalar deleting destructor'(v28[0]);
LABEL_28:
              v11 = *(__int64 **)&v29.Data1;
            }
            if ( v11 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                v11,
                *(__int64 **)v29.Data4);
              std::_Deallocate<16,0>(*(void **)&v29.Data1, (v30 - *(_QWORD *)&v29.Data1) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            continue;
          }
          LODWORD(v28[0]) = 0;
          v39 = 0LL;
          v34 = 0LL;
          v36 = 0LL;
          pv = 0LL;
          v15 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v46);
          v16 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v47);
          v17 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v48);
          v18 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          v44 = v15;
          v45 = v16;
          v29 = v17;
          v19 = DeriveDeviceGraphFormatsForStream(
                  (struct _RTL_CRITICAL_SECTION *)v33,
                  0,
                  v18,
                  AUDCLNT_SHAREMODE_SHARED,
                  0,
                  &v29,
                  &v45,
                  &v44,
                  0LL,
                  &v36,
                  (struct tWAVEFORMATEX **)&pv,
                  &v34,
                  &v39);
          v20 = v39;
          if ( v19 >= 0 )
          {
            v21 = v33;
            v22 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*i + 40LL))(*i, v49);
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
            v29 = v22;
            if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                        (__int64)v21,
                        v23,
                        v20,
                        (__int128 *)&v29,
                        0,
                        v28,
                        0LL,
                        0LL,
                        0LL) >= 0 )
            {
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
              if ( v24 != (int)((double)SLODWORD(v28[0]) * 10000000.0 / (double)(int)v20->nSamplesPerSec + 0.5)
                || (v25 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                    !(unsigned int)CompareWaveFormat(v20, v25)) )
              {
                v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v26 >= 0x2700 )
                {
                  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v32, i);
                  CoTaskMemFree(0LL);
                  v8 = v20;
                  v40 = v20;
                  CoTaskMemFree(0LL);
                  v9 = v34;
                  v41 = v34;
                  v27 = (unsigned int)(int)((double)SLODWORD(v28[0]) * 10000000.0 / (double)(int)v20->nSamplesPerSec
                                          + 0.5);
                  CoTaskMemFree(pv);
                  CoTaskMemFree(v36);
                  CoTaskMemFree(0LL);
                  CoTaskMemFree(0LL);
                  goto LABEL_43;
                }
              }
            }
          }
          CoTaskMemFree(pv);
          CoTaskMemFree(v36);
          CoTaskMemFree(v34);
          CoTaskMemFree(v20);
        }
      }
      v7 = v31;
LABEL_46:
      CoTaskMemFree(v9);
      CoTaskMemFree(v8);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
LABEL_47:
      if ( (_QWORD)v37 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
          (__int64 *)v37,
          *((__int64 **)&v37 + 1));
        std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( v7 < 0 || v6 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
        break;
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
}
