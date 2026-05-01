/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x18009EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x180190E44 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??9@YA_NAEBU_GUID@@0@Z @ 0x180314C5C (--9@YA_NAEBU_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int (__fastcall *v5)(RTL_SRWLOCK *, __int64 *); // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+10h] BYREF

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  v11 = v4;
  *(struct _GUID *)&this[14].Ptr = *a2;
  if ( (unsigned __int8)operator!=(&this[14], &GUID_NULL) )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v5 = (int (__fastcall *)(RTL_SRWLOCK *, __int64 *))*((_QWORD *)this[2].Ptr + 4);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v8);
    v9 = -1LL;
    v10 = -1LL;
    if ( v5(this + 2, &v8) >= 0 )
    {
      v7[0] = &v8;
      v7[1] = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___(v7);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v8);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v11);
  return 0LL;
}
