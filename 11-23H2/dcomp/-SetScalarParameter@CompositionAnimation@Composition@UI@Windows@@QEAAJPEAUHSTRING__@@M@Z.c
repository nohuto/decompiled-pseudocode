/*
 * XREFs of ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58
 * Callers:
 *     ?SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C538 (-SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositio.c)
 *     ?SetScalarParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@M@Z @ 0x180094460 (-SetScalarParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@M@Z.c)
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 *     ?SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x18013ABF0 (-SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180148FA0 (-SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAV.c)
 *     ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890 (-SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVComposi.c)
 *     ?SetFinalValueParameter@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x180192D00 (-SetFinalValueParameter@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetScalar@ParameterEntry@@QEAAXM@Z @ 0x18003DD18 (-SetScalar@ParameterEntry@@QEAAXM@Z.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetScalarParameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  ParameterEntry *v8; // [rsp+30h] [rbp-28h] BYREF
  bool v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0;
  v5 = Windows::UI::Composition::CompositionAnimation::ValidateKey(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0x166u);
  }
  else
  {
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 1, &v8, &v9);
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, v8, v9);
    ParameterEntry::SetScalar(v8, a3);
    return 0;
  }
  return v6;
}
