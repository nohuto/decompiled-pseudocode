/*
 * XREFs of ?GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z @ 0x18005C940
 * Callers:
 *     ?IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ @ 0x18005CF88 (-IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594AC (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18005C520 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?make_bstr_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18005D83C (-make_bstr_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v9)(LPVOID, OLECHAR *, _QWORD, _QWORD, _QWORD, int, _QWORD, _QWORD, __int64 *); // rsi
  int v10; // eax
  OLECHAR *v11; // rdi
  OLECHAR *v12; // rsi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, OLECHAR *, OLECHAR *, __int64, _QWORD, __int64 *); // r14
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64 *, int *); // rdi
  int v18; // eax
  unsigned __int8 v19; // bl
  int v20; // eax
  unsigned int v21; // edi
  unsigned __int8 *v22; // rcx
  int v23; // ecx
  __int64 v25; // [rsp+50h] [rbp-19h] BYREF
  OLECHAR *v26; // [rsp+58h] [rbp-11h] BYREF
  __int64 v27; // [rsp+60h] [rbp-9h] BYREF
  OLECHAR *v28; // [rsp+68h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp+7h] BYREF
  __int16 v30; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v33; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+E0h] [rbp+77h] BYREF
  OLECHAR *v35; // [rsp+E8h] [rbp+7Fh] BYREF

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
LABEL_34:
      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&ppv);
      return v3;
    }
    v34 = 0LL;
    wil::make_bstr_nothrow(&v35, L"root\\cimv2");
    v5 = v35;
    if ( v35 )
    {
      v8 = ppv;
      v9 = *(__int64 (__fastcall **)(LPVOID, OLECHAR *, _QWORD, _QWORD, _QWORD, int, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 24LL);
      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v34);
      v10 = v9(v8, v5, 0LL, 0LL, 0LL, 128, 0LL, 0LL, &v34);
      v3 = v10;
      if ( v10 >= 0 )
      {
        wil::make_bstr_nothrow(&v26, L"WQL");
        v11 = v26;
        if ( v26 )
        {
          wil::make_bstr_nothrow(&v28, L"select ChassisTypes from Win32_SystemEnclosure");
          v12 = v28;
          if ( v28 )
          {
            v25 = 0LL;
            v13 = v34;
            v14 = *(__int64 (__fastcall **)(__int64, OLECHAR *, OLECHAR *, __int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 160LL);
            Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v25);
            v15 = v14(v13, v11, v12, 32LL, 0LL, &v25);
            v3 = v15;
            if ( v15 >= 0 )
            {
              v33 = 0;
              v27 = 0LL;
              v16 = v25;
              v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, int *))(*(_QWORD *)v25 + 32LL);
              Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v27);
              v18 = v17(v16, 25LL, 1LL, &v27, &v33);
              v3 = v18;
              if ( v18 >= 0 )
              {
                v19 = 2;
                if ( v33 )
                {
                  v20 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int16 *, _QWORD, _QWORD))(*(_QWORD *)v27 + 32LL))(
                          v27,
                          L"ChassisTypes",
                          0LL,
                          &v30,
                          0LL,
                          0LL);
                  v21 = v20;
                  if ( v20 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x43,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\Devi"
                               "cePostureHelpers.h",
                      (const char *)(unsigned int)v20);
                    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v27);
                    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v25);
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v28);
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v26);
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v35);
                    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v34);
                    v3 = v21;
                    goto LABEL_34;
                  }
                  if ( v30 == 8195 )
                  {
                    if ( v31 )
                    {
                      if ( *(_WORD *)v31 )
                      {
                        v22 = *(unsigned __int8 **)(v31 + 16);
                        if ( v22 )
                          v19 = *v22;
                      }
                    }
                  }
                }
                v23 = v19;
                if ( (unsigned int)v19 - 30 > 2 )
                  v23 = 2;
                *(_DWORD *)this = v23;
                Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v27);
                Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v25);
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v28);
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v26);
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v35);
                Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v34);
                v3 = 0;
                goto LABEL_34;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3C,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
                (const char *)(unsigned int)v18);
              Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v27);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x38,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
                (const char *)(unsigned int)v15);
            }
            Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v25);
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
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v28);
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
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v26);
        goto LABEL_9;
      }
      v6 = (unsigned int)v10;
      v7 = 49LL;
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
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v35);
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v34);
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
    (const char *)v3);
  return v3;
}
