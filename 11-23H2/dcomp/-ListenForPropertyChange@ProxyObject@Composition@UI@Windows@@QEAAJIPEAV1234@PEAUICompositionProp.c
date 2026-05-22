/*
 * XREFs of ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68
 * Callers:
 *     ?SetPropertyChangedListener@Partner@CompositionPropertySet@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x180009860 (-SetPropertyChangedListener@Partner@CompositionPropertySet@Composition@UI@Windows@@UEAAJW4DCOMPO.c)
 *     ?SetPropertyChangedListener@InsetClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x1800944E0 (-SetPropertyChangedListener@InsetClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOT.c)
 *     ?SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x180094590 (-SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSI.c)
 *     ?SetPropertyChangedListener@RectangleClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18017B7C0 (-SetPropertyChangedListener@RectangleClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     ?UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@0PEAUICompositionPropertyChangedListenerPartner@234@IPEAI@Z @ 0x180070598 (-UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJP.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z @ 0x180072020 (-RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProx.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::ListenForPropertyChange(
        __int64 a1,
        unsigned int a2,
        struct Windows::UI::Composition::ProxyObject *a3,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *a4,
        int a5)
{
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // rax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager(*(Windows::UI::Composition::CompositorCommon **)(a1 + 24));
  v10 = Windows::UI::Composition::AnimationBindingManager::UpdatePropertyChangeCallbackRegistration(
          BindingManager,
          (struct Windows::UI::Composition::ProxyObject *)a1,
          a3,
          a4,
          a2,
          &v14);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x312,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  else
  {
    if ( a5 )
    {
      if ( a5 == 1 && !a4 )
        Windows::UI::Composition::CompositorCommon::RemoveDeferredPropertyChangeNotification(
          *(Windows::UI::Composition::CompositorCommon **)(a1 + 24),
          (struct Windows::UI::Composition::ProxyObject *)a1,
          a2,
          0);
    }
    else
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        0xFFFFu,
        v14);
    }
    return 0LL;
  }
}
