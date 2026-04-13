/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18008F1A0
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18008F150 (-RemoveAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?RemoveAtEnd@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18008F170 (-RemoveAtEnd@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x180084ED4 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?ResizeStorage@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18008FAC4 (-ResizeStorage@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Interna.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  _DWORD *v7; // rbx
  RTL_SRWLOCK *v8; // r14
  unsigned int v9; // eax
  int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int128 v13; // xmm6
  int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  char v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h]

  v4 = a3;
  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v7 = (_DWORD *)(a1 + 104);
  v20 = a1 + 104;
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v8->Ptr) )
      LODWORD(v8->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v9 = *(_DWORD *)(a1 + 72);
  if ( v4 )
    a2 = v9 - 1;
  if ( a2 >= v9 )
  {
    v10 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v10, 0LL, a3, a4);
    goto LABEL_19;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
  v10 = 0;
  v11 = 16LL * a2;
  v12 = *(_QWORD *)(a1 + 88);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v12 + v11), 8)) )
    --*(_DWORD *)(a1 + 80);
  v13 = *(_OWORD *)(v12 + 16LL * a2);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v18);
  v18 = v13;
  v14 = *(_DWORD *)(a1 + 72);
  if ( a2 < v14 - 1
    && memmove_s(
         (void *const)(v11 + *(_QWORD *)(a1 + 88)),
         16LL * (v14 - a2 - 1),
         (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
         16LL * (v14 - a2 - 1)) )
  {
    v10 = -2147418113;
    goto LABEL_14;
  }
  ++*(_DWORD *)(a1 + 120);
  --*(_DWORD *)(a1 + 72);
  v15 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 72) < v15 / 3 )
  {
    v16 = 1;
    if ( v15 - 1 >= v15 - v15 / 3 )
      v16 = v15 / 3;
    v10 = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::ResizeStorage(
            a1,
            v15 - v16);
  }
LABEL_19:
  if ( v7 )
  {
    if ( *v7 == 1 )
      LODWORD(v8->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v8);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v18);
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v10;
}
