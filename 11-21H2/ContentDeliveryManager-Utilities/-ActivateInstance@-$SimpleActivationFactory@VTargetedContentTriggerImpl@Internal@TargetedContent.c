/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18004D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18004C6DC (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180050880.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x180091EB8 (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v3; // rax
  unsigned int v4; // ebx
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v5; // rax
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  void *v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                     0xD0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v3);
    v6 = v5;
    v7 = *((_QWORD *)v5 + 24);
    if ( v7 )
    {
      *((_QWORD *)v5 + 24) = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v7);
    }
    *((_QWORD *)v6 + 24) = 0LL;
    v8 = 0;
    v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9
      && (v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>(v9)) != 0 )
    {
      *((_QWORD *)v6 + 24) = v10;
    }
    else
    {
      v8 = -2147024882;
    }
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        22LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v8,
        v12);
    v4 = (**(__int64 (__fastcall ***)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
    (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
