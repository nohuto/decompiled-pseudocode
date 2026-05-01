/*
 * XREFs of ?_Reallocate_exactly@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180685D64
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180684494 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180681E04 (--$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@w.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v6; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v12; // [rsp+40h] [rbp+8h]

  v4 = ((char *)a1[1] - (char *)*a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v12 = v6;
  try
  {
    std::_Uninitialized_move<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
      *a1,
      a1[1],
      v6);
    v8 = a2;
    v9 = v4;
    v10 = (__int64)v7;
    v11 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, 16 * a2);
    throw;
  }
  std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Change_array(
    v11,
    v10,
    v9,
    v8);
}
