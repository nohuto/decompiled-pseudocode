/*
 * XREFs of ?StartTrackingProcess@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHI@Z @ 0x18027E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18027E708 (-StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::StartTrackingProcess(
        __int64 a1,
        unsigned int a2)
{
  winrt::Windows::Internal::Shell::implementation::ProcessTracker *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Windows::Internal::Shell::implementation::ProcessTracker *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::ProcessTracker::StartTrackingProcess(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
