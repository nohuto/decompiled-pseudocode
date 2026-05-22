/*
 * XREFs of ?SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x180094590
 * Callers:
 *     ?SetPropertyChangedListener@InsetClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x1800944E0 (-SetPropertyChangedListener@InsetClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOT.c)
 *     ?SetPropertyChangedListener@RectangleClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18017B7C0 (-SetPropertyChangedListener@RectangleClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68 (-ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionProp.c)
 *     ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C (-EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::SetPropertyChangedListener(
        __int64 *a1,
        int a2,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *a3)
{
  unsigned int v6; // edi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 5;
  v7 = a2 - 2;
  if ( !v7 || (v8 = v7 - 5) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 2) == 0 || (unsigned int)(v10 - 2) <= 1 )
  {
    v11 = Windows::UI::Composition::CompositionClip::EnsureComponentTransform((Windows::UI::Composition::CompositionClip *)a1);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    v13 = a2 - 2;
    if ( v13 )
    {
      v14 = v13 - 5;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              if ( v17 != 1 )
              {
                v19 = -2147024809;
                v22 = 379LL;
                v23 = 2147942487LL;
LABEL_24:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v22,
                  (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
                  (const char *)v23);
                v21 = 201LL;
                goto LABEL_25;
              }
              v6 = 6;
            }
          }
          else
          {
            v6 = 3;
          }
        }
        else
        {
          v6 = 1;
        }
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = 2;
    }
    v18 = Windows::UI::Composition::ProxyObject::ListenForPropertyChange(
            a1[20],
            v6,
            (struct Windows::UI::Composition::ProxyObject *)a1,
            a3,
            0);
    v19 = v18;
    if ( v18 >= 0 )
      return 0LL;
    v23 = (unsigned int)v18;
    v22 = 382LL;
    goto LABEL_24;
  }
  v19 = -2147024809;
  v21 = 207LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
    (const char *)v19);
  return v19;
}
