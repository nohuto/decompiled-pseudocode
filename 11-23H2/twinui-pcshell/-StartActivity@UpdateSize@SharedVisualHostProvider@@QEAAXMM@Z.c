/*
 * XREFs of ?StartActivity@UpdateSize@SharedVisualHostProvider@@QEAAXMM@Z @ 0x1806E9600
 * Callers:
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1806E8E40 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18002CD64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?get@?$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6AXXZ@Z @ 0x1806ED0C8 (-get@-$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6.c)
 *     ?zInternalStart@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806ED804 (-zInternalStart@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe.c)
 */

void __fastcall SharedVisualHostProvider::UpdateSize::StartActivity(
        SharedVisualHostProvider::UpdateSize *this,
        float a2,
        float a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rdi
  int v7; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+48h] [rbp-20h] BYREF
  float v10; // [rsp+70h] [rbp+8h] BYREF
  float v11; // [rsp+78h] [rbp+10h]
  float v12; // [rsp+80h] [rbp+18h]
  float v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = wil::details::static_lazy<SharedVisualHostProvider>::get(
         v4,
         _lambda_33f7b6abc9dd15539bbd1f422d65a3e7_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(v5 + 8);
  if ( *v6 > 5u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 0x400000000000LL) )
  {
    v10 = v12;
    v13 = v11;
    v9[0] = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v7 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v6,
      (int)&unk_18087A4F5,
      *((_QWORD *)this + 6) + 8,
      v7,
      (__int64)v9,
      (__int64)&CurrentThreadId,
      (__int64)&v13,
      (__int64)&v10);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
