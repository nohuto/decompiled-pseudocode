/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800FF8E4
 * Callers:
 *     ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x180040750 (--$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Shell.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18005354C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18005527C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010E050 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // rsi
  char v3; // cl
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  unsigned int *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  _QWORD *v16; // rdx
  __int64 *v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  v4 = *((_QWORD *)v2 + 1);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  result = v6 - 1;
  *((_QWORD *)v2 + 6) = v6 - 1;
  v9 = (_QWORD *)**((_QWORD **)v2 + 1);
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)v9 + 16, 4uLL);
    v13 = *((_QWORD *)v2 + 3);
    v14 = 2 * (*((_QWORD *)v2 + 6) & result);
    if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)v2 + 6) & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (*((_QWORD *)v2 + 6) & result)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    result = *(_QWORD *)(v13 + 16 * (*((_QWORD *)v2 + 6) & result) + 8);
    v7 = *v11;
    if ( (_DWORD)v7 == *(_DWORD *)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(_QWORD **)(v12 + 8);
        *v16 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        v10[1] = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
        break;
      result = *v17;
      if ( (_DWORD)v7 == *(_DWORD *)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(_QWORD **)(v12 + 8);
        *v19 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v18 + 8) = v7;
        v10[1] = v19;
        *(_QWORD *)(v12 + 8) = result;
        goto LABEL_15;
      }
    }
    v20 = *(_QWORD **)(v12 + 8);
    *v20 = v10;
    v7 = v10[1];
    *(_QWORD *)v7 = result;
    result = *v17;
    *(_QWORD *)result = v12;
    *v17 = v7;
    v10[1] = v20;
    *(_QWORD *)(v12 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v9 = v10;
  }
  return result;
}
