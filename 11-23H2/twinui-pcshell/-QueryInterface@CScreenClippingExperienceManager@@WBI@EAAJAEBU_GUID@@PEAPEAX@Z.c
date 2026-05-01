/*
 * XREFs of ?QueryInterface@CScreenClippingExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180298840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScreenClippingExperienceManager::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::QueryInterface(
           a1 - 24,
           a2,
           a3);
}
