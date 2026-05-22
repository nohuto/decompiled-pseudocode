/*
 * XREFs of ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4
 * Callers:
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18005ECE8 (-SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z @ 0x18005F160 (-CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 *     ??_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18005F3A0 (--_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060210 (--_EScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4 (--1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_EColorKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060730 (--_EColorKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAUAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@0PEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068B40 (--$_Uninitialized_move@PEAUAnimationObjectInfo@Composition@UI@Windows@@V-$allocator@UAnimationOb.c)
 *     ?_Change_array@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUAnimationObjectInfo@Composition@UI@Windows@@_K1@Z @ 0x180068BE0 (-_Change_array@-$vector@UAnimationObjectInfo@Composition@UI@Windows@@V-$allocator@UAnimationObje.c)
 *     ??_GVector2KeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007EF60 (--_GVector2KeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1AnimationObjectInfo@Composition@UI@Windows@@QEAA@XZ @ 0x180068CE0 (--1AnimationObjectInfo@Composition@UI@Windows@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(
        Windows::UI::Composition::AnimationObjectInfo *this,
        Windows::UI::Composition::AnimationObjectInfo *a2)
{
  Windows::UI::Composition::AnimationObjectInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Windows::UI::Composition::AnimationObjectInfo::~AnimationObjectInfo(v3);
      v3 = (Windows::UI::Composition::AnimationObjectInfo *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
