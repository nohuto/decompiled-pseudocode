/*
 * XREFs of ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x18008B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_Size@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180084B50 (-get_Size@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x180087340 (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@.c)
 *     ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180087D90 (-GetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@_ea_180087D90.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_StateTransitions(
        __int64 a1,
        __int64 *a2)
{
  int v4; // ebx
  void *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int Size; // eax
  unsigned int i; // edi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+40h] BYREF
  void *v19; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v18 = 0LL;
  v4 = 0;
  v17 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>((__int64)v5);
    v17 = v6;
    v19 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v19);
  if ( v6 )
  {
    v17 = 0LL;
    v18 = v6;
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 261LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)v7);
    goto LABEL_20;
  }
  Size = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::get_Size(
           *(_QWORD *)(a1 + 192),
           &v17);
  v4 = Size;
  if ( Size < 0 )
  {
    v7 = (unsigned int)Size;
    v8 = 263LL;
    goto LABEL_10;
  }
  for ( i = 0; i < (unsigned int)v17; ++i )
  {
    v19 = 0LL;
    v11 = *(_QWORD *)(a1 + 192);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetAt(
            v11,
            i,
            (__int64 *)&v19);
    v4 = v12;
    if ( v12 < 0 )
    {
      v13 = 267LL;
      goto LABEL_18;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v18 + 104LL))(v18, v19);
    v4 = v12;
    if ( v12 < 0 )
    {
      v13 = 268LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
  v14 = v18;
  v18 = 0LL;
  *a2 = v14;
  v4 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return (unsigned int)v4;
}
