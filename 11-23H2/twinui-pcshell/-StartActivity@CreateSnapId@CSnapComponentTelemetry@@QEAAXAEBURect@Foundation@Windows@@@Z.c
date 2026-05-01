/*
 * XREFs of ?StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x180663AB8
 * Callers:
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18065FEC0 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x18001CACC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805E6174 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall CSnapComponentTelemetry::CreateSnapId::StartActivity(
        CSnapComponentTelemetry::CreateSnapId *this,
        const struct Windows::Foundation::Rect *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // [rsp+50h] [rbp-10h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v9; // [rsp+58h] [rbp-8h] BYREF
  int v10; // [rsp+80h] [rbp+20h] BYREF
  int v11; // [rsp+90h] [rbp+30h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF

  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v4,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v10 = *((_DWORD *)a2 + 3);
    v11 = *((_DWORD *)a2 + 2);
    v12 = *((_DWORD *)a2 + 1);
    v7 = *(_DWORD *)a2;
    v9 = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v6 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v5,
      (int)&unk_180871ABD,
      *((_QWORD *)this + 6) + 8,
      v6,
      (__int64)&v9,
      (__int64)&CurrentThreadId,
      (__int64)&v7,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
