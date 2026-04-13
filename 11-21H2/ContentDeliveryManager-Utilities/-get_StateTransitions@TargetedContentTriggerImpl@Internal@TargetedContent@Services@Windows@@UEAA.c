/*
 * XREFs of ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x180097070
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_Size@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180090F50 (-get_Size@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180092A50 (-GetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@_ea_180092A50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_StateTransitions(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  HRESULT ApartmentType; // eax
  int v9; // ecx
  int Size; // eax
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // r14d
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  __int64 pAptType; // [rsp+68h] [rbp+48h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+50h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[4] = 1LL;
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable';
    v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable';
    v7[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>'};
    v7[5] = 0LL;
    *((_DWORD *)v7 + 12) = 0;
    v7[7] = 0LL;
    ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
    v9 = pAptType;
    if ( ApartmentType < 0 )
      v9 = 1;
    LODWORD(pAptType) = v9;
    if ( v9 == 3 || !v9 )
    {
      *((_DWORD *)v7 + 18) = 1;
      *((_DWORD *)v7 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v7 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v7 + 10);
    }
    *((_DWORD *)v7 + 22) = 0;
    *((_DWORD *)v7 + 24) = 0;
    v4 = v7;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( (v5 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)v5);
    if ( v4 )
LABEL_14:
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    return v5;
  }
  Size = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::get_Size(
           *(_QWORD *)(a1 + 192),
           &pAptType);
  v13 = Size;
  if ( Size >= 0 )
  {
    v14 = 0;
    v15 = pAptType;
    if ( (_DWORD)pAptType )
    {
      while ( 1 )
      {
        pAptType = 0LL;
        v16 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetAt(
                *(_QWORD *)(a1 + 192),
                v14,
                &pAptType,
                v12);
        v5 = v16;
        if ( v16 < 0 )
          break;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 104LL))(v4, pAptType);
        v5 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x10C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
            (const char *)(unsigned int)v17);
          v19 = pAptType;
          if ( pAptType )
          {
            pAptType = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          goto LABEL_14;
        }
        v18 = pAptType;
        if ( pAptType )
        {
          pAptType = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( ++v14 >= v15 )
          goto LABEL_26;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v16);
      v20 = pAptType;
      if ( pAptType )
      {
        pAptType = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v4 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      return v5;
    }
LABEL_26:
    *a2 = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)Size);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    return v13;
  }
}
