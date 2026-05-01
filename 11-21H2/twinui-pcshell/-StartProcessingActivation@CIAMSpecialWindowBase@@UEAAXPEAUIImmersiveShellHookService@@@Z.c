/*
 * XREFs of ?StartProcessingActivation@CIAMSpecialWindowBase@@UEAAXPEAUIImmersiveShellHookService@@@Z @ 0x180116B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIAMSpecialWindowBase::StartProcessingActivation(
        CIAMSpecialWindowBase *this,
        struct IImmersiveShellHookService *a2)
{
  Microsoft::WRL::ComPtr<IImmersiveShellHookService>::operator=((char *)this + 40, a2);
}
