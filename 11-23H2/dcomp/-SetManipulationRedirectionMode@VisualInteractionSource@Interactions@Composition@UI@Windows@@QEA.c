/*
 * XREFs of ?SetManipulationRedirectionMode@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJW4VisualInteractionSourceRedirectionMode@2345@@Z @ 0x18011E01C
 * Callers:
 *     ?put_ManipulationRedirectionMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4VisualInteractionSourceRedirectionMode@3456@@Z @ 0x18011F0F0 (-put_ManipulationRedirectionMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18011E5E4 (-UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Wi.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::SetManipulationRedirectionMode(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  unsigned int v6; // eax
  int updated; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 248);
  v4 = 1;
  if ( ((a2 - 1) & 0xFFFFFFFD) == 0 )
    v4 = 2;
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(v2 + 24) + 456LL),
    *(_DWORD *)(v2 + 128),
    0,
    v4);
  *(_DWORD *)(v2 + 152) = v4;
  v6 = *(_DWORD *)(a1 + 264) - 2;
  *(_DWORD *)(a1 + 264) = a2;
  if ( v6 <= 1 == (unsigned int)(a2 - 2) <= 1 )
    return 0LL;
  updated = Windows::UI::Composition::Interactions::VisualInteractionSource::UpdateMousewheelInteractionConfiguration((Windows::UI::Composition::Interactions::VisualInteractionSource *)a1);
  v8 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B5,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
    (const char *)(unsigned int)updated);
  return v8;
}
