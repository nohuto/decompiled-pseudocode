/*
 * XREFs of ?ReleaseResources@ExpressionAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18019BAE0
 * Callers:
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 * Callees:
 *     ??$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180064104 (--$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectCo.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x18019BB34 (McTemplateU0xxx_EventWriteTransfer.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimator::ReleaseResources(
        Windows::UI::Composition::ExpressionAnimator *this,
        int a2)
{
  DirectComposition::CDelayedDestructionObject **v2; // rbx
  DirectComposition::CDelayedDestructionObject **v3; // rdi

  v2 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 296);
  v3 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 288);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x200) != 0 )
    McTemplateU0xxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this, (unsigned int)*v3, (char)*v2);
  ReleaseInterface<DirectComposition::CSharedAllocation>(v3);
  ReleaseInterface<DirectComposition::CSharedAllocation>(v2);
}
