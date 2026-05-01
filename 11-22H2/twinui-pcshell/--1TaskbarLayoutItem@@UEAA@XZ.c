/*
 * XREFs of ??1TaskbarLayoutItem@@UEAA@XZ @ 0x1803EB6DC
 * Callers:
 *     ??_GTaskbarLayoutItem@@UEAAPEAXI@Z @ 0x1803EB720 (--_GTaskbarLayoutItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall TaskbarLayoutItem::~TaskbarLayoutItem(TaskbarLayoutItem *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 96);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 72);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 48);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
}
