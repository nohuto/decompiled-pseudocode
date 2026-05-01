/*
 * XREFs of ?get_AppFrameWindow@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_K@Z @ 0x1804124F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_KUread_lock_required@wil@@@Z @ 0x18040F758 (-GetAppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_AppFrameWindow(
        unsigned __int64 a1,
        __int64 *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  __int64 AppFrameWindow; // rbx
  __int64 result; // rax
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v4 = v3 + 22;
  AcquireSRWLockExclusive(v3 + 22);
  v7 = v3 + 22;
  try
  {
    AppFrameWindow = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetAppFrameWindow((__int64)v3);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    *a2 = AppFrameWindow;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
