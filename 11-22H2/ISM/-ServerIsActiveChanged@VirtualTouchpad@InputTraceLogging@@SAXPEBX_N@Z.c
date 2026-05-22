/*
 * XREFs of ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x180153CB8
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180152E70 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerIsActiveChanged(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char v5; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  char *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v13 = 0;
    v10 = 0;
    v11 = &v5;
    v5 = a2;
    v8 = &v6;
    v6 = a1;
    v12 = 1;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_180234B2B, 0LL, 0LL, 4u, &v7);
  }
}
