/*
 * XREFs of ??$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x180527604
 * Callers:
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180527CB8 (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4443@Z @ 0x180527794 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 */

_QWORD *__fastcall JointResizeTelemetry::ApplySizeConstraints<unsigned __int64,long &,long &,long &,long &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  _QWORD *result; // rax
  int v10; // r9d
  _DWORD *v11; // rcx
  int v12; // r8d
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  int v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF

  result = wil::details::static_lazy<WindowManagementLogging>::get(
             (__int64)a1,
             _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v11 = (_DWORD *)result[1];
  if ( *v11 > 5u )
  {
    v17 = 0x1000000LL;
    v12 = *a5;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v18 = *a1;
    v13 = v12;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                       (_DWORD)v11,
                       (unsigned int)&unk_1806C4469,
                       v12,
                       v10,
                       (__int64)&v18,
                       (__int64)&v16,
                       (__int64)&v15,
                       (__int64)&v14,
                       (__int64)&v13,
                       (__int64)&v17);
  }
  return result;
}
