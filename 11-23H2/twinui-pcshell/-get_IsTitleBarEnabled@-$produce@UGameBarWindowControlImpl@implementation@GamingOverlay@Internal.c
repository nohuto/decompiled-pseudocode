/*
 * XREFs of ?get_IsTitleBarEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180412730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x18040FB2C (-GetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_IsTitleBarEnabled(
        unsigned __int64 a1,
        char *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  char v5; // dl
  char IsTitleBarEnabled; // bl
  __int64 result; // rax
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v4 = v3 + 22;
  AcquireSRWLockShared(v3 + 22);
  v8 = v3 + 22;
  try
  {
    IsTitleBarEnabled = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetIsTitleBarEnabled(
                          (__int64)v3,
                          v5);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    *a2 = IsTitleBarEnabled;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
