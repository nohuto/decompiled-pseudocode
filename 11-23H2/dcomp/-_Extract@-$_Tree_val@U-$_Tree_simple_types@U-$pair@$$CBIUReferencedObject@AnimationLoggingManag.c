/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002B9CC
 * Callers:
 *     ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ @ 0x180028180 (-Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08 (-UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002BD10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedO.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@@Z @ 0x1800792BC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@@Z @ 0x180079310 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 */

__int64 ***__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 ***v3; // r11
  __int64 **v4; // r10
  __int64 *v5; // r9
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v11; // rax
  __int64 **v12; // rcx
  char v13; // dl
  __int64 *v14; // rax
  __int64 *i; // rdx
  __int64 *v16; // rcx
  __int64 *v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *((_BYTE *)*v3 + 25) )
    goto LABEL_2;
  if ( *((_BYTE *)v4 + 25) )
  {
    v4 = *v3;
    goto LABEL_2;
  }
  v11 = v18;
  v4 = (__int64 **)v18[2];
  if ( v18 == (__int64 *)v3 )
  {
LABEL_2:
    v5 = (__int64 *)v3[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = v5;
    if ( *(__int64 ****)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( (__int64 ***)*v5 == v3 )
    {
      *v5 = (__int64)v4;
    }
    else
    {
      v5[2] = (__int64)v4;
    }
    if ( *(__int64 ****)*a1 == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        i = v5;
      }
      else
      {
        v17 = *v4;
        for ( i = (__int64 *)v4; !*((_BYTE *)v17 + 25); v17 = (__int64 *)*v17 )
          i = v17;
      }
      *(_QWORD *)*a1 = i;
    }
    if ( *(__int64 ****)(*a1 + 16LL) == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        v14 = v5;
      }
      else
      {
        v16 = v4[2];
        v14 = (__int64 *)v4;
        while ( !*((_BYTE *)v16 + 25) )
        {
          v14 = v16;
          v16 = (__int64 *)v16[2];
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v14;
    }
    goto LABEL_9;
  }
  (*v3)[1] = v18;
  *v11 = (__int64)*v3;
  if ( v11 == (__int64 *)v3[2] )
  {
    v5 = v11;
  }
  else
  {
    v5 = (__int64 *)v11[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = v5;
    *v5 = (__int64)v4;
    v11[2] = (__int64)v3[2];
    v3[2][1] = v11;
  }
  if ( *(__int64 ****)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v11;
  }
  else
  {
    v12 = v3[1];
    if ( *v12 == (__int64 *)v3 )
      *v12 = v11;
    else
      v12[2] = v11;
  }
  v13 = *((_BYTE *)v11 + 24);
  v11[1] = (__int64)v3[1];
  *((_BYTE *)v11 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v13;
LABEL_9:
  if ( *((_BYTE *)v3 + 24) == 1 )
  {
    if ( v4 != *(__int64 ***)(*a1 + 8LL) )
    {
      do
      {
        v6 = v5;
        if ( *((_BYTE *)v4 + 24) != 1 )
          break;
        v7 = *v5;
        if ( v4 == (__int64 **)*v5 )
        {
          v7 = v5[2];
          if ( !*(_BYTE *)(v7 + 24) )
          {
            *(_BYTE *)(v7 + 24) = 1;
            *((_BYTE *)v5 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Lrotate(
              a1,
              v5);
            v7 = v5[2];
          }
          if ( *(_BYTE *)(v7 + 25) )
            goto LABEL_19;
          if ( *(_BYTE *)(*(_QWORD *)v7 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v7 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v7 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v7 + 24LL) = 1;
              *(_BYTE *)(v7 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Rrotate(a1);
              v7 = v5[2];
            }
            *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
            *((_BYTE *)v5 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v7 + 16) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Lrotate(
              a1,
              v5);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v7 + 24) )
          {
            *(_BYTE *)(v7 + 24) = 1;
            *((_BYTE *)v5 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Rrotate(a1);
            v7 = *v5;
          }
          if ( *(_BYTE *)(v7 + 25) )
            goto LABEL_19;
          v8 = *(_QWORD *)(v7 + 16);
          if ( *(_BYTE *)(v8 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v7 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v7 + 24LL) == 1 )
            {
              *(_BYTE *)(v8 + 24) = 1;
              *(_BYTE *)(v7 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Lrotate(
                a1,
                v7);
              v7 = *v5;
            }
            *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
            *((_BYTE *)v5 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v7 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Rrotate(a1);
            break;
          }
        }
        *(_BYTE *)(v7 + 24) = 0;
LABEL_19:
        v4 = (__int64 **)v6;
        v5 = (__int64 *)v5[1];
      }
      while ( v6 != *(__int64 **)(*a1 + 8LL) );
    }
    *((_BYTE *)v4 + 24) = 1;
  }
  v9 = a1[1];
  if ( v9 )
    a1[1] = v9 - 1;
  return v3;
}
