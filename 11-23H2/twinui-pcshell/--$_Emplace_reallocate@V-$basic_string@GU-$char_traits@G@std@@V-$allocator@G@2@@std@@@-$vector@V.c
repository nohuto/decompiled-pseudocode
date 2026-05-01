/*
 * XREFs of ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x1803F544C
 * Callers:
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA?A_T$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803F7A48 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1802D36A8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803F6738 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x180409B00 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

char *__fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t size_of; // rax
  char *v11; // rax
  __int64 v12; // rdi
  char *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  char *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v18 = v11;
  v13 = &v11[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  try
  {
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    v20 = (__int64)v13;
    v14 = a1[1];
    v15 = v11;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::wstring *>(v16, a2, v11);
      v20 = v12;
      v15 = v13 + 32;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v16, v14, v15);
    std::vector<std::wstring>::_Change_array(a1, v12, v8, v9, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v20, (__int64)(v13 + 32));
    std::_Deallocate<16,0>(v19, 32 * v9);
    throw;
  }
  return result;
}
