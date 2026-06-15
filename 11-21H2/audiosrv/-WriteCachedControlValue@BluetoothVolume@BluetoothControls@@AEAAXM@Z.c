/*
 * XREFs of ?WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z @ 0x1800C7D08
 * Callers:
 *     ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x1800C6FE0 (-GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7980 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

void __fastcall BluetoothControls::BluetoothVolume::WriteCachedControlValue(RTL_SRWLOCK *this, float a2)
{
  RTL_SRWLOCK *v2; // rbx
  void *v4; // [rsp+40h] [rbp+8h]
  RTL_SRWLOCK *v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  *(float *)&v4 = a2;
  BYTE4(v4) = 1;
  this[22].Ptr = v4;
  v5 = v2;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
