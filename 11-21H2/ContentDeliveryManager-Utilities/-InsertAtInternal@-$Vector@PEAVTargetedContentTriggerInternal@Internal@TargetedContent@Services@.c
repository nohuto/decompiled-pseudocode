/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x18009EBF0
 * Callers:
 *     ?Append@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18009BF50 (-Append@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U.c)
 *     ?InsertAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18009EBE0 (-InsertAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE730 (std--_Func_impl_std--_Callable_obj__lambda_53641cc0248bed3c554431816cb37efe__0__std_ea_1800AE730.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x180084ED4 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?ResizeStorage@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18008FAC4 (-ResizeStorage@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Interna.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180098180 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r14
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // eax
  char v17[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v7 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
         (__int64)&v18,
         a3);
  if ( v7 < 0 )
  {
    *(_QWORD *)&v18 = 0LL;
    BYTE8(v18) = 0;
    goto LABEL_28;
  }
  v10 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v10 )
      *v10 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v11 = *(_DWORD *)(a1 + 72);
  v12 = v11;
  if ( a4 || (v11 = a2, a2 <= v12) )
  {
    if ( v12 >= 0x7FFFFFFF )
    {
      v7 = -2147024882;
      goto LABEL_22;
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v17);
    v7 = 0;
    v13 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 72) + 1 > v13 )
    {
      v14 = 1;
      if ( v13 + 1 <= (v13 >> 1) + v13 )
        v14 = v13 >> 1;
      v7 = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::ResizeStorage(
             a1,
             v13 + v14);
      if ( v7 < 0 )
        goto LABEL_22;
    }
    v15 = *(_DWORD *)(a1 + 72);
    if ( v11 >= v15
      || !memmove_s(
            (void *const)(*(_QWORD *)(a1 + 88) + 16LL * (v11 + 1)),
            16LL * (*(_DWORD *)(a1 + 76) - v11 - 1),
            (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * v11),
            16LL * (v15 - v11)) )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v11) = v18;
      *(_QWORD *)&v18 = 0LL;
      BYTE8(v18) = 0;
      ++*(_DWORD *)(a1 + 72);
      ++*(_DWORD *)(a1 + 120);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v11), 8)) )
        ++*(_DWORD *)(a1 + 80);
      goto LABEL_22;
    }
    v7 = -2147418113;
  }
  else
  {
    v7 = -2147483637;
  }
  RoOriginateError((unsigned int)v7, 0LL, v8, v9);
LABEL_22:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v10 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
LABEL_28:
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v18);
  return (unsigned int)v7;
}
