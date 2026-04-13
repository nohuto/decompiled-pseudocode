/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180095410
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1800953C0 (-RemoveAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@W.c)
 *     ?RemoveAtEnd@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1800953E0 (-RemoveAtEnd@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Service.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180044290 (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Servi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bp
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  RTL_SRWLOCK *v9; // r14
  unsigned int v10; // eax
  int v11; // ebp
  __int64 v12; // r9
  __int64 *v13; // rcx
  int v14; // edx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  char v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v7 = 0LL;
  v8 = (_DWORD *)(a1 + 72);
  v9 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v9->Ptr) )
      LODWORD(v9->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v10 = *(_DWORD *)(a1 + 40);
  if ( v4 )
    a2 = v10 - 1;
  if ( a2 >= v10 )
  {
    v11 = -2147483637;
LABEL_12:
    RoOriginateError((unsigned int)v11, 0LL, a3, a4);
    goto LABEL_17;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
  v11 = 0;
  v12 = *(_QWORD *)(a1 + 56);
  v13 = (__int64 *)(v12 + 8LL * a2);
  v7 = *v13;
  v14 = *(_DWORD *)(a1 + 40);
  if ( a2 < v14 - 1
    && memmove_s(v13, 8LL * (v14 - a2 - 1), (const void *const)(v12 + 8LL * (a2 + 1)), 8LL * (v14 - a2 - 1)) )
  {
    v11 = -2147418113;
    goto LABEL_12;
  }
  ++*(_DWORD *)(a1 + 88);
  --*(_DWORD *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) < v15 / 3 )
  {
    v16 = 1;
    if ( v15 - 1 >= v15 - v15 / 3 )
      v16 = v15 / 3;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResizeStorage(
            a1,
            v15 - v16);
  }
LABEL_17:
  if ( v8 )
  {
    if ( *v8 == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v11;
}
