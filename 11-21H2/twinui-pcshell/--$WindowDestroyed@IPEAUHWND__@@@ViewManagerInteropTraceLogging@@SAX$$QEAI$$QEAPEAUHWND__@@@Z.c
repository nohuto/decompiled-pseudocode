/*
 * XREFs of ??$WindowDestroyed@IPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEAUHWND__@@@Z @ 0x180153580
 * Callers:
 *     ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x180153500 (-WindowRemoved@WindowWrapperBase@@UEAAJXZ.c)
 *     ?WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x180418BF0 (-WindowRemoved@UwpWindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int,HWND__ *>(_DWORD *a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  REGHANDLE v7; // rcx
  _DWORD v9[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  _DWORD *v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  __int64 *v18; // [rsp+80h] [rbp+37h]
  __int64 v19; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v5 = v4[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    v10 = *a2;
    v9[0] = *a1;
    v18 = &v10;
    EventDescriptor.Keyword = 0LL;
    v16 = v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v6 = *(unsigned __int16 **)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v6;
    v17 = 4LL;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v6;
    v13 = &unk_1806B266B;
    UserData.Reserved = 2;
    v14 = 43;
    v15 = 1;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
