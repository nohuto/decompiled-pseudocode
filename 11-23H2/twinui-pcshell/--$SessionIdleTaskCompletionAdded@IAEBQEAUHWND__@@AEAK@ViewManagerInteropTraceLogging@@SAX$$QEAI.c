/*
 * XREFs of ??$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEAK@Z @ 0x1801B311C
 * Callers:
 *     _lambda_49fb25682482a2b5a4c0c490b68b0b86_::operator() @ 0x1801F7BC0 (_lambda_49fb25682482a2b5a4c0c490b68b0b86_--operator().c)
 *     _lambda_7b7d3edf23afb6f3b75600d49fe376df_::operator() @ 0x1804E6F20 (_lambda_7b7d3edf23afb6f3b75600d49fe376df_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int,HWND__ * const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        int *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  int v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v11; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  __int64 *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  int *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    v9 = *a3;
    v11 = *a2;
    v10 = *a1;
    v17 = &v9;
    v15 = &v11;
    v13 = &v10;
    v18 = 4LL;
    v16 = 8LL;
    v14 = 4LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v7,
                    (unsigned __int8 *)dword_180859AF1,
                    0LL,
                    0LL,
                    5u,
                    &v12);
  }
  return (int)v6;
}
