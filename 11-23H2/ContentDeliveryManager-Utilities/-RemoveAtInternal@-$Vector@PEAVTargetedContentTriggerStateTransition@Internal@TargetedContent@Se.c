/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180089B90
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180089B40 (-RemoveAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@W.c)
 *     ?RemoveAtEnd@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180089B60 (-RemoveAtEnd@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Service.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002A618 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003B074 (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18003EE9C (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Servi.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180042478 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180085920 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  unsigned int *v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  _QWORD v12[7]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  XWinRT::SerializingLockPolicy::Write(v12, (_DWORD *)(a1 + 72), &v13);
  v6 = v13;
  if ( v13 >= 0 )
  {
    v7 = (unsigned int *)(a1 + 40);
    if ( a3 )
      a2 = *v7 - 1;
    if ( a2 >= *v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v13);
      v6 = 0;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v14);
      v14 = v8;
      if ( a2 < *v7 - 1
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
             8LL * (*v7 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
             8LL * (*v7 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 88);
        --*v7;
        v9 = *(_DWORD *)(a1 + 44);
        if ( *v7 < v9 / 3 )
        {
          v10 = 1;
          if ( v9 - 1 >= v9 - v9 / 3 )
            v10 = v9 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResizeStorage(
                 a1,
                 v9 - v10);
        }
      }
    }
  }
  if ( v12[0] )
  {
    if ( *(_DWORD *)v12[0] == 1 )
      *(_DWORD *)(v12[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v12[0] + 8LL));
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v14);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v6;
}
