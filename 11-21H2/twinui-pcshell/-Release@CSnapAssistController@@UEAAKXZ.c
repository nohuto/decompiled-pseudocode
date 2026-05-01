/*
 * XREFs of ?Release@CSnapAssistController@@UEAAKXZ @ 0x1800EE5E0
 * Callers:
 *     ?Release@CSnapAssistController@@W7EAAKXZ @ 0x18020F7F0 (-Release@CSnapAssistController@@W7EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBA@EAAKXZ @ 0x18020F810 (-Release@CSnapAssistController@@WBA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBCA@EAAKXZ @ 0x18020F830 (-Release@CSnapAssistController@@WBCA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBI@EAAKXZ @ 0x18020F850 (-Release@CSnapAssistController@@WBI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCA@EAAKXZ @ 0x18020F870 (-Release@CSnapAssistController@@WCA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCI@EAAKXZ @ 0x18020F890 (-Release@CSnapAssistController@@WCI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WDA@EAAKXZ @ 0x18020F8B0 (-Release@CSnapAssistController@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CSnapAssistController::Release(CSnapAssistController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::Release(this);
}
