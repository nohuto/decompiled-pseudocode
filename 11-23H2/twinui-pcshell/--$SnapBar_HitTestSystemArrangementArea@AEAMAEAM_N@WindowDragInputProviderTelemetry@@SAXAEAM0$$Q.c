/*
 * XREFs of ??$SnapBar_HitTestSystemArrangementArea@AEAMAEAM_N@WindowDragInputProviderTelemetry@@SAXAEAM0$$QEA_N@Z @ 0x18068A5AC
 * Callers:
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18068B1A8 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1805CCFB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

int __fastcall WindowDragInputProviderTelemetry::SnapBar_HitTestSystemArrangementArea<float &,float &,bool>(
        int *a1,
        int *a2,
        char *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v13; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v14[5]; // [rsp+44h] [rbp-14h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<WindowManagementLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v6[1];
  if ( *v9 > 5u )
  {
    v10 = *a2;
    v11 = *a1;
    v15 = *a3;
    v13 = v10;
    v14[0] = v11;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                    (__int64)v9,
                    byte_180874D84,
                    v7,
                    v8,
                    (__int64)v14,
                    (__int64)&v13,
                    (__int64)&v15);
  }
  return (int)v6;
}
