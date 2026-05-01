/*
 * XREFs of ?GetIids@CSnapAssistController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18066AEF0
 * Callers:
 *     ?GetIids@CSnapAssistController@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802AB660 (-GetIids@CSnapAssistController@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CSnapAssistController@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802AB680 (-GetIids@CSnapAssistController@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSnapAssistController::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>>(
           this,
           a2,
           a3);
}
