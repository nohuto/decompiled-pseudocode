/*
 * XREFs of ?MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUSize@Foundation@56@XZ @ 0x1804101C0
 * Callers:
 *     ?get_MaximumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x1804127F0 (-get_MaximumSize@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MaximumSize(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v5; // xmm0_8

  v2 = (RTL_SRWLOCK *)(a1 + 176);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 176));
  if ( *(_QWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(a1 + 72);
  }
  else if ( *(_BYTE *)(a1 + 148) )
  {
    v5 = *(_QWORD *)(a1 + 140);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return a2;
}
