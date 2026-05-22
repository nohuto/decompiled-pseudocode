/*
 * XREFs of ?UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18011E5E4
 * Callers:
 *     ?SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxis@@_N@Z @ 0x18011DEC0 (-SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4ScrollAxi.c)
 *     ?SetManipulationRedirectionMode@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4VisualInteractionSourceRedirectionMode@2345@@Z @ 0x18011E01C (-SetManipulationRedirectionMode@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEA.c)
 *     ?put_PositionXSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z @ 0x180162100 (-put_PositionXSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@.c)
 *     ?put_PositionYSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z @ 0x180162190 (-put_PositionYSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@.c)
 *     ?put_ScaleSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z @ 0x180162220 (-put_ScaleSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGestures@Private@234@@Z @ 0x180153C6C (-SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGe.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::UpdateMousewheelInteractionConfiguration(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this)
{
  __int64 v1; // rdx
  _DWORD *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 66) - 2) <= 1 )
  {
    if ( (*((_BYTE *)this + 200) & 1) != 0 )
      v1 = 3LL;
    if ( (*((_BYTE *)this + 208) & 1) != 0 )
      v1 = (unsigned int)v1 | 0xC;
    if ( (*((_BYTE *)this + 216) & 1) != 0 )
      v1 = (unsigned int)v1 | 0x30;
    v2 = (_DWORD *)*((_QWORD *)this + 32);
    if ( v2 )
    {
      if ( !v2[38] )
        v1 = (unsigned int)v1 & 0xFFFFFFFC;
      if ( !v2[39] )
        v1 = (unsigned int)v1 & 0xFFFFFFF3;
      if ( !v2[40] )
        v1 = (unsigned int)v1 & 0xFFFFFFCF;
    }
  }
  v3 = Windows::UI::Composition::CompositionPointerEventRouter::SetMousewheelSettings(*((_QWORD *)this + 30), v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A0,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
