/*
 * XREFs of ?put_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x180412DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180411A0C (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::put_MinimumSize(
        unsigned __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  float v5[6]; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)v5 = a2;
  v2 = (RTL_SRWLOCK *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  AcquireSRWLockExclusive(v2 + 22);
  v6 = v2 + 22;
  try
  {
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(
      (__int64)v2,
      v3,
      v5);
    if ( v2 != (RTL_SRWLOCK *)-176LL )
      ReleaseSRWLockExclusive(v2 + 22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
