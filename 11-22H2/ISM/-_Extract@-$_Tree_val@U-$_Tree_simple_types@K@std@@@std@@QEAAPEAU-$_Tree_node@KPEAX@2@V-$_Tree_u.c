/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@QEAAPEAU?$_Tree_node@KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006ADB4
 * Callers:
 *     ?erase@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006B480 (-erase@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@QEAA_KAEBK@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18004826C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x1800652A0 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAX.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@2@@Z @ 0x1800652F0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@VirtualHot.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<unsigned long>>::_Extract(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rcx
  char v12; // dl
  bool i; // zf
  __int64 v14; // rdi
  _BYTE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v19);
  v4 = *(_QWORD *)(v3 + 16);
  if ( !*(_BYTE *)(*(_QWORD *)v3 + 25LL) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *(_QWORD *)v3;
    }
    else
    {
      v5 = v19;
      v4 = *(_QWORD *)(v19 + 16);
      if ( v19 != v3 )
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v19;
        *(_QWORD *)v5 = *(_QWORD *)v3;
        if ( v5 == *(_QWORD *)(v3 + 16) )
        {
          v6 = v5;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 8);
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v6;
          *(_QWORD *)v6 = v4;
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(v3 + 16);
          *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL) = v5;
        }
        if ( *(_QWORD *)(*a1 + 8LL) == v3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v5;
        }
        else
        {
          v11 = *(__int64 **)(v3 + 8);
          if ( *v11 == v3 )
            *v11 = v5;
          else
            v11[2] = v5;
        }
        v12 = *(_BYTE *)(v5 + 24);
        *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
        *(_BYTE *)(v5 + 24) = *(_BYTE *)(v3 + 24);
        *(_BYTE *)(v3 + 24) = v12;
        goto LABEL_35;
      }
    }
  }
  v6 = *(_QWORD *)(v3 + 8);
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v6;
  if ( *(_QWORD *)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v4;
  }
  else if ( *(_QWORD *)v6 == v3 )
  {
    *(_QWORD *)v6 = v4;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v4;
  }
  v7 = (_QWORD *)*a1;
  if ( *(_QWORD *)*a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v8 = (_QWORD *)v6;
    else
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v4);
    *v7 = v8;
  }
  if ( *(_QWORD *)(*a1 + 16LL) == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v9 = v6;
    }
    else
    {
      v10 = *(_QWORD *)(v4 + 16);
      v9 = v4;
      while ( !*(_BYTE *)(v10 + 25) )
      {
        v9 = v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v9;
  }
LABEL_35:
  if ( *(_BYTE *)(v3 + 24) != 1 )
    goto LABEL_59;
  for ( i = v4 == *(_QWORD *)(*a1 + 8LL); !i; i = v14 == *(_QWORD *)(*a1 + 8LL) )
  {
    v14 = v6;
    if ( *(_BYTE *)(v4 + 24) != 1 )
      break;
    v15 = *(_BYTE **)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v15 = *(_BYTE **)(v6 + 16);
      if ( !v15[24] )
      {
        v15[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
          (__int64)a1,
          v6);
        v15 = *(_BYTE **)(v6 + 16);
      }
      if ( !v15[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
            v15[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(
              (__int64)a1,
              v15);
            v15 = *(_BYTE **)(v6 + 16);
          }
          v15[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
            (__int64)a1,
            v6);
          break;
        }
LABEL_53:
        v15[24] = 0;
      }
    }
    else
    {
      if ( !v15[24] )
      {
        v15[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v6);
        v15 = *(_BYTE **)v6;
      }
      if ( !v15[25] )
      {
        v16 = *((_QWORD *)v15 + 2);
        if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == 1 )
          {
            *(_BYTE *)(v16 + 24) = 1;
            v15[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
              (__int64)a1,
              (__int64)v15);
            v15 = *(_BYTE **)v6;
          }
          v15[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v6);
          break;
        }
        goto LABEL_53;
      }
    }
    v4 = v14;
    v6 = *(_QWORD *)(v6 + 8);
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_59:
  v17 = a1[1];
  if ( v17 )
    a1[1] = v17 - 1;
  return v3;
}
