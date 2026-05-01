/*
 * XREFs of ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180691BA0
 * Callers:
 *     _lambda_81c5145ef34e7f56f193ed620fca7ca3_::operator() @ 0x18067A324 (_lambda_81c5145ef34e7f56f193ed620fca7ca3_--operator().c)
 *     ?TryCleanupHiddenSnapBar@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x18067CFA0 (-TryCleanupHiddenSnapBar@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801BA844 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

char __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryCleanupHiddenSnapBar(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *((_DWORD *)this + 80);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_1808759F0,
      0LL,
      v3,
      (__int64)&v5);
  }
  if ( *((_BYTE *)this + 339) || *((_DWORD *)this + 93) != 2 )
    return 0;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(this);
  return 1;
}
