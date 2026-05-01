/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_ @ 0x18069DB80
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x180251498 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *a3;
  a1[2] = a3[1];
  result = a1;
  *a3 = 0LL;
  a3[1] = 0LL;
  a1[3] = a4;
  return result;
}
