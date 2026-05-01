/*
 * XREFs of ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x18009CEC0
 * Callers:
 *     ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18009B9C0 (-RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1804C8630 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
        const WCHAR **a1,
        const WCHAR **a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  const WCHAR *v8; // r8
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // ecx
  REGHANDLE v12; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  const WCHAR *v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]
  const WCHAR *v22; // [rsp+80h] [rbp+37h]
  int v23; // [rsp+88h] [rbp+3Fh]
  int v24; // [rsp+8Ch] [rbp+43h]

  v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a2;
    v7 = -1LL;
    v8 = *a1;
    if ( *a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v6[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v6 = &LocaleName;
      v10 = 2;
    }
    v22 = v6;
    v23 = v10;
    v24 = 0;
    if ( v8 )
    {
      do
        ++v7;
      while ( v8[v7] );
      v11 = 2 * v7 + 2;
    }
    else
    {
      v8 = &LocaleName;
      v11 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v20 = v11;
    v19 = v8;
    v21 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_180858A55;
    UserData.Reserved = 2;
    v12 = *(_QWORD *)(v5 + 32);
    v17 = 89;
    v18 = 1;
    LODWORD(v4) = EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return v4;
}
