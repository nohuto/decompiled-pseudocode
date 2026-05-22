/*
 * XREFs of ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z @ 0x18014FBA0
 * Callers:
 *     ?SetReferenceParameter@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@PEAUHSTRING__@@0@Z @ 0x180129D90 (-SetReferenceParameter@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@PEAU.c)
 *     ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60 (-GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAni.c)
 *     ?GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180188B00 (-GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@2.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetReference@ParameterEntry@@QEAAXPEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x18014FB3C (-SetReference@ParameterEntry@@QEAAXPEAVCompositionObject@Composition@UI@Windows@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetReferenceParameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        struct Windows::UI::Composition::CompositionObject *a3,
        char a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  unsigned int v9; // edi
  ParameterEntry *v11; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v13 = 0;
  if ( a3 )
  {
    if ( !a4 )
    {
      v8 = Windows::UI::Composition::CompositionAnimation::ValidateKey(this, a2);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEE,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
    }
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 1, &v11, &v13);
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, v11, v13);
    ParameterEntry::SetReference((Microsoft::WRL2::NestableRuntimeClass **)v11, a3);
  }
  else
  {
    v4 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0xEAu);
  }
  return v4;
}
