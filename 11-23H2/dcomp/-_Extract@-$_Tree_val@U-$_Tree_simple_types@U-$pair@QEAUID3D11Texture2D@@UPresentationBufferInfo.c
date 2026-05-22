/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180098E84
 * Callers:
 *     ?NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@@Z @ 0x180098C48 (-NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUID3D11Device5@@@Z @ 0x1800A0C48 (-erase@-$_Tree@V-$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIUnknown@@@Z @ 0x1800A7780 (-erase@-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnkno.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@2@@Z @ 0x180099264 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$RefP.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@SAPEAU?$_Tree_node@PEAUIUnknown@@PEAX@2@PEAU32@@Z @ 0x1800992B4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@SAPEAU-$_Tree_node@PEAUIUnknow.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@@Z @ 0x1800992D8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXPEAU-$_Tree_no.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>>::_Extract(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // r11
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rcx
  char v15; // dl
  bool i; // zf
  __int64 v17; // rdi
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v22; // [rsp+38h] [rbp+10h] BYREF

  v22 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
    (__int64 *)&v22,
    a2,
    a3,
    a4);
  v8 = v7[2];
  if ( !*(_BYTE *)(*v7 + 25) )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v8 = *v7;
    }
    else
    {
      v9 = (__int64)v22;
      v8 = v22[2];
      if ( v22 != v7 )
      {
        *(_QWORD *)(*v7 + 8) = v22;
        *(_QWORD *)v9 = *v7;
        if ( v9 == v7[2] )
        {
          v10 = v9;
        }
        else
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v8 + 25) )
            *(_QWORD *)(v8 + 8) = v10;
          *(_QWORD *)v10 = v8;
          *(_QWORD *)(v9 + 16) = v7[2];
          *(_QWORD *)(v7[2] + 8) = v9;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v7 )
        {
          *(_QWORD *)(*a1 + 8LL) = v9;
        }
        else
        {
          v14 = (__int64 *)v7[1];
          if ( (__int64 *)*v14 == v7 )
            *v14 = v9;
          else
            v14[2] = v9;
        }
        v15 = *(_BYTE *)(v9 + 24);
        *(_QWORD *)(v9 + 8) = v7[1];
        *(_BYTE *)(v9 + 24) = *((_BYTE *)v7 + 24);
        *((_BYTE *)v7 + 24) = v15;
        goto LABEL_35;
      }
    }
  }
  v10 = v7[1];
  if ( !*(_BYTE *)(v8 + 25) )
    *(_QWORD *)(v8 + 8) = v10;
  if ( *(__int64 **)(*a1 + 8LL) == v7 )
  {
    *(_QWORD *)(*a1 + 8LL) = v8;
  }
  else if ( *(__int64 **)v10 == v7 )
  {
    *(_QWORD *)v10 = v8;
  }
  else
  {
    *(_QWORD *)(v10 + 16) = v8;
  }
  v6 = *a1;
  if ( *(__int64 **)*a1 == v7 )
  {
    if ( *(_BYTE *)(v8 + 25) )
      v11 = v10;
    else
      v11 = std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Min(v8, v5, v6, v10);
    *(_QWORD *)v6 = v11;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v7 )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v12 = v10;
    }
    else
    {
      v13 = *(_QWORD *)(v8 + 16);
      v12 = v8;
      while ( !*(_BYTE *)(v13 + 25) )
      {
        v12 = v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v12;
  }
LABEL_35:
  if ( *((_BYTE *)v7 + 24) != 1 )
    goto LABEL_59;
  for ( i = v8 == *(_QWORD *)(*a1 + 8LL); !i; i = v17 == *(_QWORD *)(*a1 + 8LL) )
  {
    v17 = v10;
    if ( *(_BYTE *)(v8 + 24) != 1 )
      break;
    v18 = *(__int64 **)v10;
    if ( v8 == *(_QWORD *)v10 )
    {
      v18 = *(__int64 **)(v10 + 16);
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        *(_BYTE *)(v10 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>::_Lrotate(
          a1,
          v10,
          v6,
          v10);
        v18 = *(__int64 **)(v10 + 16);
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        v6 = *v18;
        if ( *(_BYTE *)(*v18 + 24) != 1 || *(_BYTE *)(v18[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v18[2] + 24) == 1 )
          {
            *(_BYTE *)(v6 + 24) = 1;
            *((_BYTE *)v18 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Rrotate(a1, v18, v6, v10);
            v18 = *(__int64 **)(v10 + 16);
          }
          *((_BYTE *)v18 + 24) = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(v18[2] + 24) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>::_Lrotate(
            a1,
            v10,
            v6,
            v10);
          break;
        }
LABEL_53:
        *((_BYTE *)v18 + 24) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        *(_BYTE *)(v10 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Rrotate(a1, v10, v6, v10);
        v18 = *(__int64 **)v10;
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        v19 = v18[2];
        if ( *(_BYTE *)(v19 + 24) != 1 || *(_BYTE *)(*v18 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v18 + 24) == 1 )
          {
            *(_BYTE *)(v19 + 24) = 1;
            *((_BYTE *)v18 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>::_Lrotate(
              a1,
              v18,
              v6,
              v10);
            v18 = *(__int64 **)v10;
          }
          *((_BYTE *)v18 + 24) = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*v18 + 24) = 1;
          std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Rrotate(a1, v10, v6, v10);
          break;
        }
        goto LABEL_53;
      }
    }
    v8 = v17;
    v10 = *(_QWORD *)(v10 + 8);
  }
  *(_BYTE *)(v8 + 24) = 1;
LABEL_59:
  v20 = a1[1];
  if ( v20 )
    a1[1] = v20 - 1;
  return v7;
}
