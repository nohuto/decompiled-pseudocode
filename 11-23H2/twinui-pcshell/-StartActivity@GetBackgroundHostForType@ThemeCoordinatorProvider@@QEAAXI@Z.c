/*
 * XREFs of ?StartActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXI@Z @ 0x1806E3A60
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?get@?$static_lazy@VThemeCoordinatorProvider@@@details@wil@@QEAAPEAVThemeCoordinatorProvider@@P6AXXZ@Z @ 0x1806E43C4 (-get@-$static_lazy@VThemeCoordinatorProvider@@@details@wil@@QEAAPEAVThemeCoordinatorProvider@@P6.c)
 *     ?zInternalStart@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806E51D4 (-zInternalStart@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe.c)
 */

void __fastcall ThemeCoordinatorProvider::GetBackgroundHostForType::StartActivity(
        ThemeCoordinatorProvider::GetBackgroundHostForType *this,
        int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  int v9; // [rsp+60h] [rbp+8h] BYREF
  DWORD v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = wil::details::static_lazy<ThemeCoordinatorProvider>::get(
         v4,
         _lambda_946955806da6a0bbd6f0186036e9319d_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(v5 + 8);
  if ( *v6 > 5u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 0x400000000000LL) )
  {
    v9 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v11 = 0x1000000LL;
    v10 = CurrentThreadId;
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_180879C84,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
