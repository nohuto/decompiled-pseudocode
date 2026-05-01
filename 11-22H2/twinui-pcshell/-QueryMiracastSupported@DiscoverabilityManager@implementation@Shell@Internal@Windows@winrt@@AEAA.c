/*
 * XREFs of ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18025D3D4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18025CD20 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806FB448 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     QueryMiracastDisplayDeviceSupport @ 0x1806FCFA4 (QueryMiracastDisplayDeviceSupport.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_180990200 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180990200);
    if ( dword_180990200 == -1 )
    {
      byte_18098D8F0 = (int)QueryMiracastDisplayDeviceSupport(v2) >= 0;
      Init_thread_footer(&dword_180990200);
    }
  }
  return byte_18098D8F0;
}
