/*
 * XREFs of ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180563EB4
 * Callers:
 *     ?GetActiveApps@AppUsageTracker@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x180564570 (-GetActiveApps@AppUsageTracker@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x180175438 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180328AC0 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803295BC (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18033B9FC (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x18033BD14 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

void __fastcall std::vector<std::wstring>::_Insert_range<std::move_iterator<std::wstring *>>(
        char **a1,
        char *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  unsigned __int64 v8; // rsi
  char *v9; // r13
  char *v10; // r15
  __int64 v11; // rcx
  size_t size_of; // rax
  _OWORD *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  _QWORD *v18; // rax
  _OWORD *v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  char *v22; // r12
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+78h] [rbp+10h]
  __int64 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v6 = (__int64)a2;
  v8 = ((__int64)a4 - a3) >> 5;
  v9 = *a1;
  v10 = a1[1];
  if ( v8 )
  {
    if ( v8 <= (a1[2] - v10) >> 5 )
    {
      v21 = 32 * v8;
      v22 = &a2[32 * v8];
      if ( v8 >= (v10 - a2) >> 5 )
      {
        a1[1] = (char *)std::_Uninitialized_move<std::wstring *>(a2, v10, v22);
        std::_Destroy_range<std::allocator<std::wstring>>(v6, (__int64)v10);
        v27 = (_QWORD *)(a3 + 24);
        v28 = v6 - a3;
        while ( 1 )
        {
          v29 = v27 - 3;
          if ( v27 - 3 == a4 )
            break;
          *(_QWORD *)((char *)v27 + v28 - 8) = 0LL;
          *(_QWORD *)((char *)v27 + v28) = 0LL;
          *(_OWORD *)v6 = *v29;
          *(_OWORD *)(v6 + 16) = v29[1];
          *(v27 - 1) = 0LL;
          *v27 = 7LL;
          *(_WORD *)v29 = 0;
          v6 += 32LL;
          v27 += 4;
        }
      }
      else
      {
        v23 = (__int64)&v10[-v21];
        a1[1] = (char *)std::_Uninitialized_move<std::wstring *>(&v10[-v21], v10, v10);
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>(v6, v23, v10);
        std::_Destroy_range<std::allocator<std::wstring>>(v6, (__int64)v22);
        v24 = (_QWORD *)(a3 + 24);
        v25 = v6 - a3;
        while ( 1 )
        {
          v26 = v24 - 3;
          if ( v24 - 3 == a4 )
            break;
          *(_QWORD *)((char *)v24 + v25 - 8) = 0LL;
          *(_QWORD *)((char *)v24 + v25) = 0LL;
          *(_OWORD *)v6 = *v26;
          *(_OWORD *)(v6 + 16) = v26[1];
          *(v24 - 1) = 0LL;
          *v24 = 7LL;
          *(_WORD *)v26 = 0;
          v6 += 32LL;
          v24 += 4;
        }
      }
      std::_Destroy_range<std::allocator<std::wstring>>(v6, v6);
    }
    else
    {
      v11 = (v10 - v9) >> 5;
      if ( v8 > 0x7FFFFFFFFFFFFFFLL - v11 )
        std::vector<Geometry::CRect>::_Xlength();
      v30 = v11 + v8;
      v34 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
              a1,
              v11 + v8);
      size_of = std::_Get_size_of_n<32>(v34);
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v14 = (v6 - (__int64)v9) >> 5;
      v32 = (__int64)&v13[2 * v14 + 2 * v8];
      try
      {
        v33 = (__int64)&v13[2 * v14];
        v17 = (_OWORD *)v33;
        v18 = (_QWORD *)(a3 + 24);
        v15 = v33 - a3;
        while ( 1 )
        {
          v16 = v18 - 3;
          if ( v18 - 3 == a4 )
            break;
          *(_QWORD *)((char *)v18 + v15 - 8) = 0LL;
          *(_QWORD *)((char *)v18 + v15) = 0LL;
          *v17 = *v16;
          v17[1] = v16[1];
          *(v18 - 1) = 0LL;
          *v18 = 7LL;
          *(_WORD *)v16 = 0;
          v17 += 2;
          v18 += 4;
        }
        std::_Destroy_range<std::allocator<std::wstring>>((__int64)v17, (__int64)v17);
        if ( v8 == 1 && (char *)v6 == v10 )
        {
          v19 = v13;
          v20 = v9;
        }
        else
        {
          std::_Uninitialized_move<std::wstring *>(v9, (_QWORD *)v6, v13);
          v33 = (__int64)v13;
          v19 = (_OWORD *)v32;
          v20 = (_QWORD *)v6;
        }
        std::_Uninitialized_move<std::wstring *>(v20, v10, v19);
        std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v13, v30, v34);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<std::wstring>>(v33, v32);
        std::_Deallocate<16,0>(v13, 32 * v34);
        throw;
      }
    }
  }
}
