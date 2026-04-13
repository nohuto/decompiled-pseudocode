/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@_N@Z @ 0x18008D108
 * Callers:
 *     ?Append@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180087960 (-Append@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windo.c)
 *     ?InsertAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x18008CEF0 (-InsertAt@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Win.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180044290 (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Servi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bp
  __int64 v5; // rbx
  _DWORD *v8; // r15
  unsigned int v9; // r14d
  unsigned int v10; // eax
  int v11; // ebp
  unsigned int v12; // r9d
  int v13; // edx
  unsigned int v14; // eax
  char v16; // [rsp+70h] [rbp+18h] BYREF

  v4 = a4;
  v5 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v8 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  v10 = v9;
  if ( !v4 )
  {
    v9 = a2;
    if ( a2 > v10 )
    {
      v11 = -2147483637;
LABEL_10:
      RoOriginateError((unsigned int)v11, 0LL, a3, a4);
      goto LABEL_21;
    }
  }
  if ( v10 < 0x7FFFFFFF )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
    v11 = 0;
    v12 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 40) + 1 <= v12 )
      goto LABEL_17;
    v13 = 1;
    if ( v12 + 1 <= (v12 >> 1) + v12 )
      v13 = v12 >> 1;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResizeStorage(
            a1,
            v12 + v13);
    if ( v11 >= 0 )
    {
LABEL_17:
      v14 = *(_DWORD *)(a1 + 40);
      if ( v9 < v14
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (v9 + 1)),
             8LL * (*(_DWORD *)(a1 + 44) - v9 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * v9),
             8LL * (v14 - v9)) )
      {
        v11 = -2147418113;
        goto LABEL_10;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v9) = v5;
      v5 = 0LL;
      ++*(_DWORD *)(a1 + 40);
      ++*(_DWORD *)(a1 + 88);
    }
  }
  else
  {
    v11 = -2147024882;
  }
LABEL_21:
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( v11 >= 0 )
    v11 = Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v11;
}
