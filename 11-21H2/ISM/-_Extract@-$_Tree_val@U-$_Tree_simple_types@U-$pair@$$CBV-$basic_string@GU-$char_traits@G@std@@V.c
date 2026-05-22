/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180096F9C
 * Callers:
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180096830 (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V-$basic_string_view@GU-$char_traits.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@@Z @ 0x180038B20 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@@Z @ 0x180038B74 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800908D0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18009136C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@PEAU32@@Z @ 0x180097364 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  __int64 *v12; // rcx
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++((__int64 *)&v18);
  v5 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v5 + 25) )
  {
    v5 = *v4;
LABEL_5:
    v7 = v4[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v7;
    if ( *(__int64 **)(*a1 + 8LL) == v4 )
    {
      *(_QWORD *)(*a1 + 8LL) = v5;
    }
    else if ( *(__int64 **)v7 == v4 )
    {
      *(_QWORD *)v7 = v5;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v5;
    }
    v8 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v9 = (_QWORD *)v7;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v5);
      *v8 = v9;
      v8 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v8[2] == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v10 = v7;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Max(
                v5,
                v3,
                v8,
                v7);
      v8[2] = v10;
    }
    v11 = *((_BYTE *)v4 + 24);
    goto LABEL_34;
  }
  v6 = (__int64)v18;
  v5 = v18[2];
  if ( v18 == v4 )
    goto LABEL_5;
  *(_QWORD *)(*v4 + 8) = v18;
  *(_QWORD *)v6 = *v4;
  if ( v6 == v4[2] )
  {
    v7 = v6;
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v7;
    *(_QWORD *)v7 = v5;
    *(_QWORD *)(v6 + 16) = v4[2];
    *(_QWORD *)(v4[2] + 8) = v6;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v4 )
  {
    *(_QWORD *)(*a1 + 8LL) = v6;
  }
  else
  {
    v12 = (__int64 *)v4[1];
    if ( (__int64 *)*v12 == v4 )
      *v12 = v6;
    else
      v12[2] = v6;
  }
  v11 = *(_BYTE *)(v6 + 24);
  *(_QWORD *)(v6 + 8) = v4[1];
  *(_BYTE *)(v6 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v11;
LABEL_34:
  if ( v11 == 1 )
  {
    if ( v5 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v13 = v7;
        if ( *(_BYTE *)(v5 + 24) != 1 )
          break;
        v14 = *(_BYTE **)v7;
        if ( v5 == *(_QWORD *)v7 )
        {
          v14 = *(_BYTE **)(v7 + 16);
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Lrotate(
              (__int64)a1,
              v7);
            v14 = *(_BYTE **)(v7 + 16);
          }
          if ( v14[25] )
            goto LABEL_52;
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
                (__int64)a1,
                v14);
              v14 = *(_BYTE **)(v7 + 16);
            }
            v14[24] = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Lrotate(
              (__int64)a1,
              v7);
            break;
          }
        }
        else
        {
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v7);
            v14 = *(_BYTE **)v7;
          }
          if ( v14[25] )
            goto LABEL_52;
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
              v14 = *(_BYTE **)v7;
            }
            v14[24] = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v7);
            break;
          }
        }
        v14[24] = 0;
LABEL_52:
        v5 = v13;
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v13 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v5 + 24) = 1;
  }
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v4;
}
