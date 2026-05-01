/*
 * XREFs of ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18017DB74
 * Callers:
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1800A0130 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802D978A (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
        __int64 *a1,
        _DWORD *a2)
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
  __int64 *v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  _DWORD *v18; // [rsp+80h] [rbp+37h]
  __int64 v19; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v5 = v4[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    v9[0] = *a2;
    v10 = *a1;
    v18 = v9;
    v16 = &v10;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v6 = *(unsigned __int16 **)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v6;
    EventDescriptor.Keyword = 0LL;
    v19 = 4LL;
    v17 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v6;
    v13 = &unk_18085A17E;
    UserData.Reserved = 2;
    v14 = 72;
    v15 = 1;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
