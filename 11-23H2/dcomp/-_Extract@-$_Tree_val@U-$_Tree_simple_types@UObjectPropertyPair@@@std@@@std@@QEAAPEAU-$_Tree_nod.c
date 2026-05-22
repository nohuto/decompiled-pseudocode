/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC
 * Callers:
 *     ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ @ 0x180028180 (-Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08 (-UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0 (-RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z.c)
 *     ?StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800E6F30 (-StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@QEAA_KAEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180195380 (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@.c)
 *     ?ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z @ 0x18019D6D4 (-ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z.c)
 *     ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780 (-ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Compositio.c)
 *     ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4 (--1CPresentationSurface@@MEAA@XZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@2@@Z @ 0x180099264 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$RefP.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@SAPEAU?$_Tree_node@PEAUIUnknown@@PEAX@2@PEAU32@@Z @ 0x1800992B4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@SAPEAU-$_Tree_node@PEAUIUnknow.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@@Z @ 0x1800992D8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAXPEAU-$_Tree_no.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  char v14; // dl
  __int64 v15; // rdi
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
    (__int64 *)&v20,
    a2,
    a3,
    a4);
  v6 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *v5;
LABEL_5:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(__int64 **)v8 == v5 )
    {
      *(_QWORD *)v8 = v6;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v6;
    }
    v9 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v10 = (_QWORD *)v8;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Min((_QWORD *)v6);
      *v9 = v10;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v11 = v8;
      }
      else
      {
        v12 = *(_QWORD *)(v6 + 16);
        v11 = v6;
        while ( !*(_BYTE *)(v12 + 25) )
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v11;
    }
    goto LABEL_35;
  }
  v7 = (__int64)v20;
  v6 = v20[2];
  if ( v20 == v5 )
    goto LABEL_5;
  *(_QWORD *)(*v5 + 8) = v20;
  *(_QWORD *)v7 = *v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v7 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v7;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else
  {
    v13 = (__int64 *)v5[1];
    if ( (__int64 *)*v13 == v5 )
      *v13 = v7;
    else
      v13[2] = v7;
  }
  v14 = *(_BYTE *)(v7 + 24);
  *(_QWORD *)(v7 + 8) = v5[1];
  *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v14;
LABEL_35:
  if ( *((_BYTE *)v5 + 24) == 1 )
  {
    if ( v6 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v15 = v8;
        if ( *(_BYTE *)(v6 + 24) != 1 )
          break;
        v16 = *(_BYTE **)v8;
        if ( v6 == *(_QWORD *)v8 )
        {
          v16 = *(_BYTE **)(v8 + 16);
          if ( !v16[24] )
          {
            v16[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>::_Lrotate(
              (__int64)a1,
              v8);
            v16 = *(_BYTE **)(v8 + 16);
          }
          if ( v16[25] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
              v16[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Rrotate((__int64)a1, v16);
              v16 = *(_BYTE **)(v8 + 16);
            }
            v16[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v16[24] )
          {
            v16[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Rrotate((__int64)a1, (_QWORD *)v8);
            v16 = *(_BYTE **)v8;
          }
          if ( v16[25] )
            goto LABEL_53;
          v17 = *((_QWORD *)v16 + 2);
          if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
            {
              *(_BYTE *)(v17 + 24) = 1;
              v16[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>::_Lrotate(
                (__int64)a1,
                (__int64)v16);
              v16 = *(_BYTE **)v8;
            }
            v16[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Rrotate((__int64)a1, (_QWORD *)v8);
            break;
          }
        }
        v16[24] = 0;
LABEL_53:
        v6 = v15;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v15 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v6 + 24) = 1;
  }
  v18 = a1[1];
  if ( v18 )
    a1[1] = v18 - 1;
  return v5;
}
