/*
 * XREFs of ?SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Private@234@II@Z @ 0x180153F1C
 * Callers:
 *     ?SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxis@@_N@Z @ 0x18011DEC0 (-SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxi.c)
 *     ?SetTouchGesturesContactCount@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_TOUCH@@II@Z @ 0x180153E70 (-SetTouchGesturesContactCount@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666 (-ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigu.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::SetTouchSettings(
        Windows::UI::Composition::CompositionPointerEventRouter *a1,
        int a2,
        int a3,
        int a4)
{
  int Only; // ebx
  __int64 v6; // rdx
  _DWORD v8[4]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v11; // [rsp+58h] [rbp+18h] BYREF

  v8[0] = 0;
  v8[3] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v9[0] = 1;
  v9[3] = a2;
  v9[1] = a3;
  v9[2] = a4;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(a1);
  if ( Only < 0 )
  {
    v6 = 592LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return (unsigned int)Only;
  }
  v11 = 3;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v8,
           (const enum InteractionProperty::Enum *)&v11);
  if ( Only < 0 )
  {
    v6 = 596LL;
    goto LABEL_3;
  }
  v11 = 3;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v9,
           (const enum InteractionProperty::Enum *)&v11);
  if ( Only < 0 )
  {
    v6 = 600LL;
    goto LABEL_3;
  }
  return 0LL;
}
