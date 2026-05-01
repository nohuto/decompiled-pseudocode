/*
 * XREFs of std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_scalar_deleting_destructor_ @ 0x18069F330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = off_1807C9FC0;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
