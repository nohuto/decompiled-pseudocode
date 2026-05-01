/*
 * XREFs of ??1JointResizeAcc@@UEAA@XZ @ 0x18017E9FC
 * Callers:
 *     ??_GJointResizeAcc@@UEAAPEAXI@Z @ 0x18017E9C0 (--_GJointResizeAcc@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall JointResizeAcc::~JointResizeAcc(VARIANTARG *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&this[4]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&this[3]);
  VariantClear(this + 2);
  this[1].decVal.Hi32 = -1073741823;
}
