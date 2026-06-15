/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x140067D7D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CPipeInstance *__fastcall CSubmixImpl::CreateStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>((CPipeInstance **)(a2 + 104));
}
