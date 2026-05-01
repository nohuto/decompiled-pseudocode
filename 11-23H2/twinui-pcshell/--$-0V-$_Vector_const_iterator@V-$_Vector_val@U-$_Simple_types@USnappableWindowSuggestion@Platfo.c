/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x180680C80
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180684494 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1801C7A89 (__Platform_CoTaskMemAlloc.c)
 *     ??$_Destroy_range@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@PEAU123456@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@@Z @ 0x180681008 (--$_Destroy_range@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
        __int64 a1,
        struct winrt::impl::hstring_header *a2,
        struct winrt::impl::hstring_header *a3)
{
  struct winrt::impl::hstring_header *v4; // rsi
  void **v6; // rdi
  __int64 v7; // rbp
  void **v8; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  const char *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v6 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v7 = (a3 - a2) >> 4;
  if ( (_DWORD)v7 )
  {
    v8 = (void **)_Platform_CoTaskMemAlloc(16LL * (unsigned int)v7);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      v12 = 0LL;
      v11 = "bad allocation";
      pExceptionObject = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)&pExceptionObject;
    }
    *(_DWORD *)(a1 + 8) = v7;
    v6 = v8;
  }
  pExceptionObject = v6;
  v11 = (const char *)v6;
  while ( v4 != a3 )
  {
    *v6 = *(void **)v4;
    v6[1] = winrt::impl::duplicate_hstring(*((winrt::impl **)v4 + 1), a2, (unsigned int)a3);
    v6 += 2;
    v11 = (const char *)v6;
    v4 = (struct winrt::impl::hstring_header *)((char *)v4 + 16);
  }
  std::_Destroy_range<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *,winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>((winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)v6);
  return a1;
}
