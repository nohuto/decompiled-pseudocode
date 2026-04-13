/*
 * XREFs of ?SetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18008FC00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180084D28 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x180084ED4 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r14
  __int128 v9; // xmm6
  __int128 v11; // [rsp+38h] [rbp-48h] BYREF
  __int128 Destination; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h] BYREF
  char v14; // [rsp+C8h] [rbp+48h] BYREF

  v3 = a2;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = 0;
  *(_QWORD *)&v11 = 0LL;
  BYTE8(v11) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>((__int64)&v11, a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v11 = 0LL;
    BYTE8(v11) = 0;
    goto LABEL_20;
  }
  v8 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
    v5 = 0;
    *(_QWORD *)&Destination = 0LL;
    BYTE8(Destination) = 0;
    if ( !memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 88)), 0x10uLL) )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v3) = v11;
      *(_QWORD *)&v11 = 0LL;
      BYTE8(v11) = 0;
      ++*(_DWORD *)(a1 + 120);
      v9 = Destination;
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v13);
      v13 = v9;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v3), 8)) )
        ++*(_DWORD *)(a1 + 80);
      if ( BYTE8(Destination) )
        --*(_DWORD *)(a1 + 80);
      goto LABEL_16;
    }
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL, v6, v7);
LABEL_16:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
LABEL_20:
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v11);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v13);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v5;
}
