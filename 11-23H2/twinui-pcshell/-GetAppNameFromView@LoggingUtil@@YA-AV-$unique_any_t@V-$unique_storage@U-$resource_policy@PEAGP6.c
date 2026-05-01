/*
 * XREFs of ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1803AF128
 * Callers:
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1803AEA44 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1803AD8C8 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=4
HWND __fastcall LoggingUtil::GetAppNameFromView(HWND a1, int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  void **v5; // rax
  void **v6; // rax
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  char *v8; // rbx
  char *v9; // rax
  const char *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int16 *v14; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-C8h] BYREF
  DWORD dwSize; // [rsp+3Ch] [rbp-C4h] BYREF
  HWND hWnd[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR ExeName[264]; // [rsp+50h] [rbp-B0h] BYREF

  hWnd[0] = a1;
  if ( !a2 )
    goto LABEL_21;
  v14 = 0LL;
  pv = 0LL;
  v12 = 0LL;
  v4 = (*a2)[17];
  v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v14);
  if ( ((int (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), void **))v4)(a2, v5) < 0 || !v14 || !*v14 )
  {
    v7 = **a2;
    v12 = 0LL;
    if ( v7(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v12) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, hWnd) >= 0 )
    {
      if ( GetWindowThreadProcessId(hWnd[0], &dwProcessId) )
      {
        v8 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
        if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          dwSize = 260;
          if ( QueryFullProcessImageNameW(v8, 0, ExeName, &dwSize) )
          {
            v9 = (char *)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(ExeName);
            wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
              a1,
              v9,
              0xFFFFFFFFFFFFFFFFuLL,
              v10);
            CloseHandle(v8);
            goto LABEL_12;
          }
          CloseHandle(v8);
        }
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v14 )
      CoTaskMemFree(v14);
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(v14, (unsigned __int16 **)v6);
  *(_QWORD *)a1 = pv;
  pv = 0LL;
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v14 )
    CoTaskMemFree(v14);
  return a1;
}
