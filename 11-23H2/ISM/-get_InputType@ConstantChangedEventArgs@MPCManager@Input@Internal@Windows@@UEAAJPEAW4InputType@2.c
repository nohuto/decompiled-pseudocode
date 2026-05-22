/*
 * XREFs of ?get_InputType@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4InputType@2345@@Z @ 0x18002E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::get_InputType(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        enum Windows::Internal::Input::MPCManager::InputType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
