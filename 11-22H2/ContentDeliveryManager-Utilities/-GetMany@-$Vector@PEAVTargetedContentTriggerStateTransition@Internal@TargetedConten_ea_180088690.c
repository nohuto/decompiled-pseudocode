/*
 * XREFs of ?GetMany@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAI@Z @ 0x180088690
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800229D0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18003B0B0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180048970 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@V231@@Z @ 0x18007AA88 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1800832D0 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180085970 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAJPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x18008972C (-Localize@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerStateTransition@Internal@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned int v10; // r15d
  char *v11; // r13
  size_t v12; // rax
  char *v13; // rax
  __int64 v14; // rdx
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ebp
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  RTL_SRWLOCK *v22; // rcx
  unsigned int v23; // r12d
  char *v24; // rbx
  _QWORD *v25; // r14
  unsigned int v26; // ecx
  __int64 v27; // rbp
  __int64 *v28; // r14
  char *v29; // rbx
  __int64 v30; // rsi
  volatile signed __int32 *v31; // rcx
  int v33; // [rsp+20h] [rbp-68h] BYREF
  RTL_SRWLOCK *v34; // [rsp+28h] [rbp-60h] BYREF
  __m128i v35[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+8h]

  v6 = a3;
  v8 = a3;
  v9 = 0;
  v10 = 0;
  v36 = 0;
  v33 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v34, (RTL_SRWLOCK *)(a1 + 104), &v33);
  if ( !*(_DWORD *)(a1 + 80) )
    goto LABEL_11;
  v12 = 16 * v8;
  if ( !is_mul_ok(v8, 0x10uLL) )
    v12 = -1LL;
  v13 = (char *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v13;
  v35[0].m128i_i64[0] = (__int64)v13;
  if ( v13 )
    `vector constructor iterator'(
      v13,
      v14,
      v8,
      (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>);
  else
    v11 = 0LL;
  if ( v11 )
  {
LABEL_11:
    v15 = v33;
  }
  else
  {
    v15 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 72);
    v36 = v16;
    v17 = a2;
    if ( a2 > v16 )
    {
      v15 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v16 = v36;
      v17 = a2;
    }
    if ( v15 >= 0 && v6 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        do
        {
          v18 = v10 + v17;
          if ( v18 >= v16 )
            break;
          v35[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
          v15 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(
                  (__int64)&v11[16 * v10],
                  v35);
          if ( v15 < 0 )
            break;
          ++v10;
          v16 = v36;
          v17 = a2;
        }
        while ( v10 < v6 );
        goto LABEL_29;
      }
      v19 = v17;
      v20 = a4;
      while ( 1 )
      {
        if ( v19 >= v16 )
        {
LABEL_28:
          v6 = a3;
          goto LABEL_29;
        }
        v35[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v19);
        v15 = 0;
        v21 = v35[0].m128i_i64[0];
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v35[0], 8)) )
          break;
        *v20 = v35[0].m128i_i64[0];
        if ( !v21 )
          goto LABEL_26;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_27:
        ++v9;
        ++v19;
        ++v20;
        v16 = v36;
        if ( v9 >= a3 )
          goto LABEL_28;
      }
      v15 = XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>::ReferencedGitCookie::Localize(
              v35[0].m128i_i64[0],
              v20);
LABEL_26:
      if ( v15 < 0 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
LABEL_29:
  if ( v34 )
  {
    v22 = v34 + 1;
    if ( LODWORD(v34->Ptr) == 1 )
      --LODWORD(v22->Ptr);
    else
      ReleaseSRWLockShared(v22);
  }
  if ( v15 < 0 )
  {
LABEL_46:
    if ( v9 )
    {
      v27 = v9;
      v28 = (__int64 *)a4;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v28++);
        --v27;
      }
      while ( v27 );
    }
    if ( v9 < v10 )
    {
      v29 = &v11[16 * v9];
      v30 = v10 - v9;
      do
      {
        v31 = *(volatile signed __int32 **)v29;
        if ( v29[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v31);
        }
        else if ( v31 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
        v29[8] = 0;
        *(_QWORD *)v29 = 0LL;
        v29 += 16;
        --v30;
      }
      while ( v30 );
    }
  }
  else
  {
    if ( v10 )
    {
      v23 = 0;
      if ( v6 )
      {
        v24 = v11;
        v25 = a4;
        v26 = v36;
        do
        {
          if ( v23 + a2 >= v26 )
            break;
          *v25 = 0LL;
          if ( v24[8] )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>::ReferencedGitCookie::Localize(
                    *(_QWORD *)v24,
                    v25);
            if ( v15 < 0 )
              goto LABEL_46;
            XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(*(volatile signed __int32 **)v24);
            v24[8] = 0;
            *(_QWORD *)v24 = 0LL;
            v26 = v36;
          }
          else
          {
            *v25 = *(_QWORD *)v24;
            *(_QWORD *)v24 = 0LL;
            v15 = 0;
          }
          ++v9;
          ++v23;
          ++v25;
          v24 += 16;
        }
        while ( v23 < v6 );
      }
    }
    *a5 = v9;
  }
  operator delete[](v11);
  return (unsigned int)v15;
}
