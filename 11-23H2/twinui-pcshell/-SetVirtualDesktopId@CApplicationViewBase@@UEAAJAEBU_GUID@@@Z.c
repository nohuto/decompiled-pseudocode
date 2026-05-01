/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x1800DFFD0
 * Callers:
 *     <none>
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x1800E00C4 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // r14
  char *v5; // rax
  int (__fastcall *v6)(RTL_SRWLOCK *, __int64 *); // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *(struct _GUID *)&this[14].Ptr = *a2;
  v5 = (char *)this[14].Ptr - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = (char *)this[15].Ptr - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v6 = (int (__fastcall *)(RTL_SRWLOCK *, __int64 *))*((_QWORD *)this[2].Ptr + 4);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v9);
    v10 = -1LL;
    v11 = -1LL;
    if ( v6(this + 2, &v9) >= 0 )
    {
      v8[0] = &v9;
      v8[1] = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___(v8);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v9);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
