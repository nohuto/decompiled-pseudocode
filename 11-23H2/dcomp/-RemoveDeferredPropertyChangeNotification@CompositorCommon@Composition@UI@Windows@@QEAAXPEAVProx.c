/*
 * XREFs of ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z @ 0x180072020
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68 (-ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionProp.c)
 *     ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0 (-SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_Windows::UI::Composition::ProxyObject___unsigned_int_________lambda_5591e94747a7b7ad9a315bca13f7f8de___ @ 0x18012263C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--pair_Windows--UI--.c)
 *     ?erase@?$vector@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@std@@@std@@@2@0@Z @ 0x18012A40C (-erase@-$vector@U-$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@V-$allocator@U-$pair@PEAV.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::RemoveDeferredPropertyChangeNotification(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        int a3,
        char a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct Windows::UI::Composition::ProxyObject *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  char v10; // [rsp+2Ch] [rbp-Ch]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 968);
  if ( ((*((_QWORD *)this + 122) - *((_QWORD *)this + 121)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = *((_QWORD *)this + 122);
    v8 = a2;
    v6 = *v4;
    v9 = a3;
    v10 = a4;
    v7 = (_QWORD *)((__int64 (__fastcall *)(char *, __int64, __int64, struct Windows::UI::Composition::ProxyObject **))std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_Windows::UI::Composition::ProxyObject___unsigned_int_________lambda_5591e94747a7b7ad9a315bca13f7f8de___)(
                     &v11,
                     v6,
                     v5,
                     &v8);
    std::vector<std::pair<Windows::UI::Composition::ProxyObject *,unsigned int>>::erase(v4, &v8, *v7, v5);
  }
}
