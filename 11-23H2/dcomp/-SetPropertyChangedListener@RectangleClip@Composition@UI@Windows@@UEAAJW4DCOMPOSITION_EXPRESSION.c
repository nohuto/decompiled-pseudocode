/*
 * XREFs of ?SetPropertyChangedListener@RectangleClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18017B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68 (-ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionProp.c)
 *     ?SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x180094590 (-SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSI.c)
 */

__int64 __fastcall Windows::UI::Composition::RectangleClip::SetPropertyChangedListener(
        struct Windows::UI::Composition::ProxyObject *a1,
        int a2,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *a3)
{
  __int64 v5; // r11
  unsigned int v6; // edx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (__int64)a1;
  if ( a2 > 20 )
  {
    switch ( a2 )
    {
      case 21:
        v6 = 15;
        break;
      case 22:
        v6 = 8;
        break;
      case 23:
        v6 = 9;
        break;
      case 24:
        v6 = 10;
        break;
      case 25:
        v6 = 11;
        break;
      default:
        goto LABEL_21;
    }
LABEL_31:
    v7 = Windows::UI::Composition::ProxyObject::ListenForPropertyChange(v5, v6, a1, a3, 0);
    if ( v7 < 0 )
    {
      v8 = 502LL;
      goto LABEL_23;
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 20:
      v6 = 14;
      goto LABEL_31;
    case 14:
      v6 = 7;
      goto LABEL_31;
    case 15:
      v6 = 4;
      goto LABEL_31;
    case 16:
      v6 = 6;
      goto LABEL_31;
    case 17:
      v6 = 5;
      goto LABEL_31;
    case 18:
      v6 = 12;
      goto LABEL_31;
    case 19:
      v6 = 13;
      goto LABEL_31;
  }
LABEL_21:
  v7 = Windows::UI::Composition::CompositionClip::SetPropertyChangedListener((__int64 *)a1, a2, a3);
  if ( v7 < 0 )
  {
    v8 = 494LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtrectangleclip.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v5 = 0LL;
  v6 = 0;
  if ( !a1 )
    goto LABEL_31;
  return 0LL;
}
