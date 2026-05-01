/*
 * XREFs of ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1805DDD20
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18005C358 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1805DD91C (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x1805DDA70 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 */

void __fastcall AppResizeAcc::SetDropEffect(AppResizeAcc *this, const unsigned __int16 *a2)
{
  if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
         (const WCHAR **)this + 10,
         a2,
         -1) != 2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (__int64)this + 80,
      a2,
      0xFFFFFFFFFFFFFFFFuLL);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)((char *)this - 16), 30139);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)((char *)this - 16), 30140);
    AppResizeAcc::ProcessPendingNotifications((IRawElementProviderSimple *)this - 2, 1);
  }
}
