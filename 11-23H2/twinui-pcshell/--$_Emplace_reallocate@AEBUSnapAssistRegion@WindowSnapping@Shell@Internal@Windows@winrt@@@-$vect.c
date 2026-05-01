/*
 * XREFs of ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x1807693E0
 * Callers:
 *     ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x18076D8D0 (-SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Win.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1802D36A8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@_K1@Z @ 0x18068A3F4 (-_Change_array@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$alloca.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  size_t size_of; // rax
  char *v11; // rax
  __int64 v12; // rsi
  char *v13; // rdi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v19 = v11;
  try
  {
    v13 = &v11[v6 & 0xFFFFFFFFFFFFFFE0uLL];
    *(_OWORD *)v13 = *a3;
    *((_OWORD *)v13 + 1) = a3[1];
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 32;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(
      (__int64)a1,
      v12,
      v8,
      v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, 32 * v9);
    throw;
  }
  return result;
}
