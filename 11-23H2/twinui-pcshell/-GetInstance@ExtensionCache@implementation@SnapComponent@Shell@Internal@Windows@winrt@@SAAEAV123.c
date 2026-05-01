/*
 * XREFs of ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x180683C88
 * Callers:
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x180683904 (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

struct winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance(
        void)
{
  if ( __TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA);
    if ( __TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA == -1 )
    {
      qword_18098FF28 = 0LL;
      `winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::inst = 0LL;
      xmmword_18098FF18 = 0LL;
      atexit(`winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::`dynamic atexit destructor for 'inst'');
      Init_thread_footer(&__TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA);
    }
  }
  return (struct winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *)&`winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::inst;
}
