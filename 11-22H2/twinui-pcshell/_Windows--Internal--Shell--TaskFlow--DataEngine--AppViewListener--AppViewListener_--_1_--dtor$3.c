/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor$3 @ 0x1804A3162
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 112LL));
}
