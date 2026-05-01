/*
 * XREFs of ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180620F54
 * Callers:
 *     ?GetActiveApps@AppUsageTracker@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1806215C0 (-GetActiveApps@AppUsageTracker@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801AF1D4 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1802D36A8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x1803F5DB4 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803F6738 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x180409B00 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ??$_Uninitialized_copy@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1806212DC (--$_Uninitialized_copy@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 */

void __fastcall std::vector<std::wstring>::_Insert_range<std::move_iterator<std::wstring *>>(
        _QWORD *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v8; // r12
  char *v9; // r14
  char *v10; // r15
  __int64 v11; // rcx
  size_t size_of; // rax
  char *v13; // r13
  __int64 v14; // rdx
  char *v15; // r14
  __int64 v16; // r8
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+88h] [rbp+10h]
  __int64 *v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+90h] [rbp+18h]
  char *v27; // [rsp+98h] [rbp+20h]

  v8 = (a4 - a3) >> 5;
  v25 = a1 + 1;
  v9 = (char *)*a1;
  v27 = (char *)*a1;
  v10 = (char *)a1[1];
  if ( v8 )
  {
    if ( v8 <= (__int64)(a1[2] - (_QWORD)v10) >> 5 )
    {
      v18 = 32 * v8;
      v19 = (__int64)&a2[32 * v8];
      if ( v8 >= (v10 - a2) >> 5 )
      {
        *v25 = std::_Uninitialized_move<std::wstring *>(a2, v10, v19);
        std::_Destroy_range<std::allocator<std::wstring>>((__int64)a2, (__int64)v10);
      }
      else
      {
        v20 = (__int64)&v10[-v18];
        *v25 = std::_Uninitialized_move<std::wstring *>(&v10[-v18], v10, (__int64)v10);
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>((__int64)a2, v20, v10);
        std::_Destroy_range<std::allocator<std::wstring>>((__int64)a2, v19);
      }
      std::_Uninitialized_copy<std::move_iterator<std::wstring *>>(a3, a4, a2);
    }
    else
    {
      v11 = (v10 - v9) >> 5;
      if ( v8 > 0x7FFFFFFFFFFFFFFLL - v11 )
        std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
      v22 = v11 + v8;
      v21 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
              a1,
              v11 + v8);
      size_of = std::_Get_size_of_n<32>(v21);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v14 = (a2 - v9) >> 5;
      v24 = (__int64)&v13[32 * v14 + 32 * v8];
      try
      {
        v15 = &v13[32 * v14];
        std::_Uninitialized_copy<std::move_iterator<std::wstring *>>(a3, a4, v15);
        v26 = (__int64)v15;
        if ( v8 == 1 && a2 == v10 )
        {
          v16 = (__int64)v13;
          v17 = v27;
        }
        else
        {
          std::_Uninitialized_move<std::wstring *>(v27, a2, (__int64)v13);
          v26 = (__int64)v13;
          v16 = v24;
          v17 = a2;
        }
        std::_Uninitialized_move<std::wstring *>(v17, v10, v16);
        std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v13, v22, v21);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<std::wstring>>(v26, v24);
        std::_Deallocate<16,0>(v13, 32 * v21);
        throw;
      }
    }
  }
}
