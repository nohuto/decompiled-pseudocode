/*
 * XREFs of ??$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z @ 0x18006185C
 * Callers:
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180060F24 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180061928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

__int64 __fastcall CSnapComponentTelemetry::SetDockThreshold<long &,long &,long &,long &,long &,long &>(
        _DWORD *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6)
{
  __int64 result; // rax
  int v11; // r8d
  _DWORD *v12; // r10
  int v13; // ecx
  int v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+54h] [rbp-1Ch] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+5Ch] [rbp-14h] BYREF
  int v18; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v19[3]; // [rsp+64h] [rbp-Ch] BYREF

  result = wil::details::static_lazy<WindowManagementLogging>::get(
             a1,
             _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v12 = *(_DWORD **)(result + 8);
  if ( *v12 > 5u )
  {
    v14 = *a6;
    v13 = *a5;
    v16 = *a4;
    v17 = *a3;
    v18 = *a2;
    v19[0] = *a1;
    v15 = v13;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (_DWORD)v12,
             (unsigned int)&unk_1806C8D46,
             v11,
             v14,
             (__int64)v19,
             (__int64)&v18,
             (__int64)&v17,
             (__int64)&v16,
             (__int64)&v15,
             (__int64)&v14);
  }
  return result;
}
