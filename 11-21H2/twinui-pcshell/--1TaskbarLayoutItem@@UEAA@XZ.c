/*
 * XREFs of ??1TaskbarLayoutItem@@UEAA@XZ @ 0x18031D21C
 * Callers:
 *     ??_GTaskbarLayoutItem@@UEAAPEAXI@Z @ 0x18031D260 (--_GTaskbarLayoutItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall TaskbarLayoutItem::~TaskbarLayoutItem(TaskbarLayoutItem *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 88);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 64);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
