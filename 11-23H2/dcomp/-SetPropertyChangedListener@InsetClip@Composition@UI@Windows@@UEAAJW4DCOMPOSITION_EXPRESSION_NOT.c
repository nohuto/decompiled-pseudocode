/*
 * XREFs of ?SetPropertyChangedListener@InsetClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x1800944E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68 (-ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionProp.c)
 *     ?SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x180094590 (-SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSI.c)
 */

__int64 __fastcall Windows::UI::Composition::InsetClip::SetPropertyChangedListener(
        __int64 a1,
        int a2,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *a3)
{
  struct Windows::UI::Composition::ProxyObject *v4; // rdi
  int v5; // ebx
  unsigned int v6; // edx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct Windows::UI::Composition::ProxyObject *)a1;
  switch ( a2 )
  {
    case 14:
      v6 = 7;
      break;
    case 15:
      v6 = 4;
      break;
    case 16:
      v6 = 6;
      break;
    case 17:
      v6 = 5;
      break;
    default:
      v5 = Windows::UI::Composition::CompositionClip::SetPropertyChangedListener();
      if ( v5 < 0 )
      {
        v8 = 282LL;
        goto LABEL_15;
      }
      a1 = 0LL;
      v6 = 0;
      if ( v4 )
        return 0LL;
      break;
  }
  v5 = Windows::UI::Composition::ProxyObject::ListenForPropertyChange(a1, v6, v4, a3, 0);
  if ( v5 >= 0 )
    return 0LL;
  v8 = 289LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinsetclip.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
