/*
 * XREFs of ?SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private@234@II@Z @ 0x180153D9C
 * Callers:
 *     ?SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxis@@_N@Z @ 0x18011DEC0 (-SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxi.c)
 *     ?SetPenGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_PEN@@@Z @ 0x180153D10 (-SetPenGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITIO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666 (-ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigu.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::SetPenSettings(
        Windows::UI::Composition::CompositionPointerEventRouter *a1,
        int a2,
        __int64 a3,
        int a4)
{
  int Only; // ebx
  __int64 v6; // rdx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v8[2] = -1;
  v8[0] = 2;
  v8[3] = a2;
  v8[1] = 1;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(a1);
  if ( Only < 0 )
  {
    v6 = 556LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return (unsigned int)Only;
  }
  v10 = 3;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
           a1,
           (const struct InteractionConfigurationInternal *)v8,
           (const enum InteractionProperty::Enum *)&v10);
  if ( Only < 0 )
  {
    v6 = 558LL;
    goto LABEL_3;
  }
  return 0LL;
}
