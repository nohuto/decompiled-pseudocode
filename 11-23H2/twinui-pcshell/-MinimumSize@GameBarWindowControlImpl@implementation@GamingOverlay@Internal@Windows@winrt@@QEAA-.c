/*
 * XREFs of ?MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUSize@Foundation@56@XZ @ 0x180410250
 * Callers:
 *     ?get_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x180412870 (-get_MinimumSize@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MinimumSize(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v5; // xmm0_8

  v2 = (RTL_SRWLOCK *)(a1 + 176);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 176));
  if ( *(_QWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(a1 + 64);
  }
  else if ( *(_BYTE *)(a1 + 136) )
  {
    v5 = *(_QWORD *)(a1 + 128);
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
