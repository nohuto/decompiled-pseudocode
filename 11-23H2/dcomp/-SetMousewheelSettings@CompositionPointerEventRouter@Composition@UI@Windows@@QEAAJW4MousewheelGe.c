/*
 * XREFs of ?SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGestures@Private@234@@Z @ 0x180153C6C
 * Callers:
 *     ?UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18011E5E4 (-UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666 (-ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigu.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::SetMousewheelSettings(
        Windows::UI::Composition::CompositionPointerEventRouter *a1,
        int a2)
{
  int Only; // ebx
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v7[0] = 4;
  v7[1] = a2;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(a1);
  if ( Only < 0 )
  {
    v5 = 518LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return (unsigned int)Only;
  }
  if ( a2 )
    SetProcessMousewheelRoutingMode(2LL);
  v10 = 3;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v7,
           (const enum InteractionProperty::Enum *)&v10);
  if ( Only < 0 )
  {
    v5 = 530LL;
    goto LABEL_3;
  }
  return 0LL;
}
