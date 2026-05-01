/*
 * XREFs of ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x1801228E8
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801224E0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F6490 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
        const WCHAR **a1,
        _DWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r10
  const WCHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  REGHANDLE v9; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  const WCHAR *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]
  _DWORD *v20; // [rsp+80h] [rbp+37h]
  __int64 v21; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v5 = v4[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a1;
    v11[0] = *a2;
    v20 = v11;
    v21 = 4LL;
    if ( v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v6 = &LocaleName;
      v8 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v17 = v6;
    v18 = v8;
    v19 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v14 = &unk_1806B1791;
    UserData.Reserved = 2;
    v9 = *(_QWORD *)(v5 + 32);
    v15 = 68;
    v16 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
