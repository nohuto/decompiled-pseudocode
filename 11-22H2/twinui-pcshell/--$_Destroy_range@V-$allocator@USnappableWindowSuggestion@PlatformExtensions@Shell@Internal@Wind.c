/*
 * XREFs of ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1806810C0
 * Callers:
 *     _std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion___::_Emplace_reallocate_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion__::_1_::catch$4 @ 0x1806815F3 (_std--vector_winrt--Windows--Internal--Shell--PlatformExtensions--SnappableWindowSuggestion_std-.c)
 *     ??$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180681E04 (--$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ??1?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180682CC8 (--1-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloc.c)
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180684494 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 *     ?_Change_array@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@_K1@Z @ 0x180685C38 (-_Change_array@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x18068323C (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
        winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *this,
        winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion::`scalar deleting destructor'(
                 v3,
                 (unsigned int)a2);
      v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
  return result;
}
