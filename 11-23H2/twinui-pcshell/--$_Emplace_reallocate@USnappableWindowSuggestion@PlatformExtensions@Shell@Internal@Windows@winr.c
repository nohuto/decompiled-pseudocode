/*
 * XREFs of ??$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x1806814E0
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180684494 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180681E04 (--$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ?_Change_array@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@_K1@Z @ 0x180685C38 (-_Change_array@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@win.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v13; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v14; // rdi
  char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v18; // r8
  __int64 v19; // rcx
  char *result; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v21; // [rsp+20h] [rbp-48h]
  void *v22; // [rsp+20h] [rbp-48h]
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v23; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  v15 = (char *)v13 + (v6 & 0xFFFFFFFFFFFFFFF0uLL);
  try
  {
    *(_QWORD *)v15 = *a3;
    v16 = a3[1];
    a3[1] = 0LL;
    *((_QWORD *)v15 + 1) = v16;
    v23 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)v15;
    v17 = a1[1];
    v18 = v14;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
        v19,
        a2,
        v14);
      v23 = v14;
      v18 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)(v15 + 16);
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
      v19,
      v17,
      v18);
    std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Change_array(
      a1,
      v14,
      v9,
      v8,
      v21);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
      v23,
      (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)(v15 + 16));
    std::_Deallocate<16,0>(v22, 16 * v8);
    throw;
  }
  return result;
}
