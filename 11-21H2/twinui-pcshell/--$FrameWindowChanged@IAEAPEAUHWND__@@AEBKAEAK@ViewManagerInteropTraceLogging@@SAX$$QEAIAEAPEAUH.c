/*
 * XREFs of ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180146494
 * Callers:
 *     _lambda_563bc81589d36272545d38307397f505_::operator() @ 0x180091848 (_lambda_563bc81589d36272545d38307397f505_--operator().c)
 *     _lambda_127fba945b3ad42759bbeed869c5af3e_::operator() @ 0x18041119C (_lambda_127fba945b3ad42759bbeed869c5af3e_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        _DWORD *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  REGHANDLE v11; // rcx
  int v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  _DWORD *v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  __int64 *v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]
  int *v26; // [rsp+A8h] [rbp+27h]
  __int64 v27; // [rsp+B0h] [rbp+2Fh]
  int *v28; // [rsp+B8h] [rbp+37h]
  __int64 v29; // [rsp+C0h] [rbp+3Fh]

  v8 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v9 = v8[1];
  if ( *(_DWORD *)v9 > 5u )
  {
    v13 = *a4;
    v14 = *a3;
    v16 = *a2;
    v15[0] = *a1;
    v28 = &v13;
    v26 = &v14;
    v24 = &v16;
    v22 = v15;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v10 = *(unsigned __int16 **)(v9 + 8);
    v11 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = (ULONGLONG)v10;
    v29 = 4LL;
    v27 = 4LL;
    v25 = 8LL;
    v23 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v10;
    v19 = &unk_1806B2575;
    UserData.Reserved = 2;
    v20 = 72;
    v21 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v8;
}
