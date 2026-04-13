/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$10 @ 0x1800F63CE
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044374 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch_10(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[40] = wil::ResultFromCaughtException(a1, a2, a3);
  return 0LL;
}
