/*
 * XREFs of ?GetTargetViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18031F9B4
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::GetTargetViewSizePreferenceFromPropertySet(
        ViewSizePreferenceHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3)
{
  unsigned int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-40h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)a2 = 0;
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v11, (const WCHAR **)&off_1806693B0, v4);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v10, *(_QWORD *)(v5 + 24), v6, &v9);
  if ( v7 >= 0 )
  {
    *(_DWORD *)a2 = v9;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v7;
}
