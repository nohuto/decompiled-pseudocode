/*
 * XREFs of ??R_lambda_335ae85577de6131fccde93dfeb50d82_@@QEBA@XZ @ 0x18002CA2C
 * Callers:
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180038A90 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x18002415C (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUILauncherOptions@System@1@@Z @ 0x1800245D8 (--$ActivateInstance@UILauncherOptions@System@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEA.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180026424 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _lambda_335ae85577de6131fccde93dfeb50d82_::operator()(__int64 a1)
{
  HSTRING *v2; // r15
  unsigned int v3; // ebx
  HSTRING v4; // rbx
  int v5; // eax
  HSTRING *v6; // rsi
  const unsigned __int16 *v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING, __int64 *); // r12
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v16; // rsi
  unsigned __int64 v17; // rdi
  int v18; // eax
  HSTRING v19; // rbx
  int ActivationFactory; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  int v23; // eax
  __int64 v24; // rdx
  int v26; // [rsp+28h] [rbp-39h]
  __int64 v27; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  __int64 v31; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-1h] BYREF
  HSTRING string; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = *(HSTRING **)a1;
  if ( !WindowsIsStringEmpty(**(HSTRING **)a1) )
  {
    v32 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.System.LauncherOptions", 0x1Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v4 = string;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    v5 = Windows::Foundation::ActivateInstance<Windows::System::ILauncherOptions>((__int64)v4, &v32);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v6 = *(HSTRING **)(a1 + 8);
      if ( !WindowsIsStringEmpty(*v6) )
      {
        v29 = 0LL;
        v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
        v9 = **v32;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        v10 = v9(v8, &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49, &v29);
        v3 = v10;
        if ( v10 < 0
          || (v10 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v29 + 56LL))(v29, *v6), v3 = v10, v10 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14D,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v10,
            v26);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
          goto LABEL_30;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      }
      v28 = 0LL;
      v11 = (__int64 *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[23])v7);
      v12 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
              *v11,
              (__int64)&v28);
      v3 = v12;
      if ( v12 >= 0 )
      {
        v27 = 0LL;
        v13 = v28;
        v14 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v28 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        StringRawBuffer = WindowsGetStringRawBuffer(*v2, 0LL);
        v16 = StringRawBuffer;
        v17 = -1LL;
        do
          ++v17;
        while ( StringRawBuffer[v17] );
        if ( v17 > 0xFFFFFFFF )
        {
          LODWORD(v17) = -1;
          RaiseException(0xC000000D, 1u, 0, 0LL);
        }
        WindowsCreateStringReference(v16, v17, &hstringHeader, &string);
        v18 = v14(v13, string, &v27);
        v3 = v18;
        if ( v18 >= 0 )
        {
          v31 = 0LL;
          if ( WindowsCreateStringReference(L"Windows.System.Launcher", 0x17u, &hstringHeader, &string) < 0 )
            RaiseException(0xC000000D, 1u, 0, 0LL);
          v19 = string;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
          ActivationFactory = RoGetActivationFactory(v19, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v31);
          v3 = ActivationFactory;
          if ( ActivationFactory >= 0 )
          {
            v30 = 0LL;
            v21 = v31;
            v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*(_QWORD *)v31 + 72LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
            v23 = v22(v21, v27, v32, &v30);
            v3 = v23;
            if ( v23 >= 0 )
            {
              v24 = v30;
              v30 = 0LL;
              ***(_QWORD ***)(a1 + 16) = v24;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
              v3 = 0;
              goto LABEL_30;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14D,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v23,
              v26);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14D,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)ActivationFactory,
              v26);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14D,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v18,
            v26);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14D,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v12,
          v26);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5,
        v26);
    }
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    return v3;
  }
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14D,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)0x80070057LL,
    v26);
  return v3;
}
