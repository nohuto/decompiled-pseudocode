/*
 * XREFs of ?Release@CSnapAssistController@@UEAAKXZ @ 0x1801414B0
 * Callers:
 *     ?Release@CSnapAssistController@@W7EAAKXZ @ 0x1802AB9A0 (-Release@CSnapAssistController@@W7EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBA@EAAKXZ @ 0x1802AB9C0 (-Release@CSnapAssistController@@WBA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBEI@EAAKXZ @ 0x1802AB9E0 (-Release@CSnapAssistController@@WBEI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBI@EAAKXZ @ 0x1802ABA00 (-Release@CSnapAssistController@@WBI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCA@EAAKXZ @ 0x1802ABA20 (-Release@CSnapAssistController@@WCA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCI@EAAKXZ @ 0x1802ABA40 (-Release@CSnapAssistController@@WCI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WDA@EAAKXZ @ 0x1802ABA60 (-Release@CSnapAssistController@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CSnapAssistController::Release(CSnapAssistController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::Release(this);
}
