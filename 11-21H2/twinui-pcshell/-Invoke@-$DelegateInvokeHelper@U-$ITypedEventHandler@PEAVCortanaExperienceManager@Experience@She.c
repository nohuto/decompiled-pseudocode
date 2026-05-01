/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@V_lambda_a6b59bc3aa7c8484d39bafb26dd10abc_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@PEAUICortanaShownEventArgs@Experience@Shell@24@@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@789Windows@@@Z @ 0x180034120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaExperienceManager *>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>::*)(Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,_lambda_a6b59bc3aa7c8484d39bafb26dd10abc_,-1,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
