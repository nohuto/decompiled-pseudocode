/*
 * XREFs of _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$34 @ 0x1400386D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 3648);
}
