/*
 * XREFs of ?get_ShowOptions@ViewEventArgsForShowAsStandalone@@UEAAJPEAW4AppWindowShowOptionsInternal@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801C1800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::get_ShowOptions(
        ViewEventArgsForShowAsStandalone *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppWindowShowOptionsInternal *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
