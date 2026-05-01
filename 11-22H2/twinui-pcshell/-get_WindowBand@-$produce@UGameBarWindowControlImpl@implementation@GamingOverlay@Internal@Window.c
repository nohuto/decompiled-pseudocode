/*
 * XREFs of ?get_WindowBand@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAI@Z @ 0x1804129A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAIUread_lock_required@wil@@@Z @ 0x18040FCB8 (-GetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_WindowBand(
        unsigned __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  char v5; // dl
  int WindowBand; // ebx
  __int64 result; // rax
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v4 = v3 + 22;
  AcquireSRWLockShared(v3 + 22);
  v8 = v3 + 22;
  try
  {
    WindowBand = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetWindowBand(
                   (__int64)v3,
                   v5);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    *a2 = WindowBand;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
