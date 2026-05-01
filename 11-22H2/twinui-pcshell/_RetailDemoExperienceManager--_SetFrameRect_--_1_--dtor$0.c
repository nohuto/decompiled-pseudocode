/*
 * XREFs of _RetailDemoExperienceManager::_SetFrameRect_::_1_::dtor$0 @ 0x1804593B7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RetailDemoExperienceManager::_SetFrameRect_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
