/*
 * XREFs of ?Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180691490
 * Callers:
 *     ?Show@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x18067C370 (-Show@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801BA844 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@7@XZ @ 0x18022D4A0 (-ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18038CA80 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapFlyoutOffsetAccTree@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180691378 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapFlyoutOffsetAccTree@@@details@wil@@QE.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Show(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 339) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x90,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  if ( *((_BYTE *)this + 340) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x91,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapFlyoutOffsetAccTree>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapFlyoutOffsetAccTree>::GetImpl'::`2'::impl,
    1u,
    a3,
    (__int64)a4);
  *((_BYTE *)this + 339) = 1;
  v6 = WindowManagementLogging::Provider(v5);
  if ( *(_DWORD *)v6 > 5u )
  {
    v12 = *((_DWORD *)this + 80);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_180875953,
      0LL,
      v7,
      (__int64)&v12);
  }
  v8 = *((_DWORD *)this + 93);
  if ( v8 == 1 )
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync(
      (__int64)this,
      &v12);
  }
  else
  {
    if ( v8 != 2 )
    {
      v9 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA5,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
        (const char *)v9,
        v10);
    }
    winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowBar(this);
  }
}
