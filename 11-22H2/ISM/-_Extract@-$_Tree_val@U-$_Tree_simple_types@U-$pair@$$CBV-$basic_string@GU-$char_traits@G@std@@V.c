/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800BFE3C
 * Callers:
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF774 (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V-$basic_string_view@GU-$char_traits.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@@Z @ 0x1800473E4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@@Z @ 0x180047438 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@PEAU32@@Z @ 0x18004824C (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18004826C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rcx
  char v12; // dl
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    v7 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v8 = (_QWORD *)v6;
      else
        v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v4);
      *v7 = v8;
    }
    v9 = *a1;
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v10 = v6;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Max(v4);
      *(_QWORD *)(v9 + 16) = v10;
    }
    goto LABEL_33;
  }
  v5 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v5 = *v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    *(_QWORD *)(v5 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v11 = (__int64 *)v3[1];
    if ( (__int64 *)*v11 == v3 )
      *v11 = v5;
    else
      v11[2] = v5;
  }
  v12 = *(_BYTE *)(v5 + 24);
  *(_QWORD *)(v5 + 8) = v3[1];
  *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_33:
  if ( *((_BYTE *)v3 + 24) == 1 )
  {
    if ( v4 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v13 = v6;
        if ( *(_BYTE *)(v4 + 24) != 1 )
          break;
        v14 = *(_BYTE **)v6;
        if ( v4 == *(_QWORD *)v6 )
        {
          v14 = *(_BYTE **)(v6 + 16);
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Lrotate(
              (__int64)a1,
              v6);
            v14 = *(_BYTE **)(v6 + 16);
          }
          if ( v14[25] )
            goto LABEL_51;
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
                (__int64)a1,
                v14);
              v14 = *(_BYTE **)(v6 + 16);
            }
            v14[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Lrotate(
              (__int64)a1,
              v6);
            break;
          }
        }
        else
        {
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            v14 = *(_BYTE **)v6;
          }
          if ( v14[25] )
            goto LABEL_51;
          v15 = *((_QWORD *)v14 + 2);
          if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
            {
              *(_BYTE *)(v15 + 24) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Lrotate(
                (__int64)a1,
                (__int64)v14);
              v14 = *(_BYTE **)v6;
            }
            v14[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            break;
          }
        }
        v14[24] = 0;
LABEL_51:
        v4 = v13;
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v13 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v4 + 24) = 1;
  }
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v3;
}
