/*
 * XREFs of ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x18076D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x1807693E0 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vect.c)
 *     ?_Reallocate_exactly@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18076EF60 (-_Reallocate_exactly@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetRegions(
        XamlSnapAssistViewHost *this,
        unsigned int a2,
        struct ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *a3,
        const char *a4)
{
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned int i; // edi
  _OWORD *v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v6 = (char *)this + 520;
    v7 = *((_QWORD *)this + 65);
    *((_QWORD *)v6 + 1) = v7;
    if ( a2 > (unsigned __int64)((*((_QWORD *)v6 + 2) - v7) >> 5) )
      std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate_exactly(v6);
    for ( i = 0; i < a2; ++i )
    {
      v9 = (_OWORD *)((char *)a3 + 32 * i);
      v10 = *((_QWORD *)v6 + 1);
      if ( v10 == *((_QWORD *)v6 + 2) )
      {
        std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
          (const void **)v6,
          (_BYTE *)v10,
          v9);
      }
      else
      {
        *(_OWORD *)v10 = *v9;
        *(_OWORD *)(v10 + 16) = v9[1];
        *((_QWORD *)v6 + 1) += 32LL;
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EC,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
