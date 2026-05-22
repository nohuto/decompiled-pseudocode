/*
 * XREFs of ?TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z @ 0x180153FDC
 * Callers:
 *     ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z @ 0x18015327C (-CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180084734 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::DComp::TryRedirectForManipulation(__int64 a1, __int64 a2, int a3)
{
  int v5; // esi
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
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

  v5 = a1;
  v6 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 4u )
  {
    if ( tlgKeywordOn((__int64)v6, 32LL) )
    {
      v18 = v8;
      v17 = &v9;
      v14 = v8;
      v15 = &v11;
      v9 = a3;
      v13 = &v10;
      v11 = a2;
      v10 = v5;
      v16 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_1801F2228, 0LL, 0LL, 5u, &v12);
    }
  }
}
