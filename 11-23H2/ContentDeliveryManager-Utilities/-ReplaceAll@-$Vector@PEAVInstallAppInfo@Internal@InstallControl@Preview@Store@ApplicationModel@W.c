/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x1800838C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002A618 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003B074 (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180042478 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$Construct@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAU2345678@@Z @ 0x18007AA98 (--$Construct@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@I.c)
 *     ??$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007AB08 (--$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Int.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  int v3; // ebx
  unsigned int v5; // r14d
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  __int64 *v13; // r14
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  v16 = 0;
  if ( !a2 )
  {
    v9 = 0LL;
    v8 = 0LL;
LABEL_9:
    if ( v3 >= 0 )
    {
      XWinRT::SerializingLockPolicy::Write(&v15, (_DWORD *)(a1 + 72), &v16);
      v3 = v16;
      if ( v16 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
        v10 = *(_DWORD *)(a1 + 40);
        v3 = 0;
        *(_DWORD *)(a1 + 40) = v9;
        v9 = v10;
        *(_DWORD *)(a1 + 44) = v5;
        *(_DWORD *)(a1 + 48) = 0;
        v11 = *(__int64 **)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v8;
        v8 = v11;
        ++*(_DWORD *)(a1 + 88);
      }
      if ( v15 )
      {
        v12 = v15 + 1;
        if ( LODWORD(v15->Ptr) == 1 )
          LODWORD(v12->Ptr) += 0x10000000;
        else
          ReleaseSRWLockExclusive(v12);
        v15 = 0LL;
      }
    }
    goto LABEL_17;
  }
  v8 = (__int64 *)malloc(8LL * a2);
  if ( !v8 )
  {
    v3 = -2147024882;
    v9 = 0LL;
    v16 = -2147024882;
    goto LABEL_9;
  }
  v5 = a2;
  v9 = 0LL;
  while ( 1 )
  {
    v16 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
            &v8[v9],
            *a3);
    v3 = v16;
    if ( v16 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    ++a3;
    if ( (unsigned int)v9 >= v5 )
      goto LABEL_9;
  }
LABEL_17:
  if ( v8 )
  {
    if ( (_DWORD)v9 )
    {
      v13 = v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(v13++);
        --v9;
      }
      while ( v9 );
    }
    free(v8);
  }
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v3;
}
