/*
 * XREFs of _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$6 @ 0x1800DC7E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
