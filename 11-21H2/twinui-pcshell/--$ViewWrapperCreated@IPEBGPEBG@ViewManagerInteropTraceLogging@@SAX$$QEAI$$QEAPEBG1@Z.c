/*
 * XREFs of ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x18009C30C
 * Callers:
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x18009BDC0 (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Z @ 0x1804153F4 (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
        _DWORD *a1,
        const WCHAR **a2,
        const WCHAR **a3)
{
  __int64 *v6; // rax
  __int64 v7; // r10
  const WCHAR *v8; // r8
  const WCHAR *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // ecx
  REGHANDLE v14; // rcx
  _DWORD v16[2]; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v19; // [rsp+68h] [rbp+7h]
  int v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  _DWORD *v22; // [rsp+78h] [rbp+17h]
  __int64 v23; // [rsp+80h] [rbp+1Fh]
  const WCHAR *v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+90h] [rbp+2Fh]
  int v26; // [rsp+94h] [rbp+33h]
  const WCHAR *v27; // [rsp+98h] [rbp+37h]
  int v28; // [rsp+A0h] [rbp+3Fh]
  int v29; // [rsp+A4h] [rbp+43h]

  v6 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = v6[1];
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v9 = *a2;
    v16[0] = *a1;
    v10 = -1LL;
    if ( v8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v8[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v8 = &LocaleName;
      v12 = 2;
    }
    v27 = v8;
    v28 = v12;
    v29 = 0;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v13 = 2 * v10 + 2;
    }
    else
    {
      v9 = &LocaleName;
      v13 = 2;
    }
    v25 = v13;
    v22 = v16;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v24 = v9;
    v26 = 0;
    v23 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_1806B2525;
    UserData.Reserved = 2;
    v14 = *(_QWORD *)(v7 + 32);
    v20 = 68;
    v21 = 1;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(v14, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v6;
}
