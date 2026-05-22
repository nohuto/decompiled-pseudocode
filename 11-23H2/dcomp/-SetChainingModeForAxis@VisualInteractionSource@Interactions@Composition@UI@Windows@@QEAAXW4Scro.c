/*
 * XREFs of ?SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@2345@@Z @ 0x18011DE74
 * Callers:
 *     ?put_PositionXChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionChainingMode@3456@@Z @ 0x18011F180 (-put_PositionXChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA.c)
 *     ?put_PositionYChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionChainingMode@3456@@Z @ 0x18011F2B0 (-put_PositionYChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA.c)
 *     ?put_ScaleChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionChainingMode@3456@@Z @ 0x18011F3E0 (-put_ScaleChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4I.c)
 *     ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z @ 0x18013150C (-RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@Interactions@234@@Z @ 0x1800B7E42 (-SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4Int.c)
 */

void __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::SetChainingModeForAxis(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v3; // rsi

  v3 = a2;
  if ( *(_DWORD *)(a1 + 8LL * a2 + 204) != a3 )
  {
    Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis(*(_QWORD *)(a1 + 248), a2, a3);
    *(_DWORD *)(a1 + 8 * v3 + 204) = a3;
  }
}
