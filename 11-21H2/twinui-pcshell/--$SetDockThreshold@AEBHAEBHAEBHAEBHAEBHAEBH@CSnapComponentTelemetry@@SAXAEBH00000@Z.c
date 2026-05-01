/*
 * XREFs of ??$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z @ 0x180590854
 * Callers:
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180060F24 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180061928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

_QWORD *CSnapComponentTelemetry::SetDockThreshold<int const &,int const &,int const &,int const &,int const &,int const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  _QWORD *result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // [rsp+60h] [rbp+10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  va_list va; // [rsp+80h] [rbp+30h]
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF
  va_list va1; // [rsp+88h] [rbp+38h]
  va_list va2; // [rsp+90h] [rbp+40h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v11 = a4;
  v10 = a3;
  v9 = a2;
  v8 = a1;
  result = wil::details::static_lazy<WindowManagementLogging>::get(
             a1,
             _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)result[1];
  if ( *v7 > 5u )
  {
    LODWORD(v12) = 20;
    LODWORD(v11) = 50;
    LODWORD(v8) = 50;
    LODWORD(v14) = 1;
    LODWORD(v10) = 30;
    LODWORD(v9) = 30;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (int)v7,
                       (int)&unk_1806C8D46,
                       v5,
                       v6,
                       (__int64)va1,
                       (__int64)va,
                       (__int64)&v8,
                       (__int64)&v9,
                       (__int64)&v10,
                       (__int64)&v11);
  }
  return result;
}
