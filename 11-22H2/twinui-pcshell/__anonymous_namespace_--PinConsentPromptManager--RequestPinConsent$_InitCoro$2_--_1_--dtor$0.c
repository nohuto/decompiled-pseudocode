/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2_::_1_::dtor$0 @ 0x18025155E
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 48) = 145LL;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 32) - 112LL;
    operator delete(*(void **)(a2 + 56));
  }
}
