/*
 * XREFs of ?SetAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180083E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002A618 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003B074 (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180042478 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$AutoValue@PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@@XWinRT@@QEAA@AEBQEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAJ@Z @ 0x180079CB8 (--$-0PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@-$Auto.c)
 *     ??$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007AB08 (--$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Int.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r14
  int v5; // edi
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 Destination; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v3 = a2;
  LODWORD(Destination) = 0;
  v10 = 0LL;
  XWinRT::AutoValue<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AutoValue<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>(
    &v9,
    &v12,
    (int *)&Destination);
  v5 = Destination;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v11, (_DWORD *)(a1 + 72), &Destination);
    v5 = Destination;
    if ( (int)Destination >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
        v5 = 0;
        if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v3), 8uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3) = v9;
          v9 = 0LL;
          ++*(_DWORD *)(a1 + 88);
          v6 = Destination;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(&v10);
          v10 = v6;
        }
      }
    }
    if ( v11 )
    {
      v7 = v11 + 1;
      if ( LODWORD(v11->Ptr) == 1 )
        LODWORD(v7->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v7);
    }
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(&v9);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(&v10);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v5;
}
