/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x1800820E0
 * Callers:
 *     ?Append@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007ED00 (-Append@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVApp.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18007EFBC (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?InsertAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x1800820C0 (-InsertAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVA.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002A618 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003B074 (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800424C8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUIAppInstallInfoRecord@ContentManagement@@@?$AutoValue@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIAppInstallInfoRecord@ContentManagement@@PEAJ@Z @ 0x180079CC4 (--$-0PEAUIAppInstallInfoRecord@ContentManagement@@@-$AutoValue@V-$GitStorageType@UIAppInstallInf.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1800832D0 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     ?ResizeStorage@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180083C24 (-ResizeStorage@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Interna.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  __int64 v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  unsigned int v10; // r9d
  int v11; // edx
  unsigned int v12; // eax
  _BYTE v14[4]; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+34h] [rbp-1Ch] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-18h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  v18 = a3;
  v15 = 0;
  XWinRT::AutoValue<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::AutoValue<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>(
    (__int64)&v17,
    &v18,
    &v15);
  v7 = v15;
  if ( v15 < 0 )
  {
    v8 = v17;
    goto LABEL_28;
  }
  XWinRT::SerializingLockPolicy::Write(&v16, (_DWORD *)(a1 + 104), &v15);
  v7 = v15;
  if ( v15 >= 0 )
  {
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 72);
    if ( a2 <= *(_DWORD *)(a1 + 72) )
    {
      if ( *(_DWORD *)(a1 + 72) >= 0x7FFFFFFFu )
        v7 = -2147024882;
      if ( v7 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v14);
        v7 = 0;
        v10 = *(_DWORD *)(a1 + 76);
        if ( *(_DWORD *)(a1 + 72) + 1 <= v10 )
          goto LABEL_18;
        v11 = 1;
        if ( v10 + 1 <= (v10 >> 1) + v10 )
          v11 = v10 >> 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::ResizeStorage(
               a1,
               v10 + v11);
        if ( v7 >= 0 )
        {
LABEL_18:
          v12 = *(_DWORD *)(a1 + 72);
          if ( a2 < v12
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
                 16LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * a2),
                 16LL * (v12 - a2)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = v17;
            v8 = 0LL;
            BYTE8(v17) = 0;
            ++*(_DWORD *)(a1 + 72);
            ++*(_DWORD *)(a1 + 120);
            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * a2), 8)) )
              ++*(_DWORD *)(a1 + 80);
            goto LABEL_8;
          }
        }
      }
    }
    else
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  v8 = v17;
LABEL_8:
  if ( v16 )
  {
    v9 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
LABEL_28:
  if ( BYTE8(v17) )
  {
    XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
