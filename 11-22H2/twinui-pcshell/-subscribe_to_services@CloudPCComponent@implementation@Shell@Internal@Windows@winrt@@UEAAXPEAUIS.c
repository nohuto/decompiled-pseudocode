/*
 * XREFs of ?subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AF710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        struct IServiceProvider *a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::Initialize(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((*((_QWORD *)this + 13) - 16LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL)),
    a2);
}
