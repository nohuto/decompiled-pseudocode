/*
 * XREFs of ?GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@5@PEA_N@Z @ 0x18009908C
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098AB0 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewModePreferencesHelpers::GetTargetPresenterKind(
        ViewModePreferencesHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        enum Windows::Internal::ApplicationModel::WindowingEnvironment::ApplicationWindowPresenterKindInternal *a3,
        bool *a4)
{
  HRESULT v6; // eax
  int v7; // edx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-20h] BYREF

  *(_BYTE *)a3 = 0;
  *(_DWORD *)a2 = 0;
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  if ( this )
    (*(void (__fastcall **)(ViewModePreferencesHelpers *, struct Windows::Foundation::Collections::IPropertySet *, enum Windows::Internal::ApplicationModel::WindowingEnvironment::ApplicationWindowPresenterKindInternal *, bool *))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      a4);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"ViewModePreferences.PresenterMode", 0x21u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    JUMPOUT(0x18009914DLL);
  }
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v11, (__int64)string, v8, &v10) >= 0 )
  {
    *(_BYTE *)a3 = 1;
    *(_DWORD *)a2 = v10;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
