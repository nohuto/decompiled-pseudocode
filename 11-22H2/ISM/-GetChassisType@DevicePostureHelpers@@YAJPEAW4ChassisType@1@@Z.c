/*
 * XREFs of ?GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z @ 0x18006E5A4
 * Callers:
 *     ?IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ @ 0x18006EC18 (-IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A954 (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18006E184 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?make_bstr_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18006F4AC (-make_bstr_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DevicePostureHelpers::GetChassisType(
        DevicePostureHelpers *this,
        enum DevicePostureHelpers::ChassisType *a2)
{
  unsigned int v3; // ebx
  HRESULT v4; // eax
  OLECHAR *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rdx
  LPVOID v8; // rbx
  __int64 (__fastcall *v9)(LPVOID, OLECHAR *, _QWORD, _QWORD, _QWORD, int, _QWORD, _QWORD, IUnknown **); // rsi
  int v10; // eax
  HRESULT v11; // eax
  OLECHAR *v12; // rdi
  OLECHAR *v13; // rsi
  IUnknown *v14; // rbx
  ULONG (__stdcall *Release)(IUnknown *); // r14
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64 *, int *); // rdi
  int v19; // eax
  unsigned __int8 v20; // bl
  int v21; // eax
  unsigned int v22; // edi
  unsigned __int8 *v23; // rcx
  int v24; // ecx
  __int64 v26; // [rsp+50h] [rbp-19h] BYREF
  OLECHAR *v27; // [rsp+58h] [rbp-11h] BYREF
  __int64 v28; // [rsp+60h] [rbp-9h] BYREF
  OLECHAR *v29; // [rsp+68h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp+7h] BYREF
  __int16 v31; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v34; // [rsp+D8h] [rbp+6Fh] BYREF
  IUnknown *pProxy; // [rsp+E0h] [rbp+77h] BYREF
  OLECHAR *v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = CoInitializeSecurity(0LL, -1, 0LL, 0LL, 0, 3u, 0LL, 0, 0LL);
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -2147417831 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&ppv);
    v4 = CoCreateInstance(&CLSID_WbemLocator, 0LL, 1u, &GUID_dc12a687_737f_11cf_884d_00aa004b2e24, &ppv);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
        (const char *)(unsigned int)v4);
LABEL_36:
      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&ppv);
      return v3;
    }
    pProxy = 0LL;
    wil::make_bstr_nothrow(&v36, L"root\\cimv2");
    v5 = v36;
    if ( v36 )
    {
      v8 = ppv;
      v9 = *(__int64 (__fastcall **)(LPVOID, OLECHAR *, _QWORD, _QWORD, _QWORD, int, _QWORD, _QWORD, IUnknown **))(*(_QWORD *)ppv + 24LL);
      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&pProxy);
      v10 = v9(v8, v5, 0LL, 0LL, 0LL, 128, 0LL, 0LL, &pProxy);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v11 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFFFFFFFFFFLL, 0, 3u, 0LL, 0);
        v3 = v11;
        if ( v11 >= 0 )
        {
          wil::make_bstr_nothrow(&v27, L"WQL");
          v12 = v27;
          if ( v27 )
          {
            wil::make_bstr_nothrow(&v29, L"select ChassisTypes from Win32_SystemEnclosure");
            v13 = v29;
            if ( v29 )
            {
              v26 = 0LL;
              v14 = pProxy;
              Release = pProxy->lpVtbl[6].Release;
              Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v26);
              v16 = ((__int64 (__fastcall *)(IUnknown *, OLECHAR *, OLECHAR *, __int64, _QWORD, __int64 *))Release)(
                      v14,
                      v12,
                      v13,
                      32LL,
                      0LL,
                      &v26);
              v3 = v16;
              if ( v16 >= 0 )
              {
                v34 = 0;
                v28 = 0LL;
                v17 = v26;
                v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, int *))(*(_QWORD *)v26 + 32LL);
                Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v28);
                v19 = v18(v17, 25LL, 1LL, &v28, &v34);
                v3 = v19;
                if ( v19 >= 0 )
                {
                  v20 = 2;
                  if ( v34 )
                  {
                    v21 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int16 *, _QWORD, _QWORD))(*(_QWORD *)v28 + 32LL))(
                            v28,
                            L"ChassisTypes",
                            0LL,
                            &v31,
                            0LL,
                            0LL);
                    v22 = v21;
                    if ( v21 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x43,
                        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\De"
                                 "vicePostureHelpers.h",
                        (const char *)(unsigned int)v21);
                      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v28);
                      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v26);
                      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v29);
                      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v27);
                      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v36);
                      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&pProxy);
                      v3 = v22;
                      goto LABEL_36;
                    }
                    if ( v31 == 8195 )
                    {
                      if ( v32 )
                      {
                        if ( *(_WORD *)v32 )
                        {
                          v23 = *(unsigned __int8 **)(v32 + 16);
                          if ( v23 )
                            v20 = *v23;
                        }
                      }
                    }
                  }
                  v24 = v20;
                  if ( (unsigned int)v20 - 30 > 2 )
                    v24 = 2;
                  *(_DWORD *)this = v24;
                  Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v28);
                  Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v26);
                  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v29);
                  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v27);
                  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v36);
                  Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&pProxy);
                  v3 = 0;
                  goto LABEL_36;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3C,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
                  (const char *)(unsigned int)v19);
                Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v28);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x38,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
                  (const char *)(unsigned int)v16);
              }
              Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v26);
            }
            else
            {
              v3 = -2147024882;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x36,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
                (const char *)0x8007000ELL);
            }
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v29);
          }
          else
          {
            v3 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x34,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
              (const char *)0x8007000ELL);
          }
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v27);
          goto LABEL_9;
        }
        v6 = (unsigned int)v11;
        v7 = 50LL;
      }
      else
      {
        v6 = (unsigned int)v10;
        v7 = 49LL;
      }
    }
    else
    {
      v3 = -2147024882;
      v6 = 2147942414LL;
      v7 = 48LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
      (const char *)v6);
LABEL_9:
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v36);
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&pProxy);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
    (const char *)v3);
  return v3;
}
