/*
 * XREFs of ?TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804D2630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18009E5B8 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18009E5B8.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1804CED34 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall UwpWindowEventDispatcher::TerminateActivityHost(__int64 a1, unsigned int a2, int a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 *CachedView; // rax
  __int64 v8; // rdx
  bool v9; // bl
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  PCWSTR StringRawBuffer; // rbx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 *); // rbx
  int v21; // eax
  const char *v22; // r9
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-78h]
  HSTRING string; // [rsp+40h] [rbp-58h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28[8]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v30; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+20h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 264);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 264));
  v28[1] = (__int64)v6;
  string = 0LL;
  v26 = 0LL;
  try
  {
    CachedView = UwpWindowEventDispatcher::GetCachedView(a1 - 224, &v30, a2);
    v8 = *CachedView;
    *CachedView = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v26, v8);
    v9 = v26 != 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
    if ( v9 )
    {
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v26,
        &v30);
      v10 = v30;
      v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 56LL);
      WindowsDeleteString(string);
      string = 0LL;
      v12 = v11(v10, &string);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xCB6,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v12,
          v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v15 = (_DWORD *)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                      v14,
                      _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
    if ( *v15 > 5u )
    {
      LODWORD(v30) = a3;
      LODWORD(v31) = a2;
      v28[0] = (__int64)StringRawBuffer;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v15,
        (unsigned __int8 *)dword_180859008,
        v16,
        v17,
        (const WCHAR **)v28,
        (__int64)&v31,
        (__int64)&v30);
    }
    v31 = 0LL;
    v27 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 96) + 56LL))(*(_QWORD *)(a1 + 96), &v30);
    v19 = *(_QWORD *)v18;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v18 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    v21 = v20(v19, a2, &v27);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCF1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v21,
        v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    WindowsDeleteString(string);
    string = 0LL;
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v30) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xCF5,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v22);
    return (unsigned int)v30;
  }
  return result;
}
