/*
 * XREFs of ?SetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x1800948F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002A618 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003B074 (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180042478 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180083280 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     ??$?0PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@?$AutoValue@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAJ@Z @ 0x18008BD40 (--$-0PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@-$AutoValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  volatile signed __int32 *v5; // r14
  int v6; // ebx
  __int64 v7; // r12
  volatile signed __int32 *v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int128 Destination; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+40h] BYREF
  int v16; // [rsp+B8h] [rbp+48h] BYREF

  v15 = a3;
  v3 = a2;
  v16 = 0;
  v5 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = 0;
  XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>(
    (__int64)&v12,
    &v15,
    &v16);
  v6 = v16;
  if ( v16 < 0 )
  {
    v8 = (volatile signed __int32 *)v12;
    goto LABEL_18;
  }
  XWinRT::SerializingLockPolicy::Write(&v11, (_DWORD *)(a1 + 104), &v16);
  v6 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
      v6 = 0;
      *(_QWORD *)&Destination = 0LL;
      BYTE8(Destination) = 0;
      v7 = 16 * v3;
      if ( !memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 88)), 0x10uLL) )
      {
        *(_OWORD *)(v7 + *(_QWORD *)(a1 + 88)) = v12;
        v8 = 0LL;
        BYTE8(v12) = 0;
        ++*(_DWORD *)(a1 + 120);
        v13 = Destination;
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v7 + *(_QWORD *)(a1 + 88)), 8)) )
          ++*(_DWORD *)(a1 + 80);
        v5 = (volatile signed __int32 *)v13;
        if ( BYTE8(Destination) )
          --*(_DWORD *)(a1 + 80);
        goto LABEL_9;
      }
      v6 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
    }
  }
  v8 = (volatile signed __int32 *)v12;
LABEL_9:
  if ( v11 )
  {
    v9 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
  }
LABEL_18:
  if ( BYTE8(v12) )
  {
    XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( BYTE8(v13) )
  {
    XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v5);
  }
  else if ( v5 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v6;
}
