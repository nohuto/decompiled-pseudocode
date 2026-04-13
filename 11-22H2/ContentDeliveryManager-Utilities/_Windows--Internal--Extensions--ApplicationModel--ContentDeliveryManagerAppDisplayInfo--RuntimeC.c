/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$1 @ 0x1800DC979
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18003EF84 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch_1(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[12] = wil::ResultFromCaughtException(a1, a2, a3);
  return 0LL;
}
