/*
 * XREFs of ?get_Bounds@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1804125B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA?AURect@Foundation@56@Uread_lock_required@wil@@@Z @ 0x18040F824 (-GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA-AU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_Bounds(
        unsigned __int64 a1,
        _OWORD *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 result; // rax
  float v5[6]; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  AcquireSRWLockShared(v3 + 22);
  v6 = v3 + 22;
  try
  {
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetBounds((__int64)v3, v5);
    if ( v3 != (RTL_SRWLOCK *)-176LL )
      ReleaseSRWLockShared(v3 + 22);
    *a2 = *(_OWORD *)v5;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
