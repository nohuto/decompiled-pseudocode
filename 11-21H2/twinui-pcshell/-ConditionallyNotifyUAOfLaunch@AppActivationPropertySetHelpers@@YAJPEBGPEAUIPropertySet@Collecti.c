/*
 * XREFs of ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180157750
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180073EB0 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$QueueTask@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@Z @ 0x1800332C0 (--$QueueTask@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180093AC0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
        LPCWSTR psz,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v4; // ebx
  HRESULT v5; // eax
  int v6; // edx
  __int64 v7; // r8
  char v8; // di
  HRESULT v10; // eax
  int v11; // eax
  _BYTE v12[8]; // [rsp+20h] [rbp-50h] BYREF
  LPWSTR ppwsz; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  LPWSTR v15; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  LODWORD(ppwsz) = 0;
  v4 = 0;
  v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    __debugbreak();
  }
  v8 = 1;
  LODWORD(ppwsz) = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v14, (__int64)string, v7, v12) < 0
    || !v12[0] )
  {
    v8 = 0;
  }
  if ( v8 )
  {
    v10 = SHStrDupW(psz, &ppwsz);
    v4 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\AppActivation_PropertySet.h",
        (const char *)(unsigned int)v10);
    }
    else
    {
      v15 = ppwsz;
      v11 = Windows::Internal::ComTaskPool::QueueTask<_lambda_23c98c0562f226dcd27081461ca7c8fb_>((__int64)retaddr, &v15);
      v4 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x37,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\AppActivation_PropertySet.h",
          (const char *)(unsigned int)v11);
        CoTaskMemFree(ppwsz);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  return v4;
}
