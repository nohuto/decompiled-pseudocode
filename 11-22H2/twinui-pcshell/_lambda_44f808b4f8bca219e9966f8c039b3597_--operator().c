/*
 * XREFs of _lambda_44f808b4f8bca219e9966f8c039b3597_::operator() @ 0x1804E651C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_44f808b4f8bca219e9966f8c039b3597___::Run @ 0x1804EBB10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_44f808b4f8bca219e9966f8c039b3597___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800DDEC4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9B48 (--$try_query@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_.c)
 *     ??$As@U?$IReference@_N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@_N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AEE2C (--$As@U-$IReference@_N@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComP.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_44f808b4f8bca219e9966f8c039b3597_::operator()(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rax
  void (__fastcall ****v8)(_QWORD, GUID *, _QWORD *); // rax
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v18,
         &v13);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB93,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v11);
    v12 = 0LL;
    v4 = *a1;
    LOBYTE(v3) = *(_DWORD *)(v4 + 232) == 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 136LL))(v13, v3, &v12);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB96,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v11);
    v11 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<bool>>(&v12, &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB99,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v11);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v4 + 280) + 144LL))(
                     *(_QWORD *)(v4 + 280),
                     &v16);
    v8 = (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v7 + 48LL))(
                                                             *v7,
                                                             &v15);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IWindowBehaviorStatics>(
      v8,
      &v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    if ( v14 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v14 + 56LL))(v14, *(unsigned int *)(v4 + 296), v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBA0,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v9);
  }
  return result;
}
