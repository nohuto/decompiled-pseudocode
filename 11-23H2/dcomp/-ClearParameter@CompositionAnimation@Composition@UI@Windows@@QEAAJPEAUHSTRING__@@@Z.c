/*
 * XREFs of ?ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18014F1A8
 * Callers:
 *     ?ClearParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18014F120 (-ClearParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60 (-GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAni.c)
 *     ?GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180188B00 (-GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@2.c)
 * Callees:
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAPEAVParameterEntry@@PEAUHSTRING__@@@Z @ 0x18014F264 (-FindElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAPEAVParameterEntry@@PEAUHS.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::ClearParameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  struct ParameterEntry *Element; // rax
  ParameterEntry *v5; // rdi
  HSTRING v6; // rbx

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 192);
  Element = (struct ParameterEntry *)CGenericTableMap<HSTRING__ *,ParameterEntry>::FindElement((char *)this + 192, a2);
  v5 = Element;
  if ( Element )
  {
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, Element, 0);
    v6 = *(HSTRING *)v5;
    CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement(v2, v5);
    WindowsDeleteString(v6);
  }
  return 0LL;
}
