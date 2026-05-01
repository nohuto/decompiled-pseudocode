/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18014D9CC
 * Callers:
 *     ?OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800987E8 (-OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x1805A0BE0 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@@Z @ 0x180022D50 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18014DB30 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UI.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rcx
  __int64 i; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_2:
    v5 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v5 == v3 )
    {
      *(_QWORD *)v5 = v4;
    }
    else
    {
      *(_QWORD *)(v5 + 16) = v4;
    }
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        i = v5;
      }
      else
      {
        v13 = *(_QWORD *)v4;
        for ( i = v4; !*(_BYTE *)(v13 + 25); v13 = *(_QWORD *)v13 )
          i = v13;
      }
      *(_QWORD *)*a1 = i;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v6 = v5;
      }
      else
      {
        v12 = *(_QWORD *)(v4 + 16);
        v6 = v4;
        while ( !*(_BYTE *)(v12 + 25) )
        {
          v6 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v6;
    }
    v7 = *((_BYTE *)v3 + 24);
    goto LABEL_13;
  }
  v11 = v18;
  v4 = *(_QWORD *)(v18 + 16);
  if ( (__int64 *)v18 == v3 )
    goto LABEL_2;
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v11 = *v3;
  if ( v11 == v3[2] )
  {
    v5 = v11;
  }
  else
  {
    v5 = *(_QWORD *)(v11 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)v5 = v4;
    *(_QWORD *)(v11 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v11;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v11;
  }
  else
  {
    v14 = (__int64 *)v3[1];
    if ( (__int64 *)*v14 == v3 )
      *v14 = v11;
    else
      v14[2] = v11;
  }
  v7 = *(_BYTE *)(v11 + 24);
  *(_QWORD *)(v11 + 8) = v3[1];
  *(_BYTE *)(v11 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v7;
LABEL_13:
  if ( v7 != 1 )
    goto LABEL_14;
  if ( v4 != *(_QWORD *)(*a1 + 8LL) )
  {
    do
    {
      v15 = v5;
      if ( *(_BYTE *)(v4 + 24) != 1 )
        break;
      v16 = *(_QWORD *)v5;
      if ( v4 == *(_QWORD *)v5 )
      {
        v16 = *(_QWORD *)(v5 + 16);
        if ( !*(_BYTE *)(v16 + 24) )
        {
          *(_BYTE *)(v16 + 24) = 1;
          *(_BYTE *)(v5 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Lrotate(
            (__int64)a1,
            v5);
          v16 = *(_QWORD *)(v5 + 16);
        }
        if ( *(_BYTE *)(v16 + 25) )
          goto LABEL_60;
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v16);
            v16 = *(_QWORD *)(v5 + 16);
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Lrotate(
            (__int64)a1,
            v5);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v16 + 24) )
        {
          *(_BYTE *)(v16 + 24) = 1;
          *(_BYTE *)(v5 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v5);
          v16 = *(_QWORD *)v5;
        }
        if ( *(_BYTE *)(v16 + 25) )
          goto LABEL_60;
        v17 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Lrotate(
              (__int64)a1,
              v16);
            v16 = *(_QWORD *)v5;
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v5);
          break;
        }
      }
      *(_BYTE *)(v16 + 24) = 0;
LABEL_60:
      v4 = v15;
      v5 = *(_QWORD *)(v5 + 8);
    }
    while ( v15 != *(_QWORD *)(*a1 + 8LL) );
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_14:
  v8 = a1[1];
  if ( v8 )
    a1[1] = v8 - 1;
  return v3;
}
