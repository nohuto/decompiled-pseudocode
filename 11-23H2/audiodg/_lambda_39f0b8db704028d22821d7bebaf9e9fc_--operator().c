/*
 * XREFs of _lambda_39f0b8db704028d22821d7bebaf9e9fc_::operator() @ 0x14002D500
 * Callers:
 *     wil::details::lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___::_lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___ @ 0x14002D4E0 (wil--details--lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___--_lambda_call__lambda_39f0.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1400519F0 (-Provider@AudioDgTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall lambda_39f0b8db704028d22821d7bebaf9e9fc_::operator()(__int64 **a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  result = AudioDgTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 4u )
  {
    v3 = a1[1];
    v4 = *a1;
    v14 = 0;
    v11 = 0;
    v6 = *v3;
    v5 = *v4;
    v12 = &v6;
    v9 = &v7;
    v7 = v5;
    v13 = 8;
    v10 = 8;
    return (const struct _tlgProvider_t *)tlgWriteTransfer_EtwEventWriteTransfer(
                                            (__int64)result,
                                            byte_1400B38AB,
                                            0LL,
                                            0LL,
                                            4,
                                            (__int64)v8);
  }
  return result;
}
