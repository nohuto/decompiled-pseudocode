/*
 * XREFs of ?CleanUp@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F9EF0
 * Callers:
 *     ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB2F8 (-InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::CleanUp(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    v1 = *((_QWORD *)this + 63);
    if ( !v1 )
      break;
    v2 = v1 - 1;
    *((_QWORD *)this + 63) = v2;
    if ( v2 )
      ++*((_QWORD *)this + 62);
    else
      *((_QWORD *)this + 62) = 0LL;
  }
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 56LL))((char *)this + 24, 0LL);
}
