/*
 * XREFs of _lambda_923d6aba5004cbac79a7907f80600ecf_::operator() @ 0x140064F8C
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140066420 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 *__fastcall lambda_923d6aba5004cbac79a7907f80600ecf_::operator()(__int64 **a1)
{
  __int64 *result; // rax
  _DWORD *v3; // r10
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  result = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
             (__int64)a1,
             _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)result[1];
  if ( *v3 > 4u )
  {
    v4 = a1[1];
    v16 = 0;
    v13 = 0;
    v5 = *v4;
    v6 = *a1;
    v8 = v5;
    v7 = *v6;
    v14 = &v8;
    v9 = v7;
    v11 = &v9;
    v15 = 8;
    v12 = 8;
    return (__int64 *)tlgWriteTransfer_EtwEventWriteTransfer((__int64)v3, byte_1400A6CBF, 0LL, 0LL, 4, (__int64)v10);
  }
  return result;
}
