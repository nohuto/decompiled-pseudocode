/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEB_J@Z @ 0x180140CF8
 * Callers:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180140130 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800E9CF0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@st.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F56AC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180140CA4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)*a1;
  v5 = *a1;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_QWORD *)(v7 + 32) >= v8 )
      {
        if ( *(_BYTE *)(v6 + 25) && v8 < *(_QWORD *)(v7 + 32) )
          v6 = v7;
        v5 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) )
    v9 = v3[1];
  else
    v9 = *(_QWORD *)v6;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v9 + 32) )
    {
      v9 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v6 = v9;
      v9 = *(_QWORD *)v9;
    }
  }
  v10 = v5;
  v11 = 0LL;
  v15 = v5;
  while ( v10 != v6 )
  {
    ++v11;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
      &v15,
      (__int64)a2,
      a3,
      v5);
    v10 = v15;
  }
  v15 = v5;
  if ( v5 == *v3 && *(_BYTE *)(v6 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      v3[1]);
    v3[1] = v3;
    *v3 = v3;
    v3[2] = v3;
    a1[1] = 0LL;
  }
  else
  {
    while ( v5 != v6 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
        &v15,
        (__int64)a2,
        a3,
        v5);
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Erase_unchecked(
        (__int64)a1,
        v14,
        v13);
      v5 = v15;
    }
  }
  return v11;
}
