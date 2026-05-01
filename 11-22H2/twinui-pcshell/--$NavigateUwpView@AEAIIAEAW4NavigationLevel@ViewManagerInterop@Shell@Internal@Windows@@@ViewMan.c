/*
 * XREFs of ??$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAI$$QEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800D4A84
 * Callers:
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x1800D45C8 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTelemetry::NavigateUwpView<unsigned int &,unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
        _DWORD *a1,
        int *a2,
        int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  REGHANDLE v9; // rcx
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  _DWORD *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  int *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  int *v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+B0h] [rbp+2Fh]
  __int64 *v26; // [rsp+B8h] [rbp+37h]
  __int64 v27; // [rsp+C0h] [rbp+3Fh]

  v6 = (__int64)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                  (__int64)a1,
                  _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(v7 + 24) & 0x200000000000LL;
    if ( v6 == *(_QWORD *)(v7 + 24) )
    {
      v11 = *a3;
      v12 = *a2;
      v13[0] = *a1;
      v26 = &v14;
      v24 = &v11;
      v22 = &v12;
      v20 = v13;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v8 = *(unsigned __int16 **)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 32);
      UserData.Ptr = (ULONGLONG)v8;
      EventDescriptor.Keyword = 0x200000000000LL;
      v14 = 0x1000000LL;
      v27 = 8LL;
      v25 = 4LL;
      v23 = 4LL;
      v21 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *v8;
      v17 = &unk_180859995;
      UserData.Reserved = 2;
      v18 = 78;
      v19 = 1;
      v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v6) = EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  return v6;
}
