/*
 * XREFs of ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801751D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180175258 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___ @ 0x1804E1B80 (Windows--Internal--ComTaskPool--QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___.c)
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

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 644) = a2;
  v4 = *(int *)(a1 + 296);
  if ( a2 || (int)CoreIsWindowServiceSupported(*(int *)(a1 + 296), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
  {
    UwpWindowWrapperBase::NavigateInternal(a1, a2);
  }
  else
  {
    UwpWindowWrapperBase::NavigateInternal(a1, 3LL);
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v10, a1);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 312), 0LL);
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(v8, v10);
    v8[1] = a1 - 8;
    v8[2] = v4;
    v8[3] = (__int64)StringRawBuffer;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___(
           a1 - 8,
           v6,
           *(unsigned int *)(a1 + 568),
           v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  }
}
