/*
 * XREFs of ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x18031F8BC
 * Callers:
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E8C74 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
        ViewSizePreferenceHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3,
        HWND *a4)
{
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)a2 = 0;
  *(_QWORD *)a3 = 0LL;
  v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, (const WCHAR **)&off_180646460, v6);
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v14, *(_QWORD *)(v7 + 24), v8, &v15);
  if ( v9 >= 0 )
  {
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, (const WCHAR **)off_180646468, v10);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
           &v14,
           *(_QWORD *)(v11 + 24),
           v12,
           &v16);
    if ( v9 >= 0 )
    {
      *(_DWORD *)a2 = v15;
      *(_QWORD *)a3 = v16;
      v9 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v9;
}
