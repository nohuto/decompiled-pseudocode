/*
 * XREFs of ??$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEAK@Z @ 0x18005A908
 * Callers:
 *     _lambda_f841925b73e0ab0c87901297ab2c4f4d_::operator() @ 0x18005A7E0 (_lambda_f841925b73e0ab0c87901297ab2c4f4d_--operator().c)
 *     _lambda_44086093bbdca45fc7a1a4ab785b676b_::operator() @ 0x18041198C (_lambda_44086093bbdca45fc7a1a4ab785b676b_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int,HWND__ * const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        int *a3)
{
  __int64 result; // rax
  _DWORD *v7; // rcx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  int *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  __int64 *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int *v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  result = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             a1,
             _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(result + 8);
  if ( *v7 > 5u )
  {
    v8 = *a3;
    v10 = *a2;
    v9 = *a1;
    v16 = &v8;
    v14 = &v10;
    v12 = &v9;
    v17 = 4LL;
    v15 = 8LL;
    v13 = 4LL;
    return tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&dword_1806B247F, 0, 0, 5u, &v11);
  }
  return result;
}
