/*
 * XREFs of ?SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxis@@_N@Z @ 0x18011DEC0
 * Callers:
 *     ?put_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceMode@3456@@Z @ 0x18011F200 (-put_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW.c)
 *     ?put_PositionYSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceMode@3456@@Z @ 0x18011F330 (-put_PositionYSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW.c)
 *     ?put_ScaleSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceMode@3456@@Z @ 0x18011F460 (-put_ScaleSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4Int.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18011E5E4 (-UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Wi.c)
 *     ?SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private@234@II@Z @ 0x180153D9C (-SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private.c)
 *     ?SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Private@234@II@Z @ 0x180153F1C (-SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Pri.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::SetEnabledForAxis(
        __int64 a1,
        int a2,
        char a3)
{
  char v4; // cl
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  int updated; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_BYTE *)(a1 + 8LL * a2 + 200);
  if ( (v4 & 1) != a3 )
  {
    v5 = 0;
    *(_BYTE *)(a1 + 8LL * a2 + 200) = a3 | v4 & 0xFE;
    if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
      v5 = 3;
    if ( (*(_BYTE *)(a1 + 208) & 1) != 0 )
      v5 |= 0xCu;
    if ( (*(_BYTE *)(a1 + 216) & 1) != 0 )
      v5 |= 0x30u;
    v6 = Windows::UI::Composition::CompositionPointerEventRouter::SetTouchSettings(
           *(_QWORD *)(a1 + 240),
           v5,
           1LL,
           0xFFFFFFFFLL);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26F,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    updated = Windows::UI::Composition::CompositionPointerEventRouter::SetPenSettings(*(_QWORD *)(a1 + 240), v5);
    if ( updated < 0 )
    {
      v10 = 625LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    updated = Windows::UI::Composition::Interactions::VisualInteractionSource::UpdateMousewheelInteractionConfiguration((Windows::UI::Composition::Interactions::VisualInteractionSource *)a1);
    if ( updated < 0 )
    {
      v10 = 627LL;
      goto LABEL_12;
    }
  }
  return 0LL;
}
