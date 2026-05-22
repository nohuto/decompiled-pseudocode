/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006B480
 * Callers:
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18006A840 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@KPEAX@std@@@1@PEAU?$_Tree_node@KPEAX@1@@Z @ 0x180069100 (--$_Erase_tree@V-$allocator@U-$_Tree_node@KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@K@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@QEAAPEAU?$_Tree_node@KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006ADB4 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@K@std@@@std@@QEAAPEAU-$_Tree_node@KPEAX@2@V-$_Tree_u.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::erase(
        _QWORD *a1,
        unsigned int *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // r9
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  unsigned int v7; // ecx
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  void *v13; // rax
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = (_QWORD *)*a1;
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  if ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 7) >= v7 )
      {
        if ( *((_BYTE *)v5 + 25) && v7 < *((_DWORD *)v6 + 7) )
          v5 = v6;
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( *((_BYTE *)v5 + 25) )
    v8 = (__int64 *)v2[1];
  else
    v8 = (__int64 *)*v5;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( *a2 >= *((_DWORD *)v8 + 7) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v5 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == (_QWORD *)*v2 && *((_BYTE *)v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<unsigned long>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned long,void *>>>(
      (__int64)a1,
      (__int64)a1,
      v2[1]);
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v14);
      v13 = (void *)std::_Tree_val<std::_Tree_simple_types<unsigned long>>::_Extract(a1, v12);
      std::_Deallocate<16,0>(v13, 0x20uLL);
      v4 = v14;
    }
  }
  return v10;
}
