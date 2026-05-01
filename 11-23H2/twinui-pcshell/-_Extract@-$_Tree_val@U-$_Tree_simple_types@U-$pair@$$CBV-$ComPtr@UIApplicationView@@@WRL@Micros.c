/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009D394
 * Callers:
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180083BA8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18009D258 (-OnViewRemoved@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18066FF94 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@@Z @ 0x180030FEC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@@Z @ 0x180031040 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rax
  char v10; // dl
  __int64 i; // rdx
  __int64 v12; // rdi
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
    goto LABEL_2;
  }
  v9 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
  {
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
        v16 = *(_QWORD *)v4;
        for ( i = v4; !*(_BYTE *)(v16 + 25); v16 = *(_QWORD *)v16 )
          i = v16;
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
        v15 = *(_QWORD *)(v4 + 16);
        v6 = v4;
        while ( !*(_BYTE *)(v15 + 25) )
        {
          v6 = v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v6;
    }
    goto LABEL_12;
  }
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v9 = *v3;
  if ( v9 == v3[2] )
  {
    v5 = v9;
  }
  else
  {
    v5 = *(_QWORD *)(v9 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)v5 = v4;
    *(_QWORD *)(v9 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v9;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
  }
  else
  {
    v17 = (__int64 *)v3[1];
    if ( (__int64 *)*v17 == v3 )
      *v17 = v9;
    else
      v17[2] = v9;
  }
  v10 = *(_BYTE *)(v9 + 24);
  *(_QWORD *)(v9 + 8) = v3[1];
  *(_BYTE *)(v9 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v10;
LABEL_12:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_13;
  if ( v4 != *(_QWORD *)(*a1 + 8LL) )
  {
    do
    {
      v12 = v5;
      if ( *(_BYTE *)(v4 + 24) != 1 )
        break;
      v13 = *(_BYTE **)v5;
      if ( v4 == *(_QWORD *)v5 )
      {
        v13 = *(_BYTE **)(v5 + 16);
        if ( !v13[24] )
        {
          v13[24] = 1;
          *(_BYTE *)(v5 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Lrotate(
            (__int64)a1,
            v5);
          v13 = *(_BYTE **)(v5 + 16);
        }
        if ( v13[25] )
          goto LABEL_42;
        if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v13 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v13 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
            v13[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Rrotate(
              (__int64)a1,
              v13);
            v13 = *(_BYTE **)(v5 + 16);
          }
          v13[24] = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v13 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Lrotate(
            (__int64)a1,
            v5);
          break;
        }
      }
      else
      {
        if ( !v13[24] )
        {
          v13[24] = 1;
          *(_BYTE *)(v5 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v5);
          v13 = *(_BYTE **)v5;
        }
        if ( v13[25] )
          goto LABEL_42;
        v14 = *((_QWORD *)v13 + 2);
        if ( *(_BYTE *)(v14 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) == 1 )
          {
            *(_BYTE *)(v14 + 24) = 1;
            v13[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Lrotate(
              (__int64)a1,
              (__int64)v13);
            v13 = *(_BYTE **)v5;
          }
          v13[24] = *(_BYTE *)(v5 + 24);
          *(_BYTE *)(v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v5);
          break;
        }
      }
      v13[24] = 0;
LABEL_42:
      v4 = v12;
      v5 = *(_QWORD *)(v5 + 8);
    }
    while ( v12 != *(_QWORD *)(*a1 + 8LL) );
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_13:
  v7 = a1[1];
  if ( v7 )
    a1[1] = v7 - 1;
  return v3;
}
