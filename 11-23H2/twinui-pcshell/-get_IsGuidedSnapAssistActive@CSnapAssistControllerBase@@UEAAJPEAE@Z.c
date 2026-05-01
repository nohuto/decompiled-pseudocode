/*
 * XREFs of ?get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z @ 0x18066E780
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18066B218 (-IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ.c)
 */

__int64 __fastcall CSnapAssistControllerBase::get_IsGuidedSnapAssistActive(
        CSnapAssistControllerBase *this,
        unsigned __int8 *a2)
{
  *a2 = CSnapAssistControllerBase::IsGuidedSnapAssistActive((CSnapAssistControllerBase *)((char *)this - 40));
  return 0LL;
}
