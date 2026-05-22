/*
 * XREFs of ?SetMouseGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSE@@@Z @ 0x180153B90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666 (-ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigu.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::SetMouseGestures(
        __int64 a1,
        int a2)
{
  Windows::UI::Composition::CompositionPointerEventRouter *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int Only; // eax
  __int64 v7; // rdx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionPointerEventRouter *)(a1 - 136);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v10 = 0LL;
    v9[0] = 3;
    v9[1] = a2;
    Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(v2);
    v5 = Only;
    if ( Only >= 0 )
    {
      v12 = 3;
      Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
               v2,
               (const struct InteractionConfigurationInternal *)v9,
               (const enum InteractionProperty::Enum *)&v12);
      v5 = Only;
      if ( Only >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 496LL;
    }
    else
    {
      v7 = 494LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    DoStackCaptureDirect(v5, 0x353u);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
