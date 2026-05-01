/*
 * XREFs of ??$_Destroy_range@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@PEAU123456@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@@Z @ 0x180681008
 * Callers:
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x180680C80 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@USnappableWindowSuggestion@Platfo.c)
 *     ??1?$_Uninitialized_backout@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x180682C1C (--1-$_Uninitialized_backout@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     ?GetSnappableWindowSuggestions@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEAPEAUstruct_Windows_Internal_Shell_PlatformExtensions_SnappableWindowSuggestion@23@@Z @ 0x1806843F0 (-GetSnappableWindowSuggestions@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapCo.c)
 * Callees:
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x18068323C (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *,winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
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
