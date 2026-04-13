/*
 * XREFs of ?IndexOf@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180088E50
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800229D0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18003B0B0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180048920 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@V231@@Z @ 0x18007AA38 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180083280 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180089098 (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Target_ea_180089098.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  char *v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  unsigned int v14; // ebp
  size_t v15; // rax
  char *v16; // rax
  unsigned int i; // ebp
  __int64 v18; // rcx
  char *v19; // rbx
  __int64 v20; // rbp
  volatile signed __int32 *v21; // rcx
  __m128i v23[4]; // [rsp+30h] [rbp-48h] BYREF
  char *v24; // [rsp+80h] [rbp+8h] BYREF
  RTL_SRWLOCK *v25; // [rsp+90h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(&v25, (RTL_SRWLOCK *)(a1 + 104), &v24);
  v12 = -1LL;
  v13 = (int)v24;
  if ( (int)v24 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 80) )
    {
      v14 = *(_DWORD *)(a1 + 72);
      v15 = 16LL * v14;
      if ( !is_mul_ok(v14, 0x10uLL) )
        v15 = -1LL;
      v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v16;
      v24 = v16;
      if ( v16 )
        `vector constructor iterator'(
          v16,
          v10,
          v14,
          (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>);
      else
        v8 = 0LL;
      if ( v8 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
        {
          v18 = 16LL * i;
          v23[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + v18);
          v13 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(
                  (__int64)&v8[v18],
                  v23);
          if ( v13 < 0 )
            break;
          ++v9;
        }
      }
      else
      {
        v13 = -2147024882;
      }
    }
    else
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::IndexOfInternal(
              (_DWORD)v11,
              *(_QWORD *)(a1 + 88),
              *(_DWORD *)(a1 + 72),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
    v12 = -1LL;
  }
  if ( v25 )
  {
    v11 = v25 + 1;
    if ( LODWORD(v25->Ptr) == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v9 )
  {
    if ( v13 >= 0 )
      v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::IndexOfInternal(
              (_DWORD)v11,
              (_DWORD)v8,
              v9,
              a2,
              (__int64)a3,
              (__int64)a4);
    v19 = v8;
    v20 = v9;
    do
    {
      v21 = *(volatile signed __int32 **)v19;
      if ( v19[8] )
      {
        XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v21);
      }
      else if ( v21 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, v10, v12);
      }
      v19[8] = 0;
      *(_QWORD *)v19 = 0LL;
      v19 += 16;
      --v20;
    }
    while ( v20 );
  }
  operator delete[](v8);
  return (unsigned int)v13;
}
