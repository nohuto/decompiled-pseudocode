/*
 * XREFs of ??$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x18009BC38
 * Callers:
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x18009B97C (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@@Z @ 0x1804051E4 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_CreatedWindowWrapper<unsigned short const *,unsigned short const *,unsigned int &>(
        const WCHAR **a1,
        const WCHAR **a2,
        _DWORD *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r10
  const WCHAR *v8; // rdx
  const WCHAR *v9; // r8
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
  const WCHAR *v22; // [rsp+78h] [rbp+17h]
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]
  const WCHAR *v25; // [rsp+88h] [rbp+27h]
  int v26; // [rsp+90h] [rbp+2Fh]
  int v27; // [rsp+94h] [rbp+33h]
  _DWORD *v28; // [rsp+98h] [rbp+37h]
  __int64 v29; // [rsp+A0h] [rbp+3Fh]

  v6 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = v6[1];
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a2;
    v9 = *a1;
    v16[0] = *a3;
    v28 = v16;
    v10 = -1LL;
    v29 = 4LL;
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
    v25 = v8;
    v26 = v12;
    v27 = 0;
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
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v23 = v13;
    v22 = v9;
    v24 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_1806B23F0;
    UserData.Reserved = 2;
    v14 = *(_QWORD *)(v7 + 32);
    v20 = 78;
    v21 = 1;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(v14, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v6;
}
