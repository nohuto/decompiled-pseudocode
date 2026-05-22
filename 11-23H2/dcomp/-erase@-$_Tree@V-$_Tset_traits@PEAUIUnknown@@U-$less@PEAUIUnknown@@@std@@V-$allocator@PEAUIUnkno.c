/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIUnknown@@@Z @ 0x1800A7780
 * Callers:
 *     ?RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z @ 0x1800A75FC (-RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180098E84 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@@Z @ 0x1800A71E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_si.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

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
  v16 = v5;
  while ( v10 != v6 )
  {
    ++v11;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
      &v16,
      (__int64)a2,
      a3,
      v5);
    v10 = v16;
  }
  v16 = v5;
  if ( v5 == *v3 && *(_BYTE *)(v6 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Erase_tree<std::allocator<std::_Tree_node<IUnknown *,void *>>>(
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
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
        &v16,
        (__int64)a2,
        a3,
        v5);
      v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>>::_Extract(
              a1,
              v14,
              v13,
              v14);
      std::_Deallocate<16,0>(v15, 0x28uLL);
      v5 = v16;
    }
  }
  return v11;
}
