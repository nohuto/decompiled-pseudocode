/*
 * XREFs of ?ReroutePointer@DComp@InputTraceLogging@@SAXKJ@Z @ 0x1800F8F68
 * Callers:
 *     ?CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z @ 0x1800F8EA0 (-CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180084734 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::DComp::ReroutePointer(__int64 a1, int a2)
{
  int v3; // edi
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  ULONG v6; // r9d
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  ULONG v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  ULONG v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v3 = a1;
  v4 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 4u )
  {
    if ( tlgKeywordOn((__int64)v4, 32LL) )
    {
      v15 = 0;
      v12 = 0;
      v13 = &v7;
      v14 = v6;
      v10 = &v8;
      v11 = v6;
      v7 = a2;
      v8 = v3;
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1801F20F1, 0LL, 0LL, v6, &v9);
    }
  }
}
