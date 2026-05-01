/*
 * XREFs of ?get_AllowPointerActivation@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180412430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x18040F63C (-GetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_AllowPointerActivation(
        unsigned __int64 a1,
        char *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  char AllowPointerActivation; // bl
  __int64 result; // rax
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v4 = v3 + 22;
  AcquireSRWLockShared(v3 + 22);
  v7 = v3 + 22;
  try
  {
    AllowPointerActivation = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetAllowPointerActivation((__int64)v3);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    *a2 = AllowPointerActivation;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
