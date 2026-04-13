/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18004D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18004C7E8 (--0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v3; // rax
  unsigned int v4; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v5; // rbx

  *a2 = 0LL;
  v3 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *)operator new(
                                                                                                    0x58uLL,
                                                                                                    (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::TargetedContentTriggerStateTransitionImpl(v3);
    v4 = (**(__int64 (__fastcall ***)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *, GUID *, _QWORD *))v5)(
           v5,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
    (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
