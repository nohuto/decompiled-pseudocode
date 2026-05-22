/*
 * XREFs of ?SetInertiaEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x18011DFBC
 * Callers:
 *     ?put_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceMode@3456@@Z @ 0x18011F200 (-put_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW.c)
 *     ?put_PositionYSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceMode@3456@@Z @ 0x18011F330 (-put_PositionYSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW.c)
 *     ?put_ScaleSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceMode@3456@@Z @ 0x18011F460 (-put_ScaleSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4Int.c)
 * Callees:
 *     ?SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x1801615D0 (-SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@.c)
 */

char __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::SetInertiaEnabledForAxis(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  char v4; // bl
  char result; // al

  v3 = (int)a2;
  v4 = a3;
  result = (*(_BYTE *)(a1 + 8LL * (int)a2 + 200) & 2) != 0;
  if ( result != (_BYTE)a3 )
  {
    Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(*(_QWORD *)(a1 + 248), a2, a3);
    result = (2 * v4) | *(_BYTE *)(a1 + 8 * v3 + 200) & 0xFD;
    *(_BYTE *)(a1 + 8 * v3 + 200) = result;
  }
  return result;
}
