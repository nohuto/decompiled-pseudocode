/*
 * XREFs of ?GetAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180089980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  RTL_SRWLOCK *v9; // rsi
  int v10; // ebp
  __int64 v11; // rcx

  v5 = a2;
  v7 = 0;
  *a3 = 0LL;
  v8 = (_DWORD *)(a1 + 72);
  v9 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v9->Ptr) >= 0 )
      ++LODWORD(v9->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 40) )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v5);
    *a3 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v10 = 0;
  }
  else
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL, a3, a4);
  }
  if ( v8 )
  {
    if ( *v8 == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v7;
}
