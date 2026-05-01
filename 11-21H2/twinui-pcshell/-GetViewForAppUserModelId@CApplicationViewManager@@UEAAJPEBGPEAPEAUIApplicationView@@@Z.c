/*
 * XREFs of ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x18002E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetViewForAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IApplicationView **a3)
{
  struct IApplicationView *v5; // r14
  void *v6; // r15
  const WCHAR *v7; // rbx
  __int64 v8; // rsi
  int (__fastcall *v9)(__int64, LPCWCH *); // rdi
  LPCWCH lpString2; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  struct IApplicationView *v14; // [rsp+90h] [rbp+40h] BYREF
  LPCWCH lpString1; // [rsp+98h] [rbp+48h]
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp+50h]

  lpString1 = a2;
  SRWLock = this + 66;
  AcquireSRWLockShared(this + 66);
  *a3 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v6 = 0LL;
  v7 = lpString1;
  while ( !v5 && v6 < this[68].Ptr )
  {
    lpString2 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v8 = *((_QWORD *)this[67].Ptr + (_QWORD)v6);
    v9 = *(int (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v8 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString2);
    v12 = -1LL;
    v13 = -1LL;
    if ( v9(v8, &lpString2) >= 0 && CompareStringOrdinal(v7, -1, lpString2, -1, 1) == 2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v14, (char *)this[67].Ptr + 8 * (_QWORD)v6);
      v5 = v14;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString2);
    v6 = (char *)v6 + 1;
  }
  v14 = 0LL;
  *a3 = v5;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5 == 0LL ? 0x8002802B : 0;
}
