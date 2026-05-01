/*
 * XREFs of ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180407540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x1800C3858 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b54eacfb88775a45f9bf3f20a89a8862___ @ 0x180404D38 (Windows--Internal--ComTaskPool--QueueTask__lambda_b54eacfb88775a45f9bf3f20a89a8862___.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804157EC (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 */

void __fastcall UwpWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  PCWSTR StringRawBuffer; // rbx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
  *(_DWORD *)(a1 + 620) = a2;
  v4 = *(int *)(a1 + 288);
  if ( a2 || (int)CoreIsWindowServiceSupported(*(int *)(a1 + 288), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
  {
    UwpWindowWrapperBase::NavigateInternal(a1, a2);
  }
  else
  {
    UwpWindowWrapperBase::NavigateInternal(a1, 3LL);
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v10, a1);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 304), 0LL);
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(v8, v10);
    v8[1] = a1 - 8;
    v8[2] = v4;
    v8[3] = (__int64)StringRawBuffer;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_b54eacfb88775a45f9bf3f20a89a8862___(
           a1 - 8,
           v6,
           *(_DWORD *)(a1 + 560),
           v8);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  }
}
