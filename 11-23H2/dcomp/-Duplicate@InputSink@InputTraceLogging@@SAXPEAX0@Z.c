/*
 * XREFs of ?Duplicate@InputSink@InputTraceLogging@@SAXPEAX0@Z @ 0x1800846C8
 * Callers:
 *     _lambda_3f27f640a731f3ebd1f0c4a73bcbf862_::_lambda_invoker_cdecl_ @ 0x18008E040 (_lambda_3f27f640a731f3ebd1f0c4a73bcbf862_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180084734 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::InputSink::Duplicate(void *a1, void *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // [rsp+30h] [rbp-39h] BYREF
  void *v8; // [rsp+38h] [rbp-31h] BYREF
  void *v9; // [rsp+40h] [rbp-29h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  void **v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  void **v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]
  int *v18; // [rsp+A0h] [rbp+37h]
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  v4 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      a1,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 4LL) )
    {
      v19 = v5;
      v18 = &v7;
      v7 = 0;
      v16 = &v8;
      v8 = a2;
      v14 = &v9;
      v12 = &v10;
      v9 = a1;
      v10 = 0LL;
      v17 = 8LL;
      v15 = 8LL;
      v13 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v6, (int)&dword_1801F21C2, 0, 0, 6u, &v11);
    }
  }
}
