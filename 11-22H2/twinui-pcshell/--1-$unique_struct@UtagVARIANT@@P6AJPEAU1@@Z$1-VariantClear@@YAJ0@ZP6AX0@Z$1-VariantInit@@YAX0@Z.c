/*
 * XREFs of ??1?$unique_struct@UtagVARIANT@@P6AJPEAU1@@Z$1?VariantClear@@YAJ0@ZP6AX0@Z$1?VariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x18053A174
 * Callers:
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromAncestorsOfElement_::_1_::dtor$0 @ 0x18053A54C (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectForSelectedTextFromAncestorsOfElement_--_1.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053A6E4 (-GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEA.c)
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement_::_1_::dtor$0 @ 0x18053A973 (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectForSelectedTextFromDescendantsOfElement_--.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>::~unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>(
        VARIANTARG *pvarg)
{
  return VariantClear(pvarg);
}
