/*
 * XREFs of ?SetPropertyChangedListener@Partner@CompositionPropertySet@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x180009860
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68 (-ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionProp.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Partner::SetPropertyChangedListener(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rdi
  Microsoft::WRL2::ContextSession *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1 - 160;
  v5 = *(Microsoft::WRL2::ContextSession **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::ProxyObject::ListenForPropertyChange(v3, a2, v3, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5EB,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
        (const char *)(unsigned int)v7,
        0);
      DoStackCaptureDirect(v8, 0x1Cu);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
