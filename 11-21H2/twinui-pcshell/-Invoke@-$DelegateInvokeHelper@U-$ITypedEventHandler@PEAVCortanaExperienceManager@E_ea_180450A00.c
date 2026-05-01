/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@V_lambda_740be508007a71c2bee4a7e4505d7bc5_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@URect@34@@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@URect@23@@Z@Details@WRL@Microsoft@@UEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@Windows@@@Z @ 0x180450A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaExperienceManager *>,Windows::Foundation::Rect>::*)(Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Foundation::Rect)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,_lambda_740be508007a71c2bee4a7e4505d7bc5_,-1,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Foundation::Rect>::Invoke(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // rcx
  signed int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 16) + *(int *)(a1 + 32);
  v8 = *a3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(a1 + 24))(v4, a2, &v8);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return v6;
}
