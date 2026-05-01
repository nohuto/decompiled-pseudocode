/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVGipControllerWatcher@Gaming@Internal@Windows@@PEAVGipSystemButtonEventArgs@234@@Foundation@Windows@@V_lambda_baaf4cb12b19c908b42db85550aea0de_@@$0?0PEAUIGipControllerWatcher@Gaming@Internal@3@PEAUIGipSystemButtonEventArgs@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipControllerWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVGipSystemButtonEventArgs@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIGipControllerWatcher@Gaming@Internal@3@PEAUIGipSystemButtonEventArgs@563@@Z@Details@WRL@Microsoft@@UEAAJPEAUIGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@789@@Z @ 0x180333C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::IGipControllerWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipSystemButtonEventArgs *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>>::*)(Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>,_lambda_baaf4cb12b19c908b42db85550aea0de_,-1,Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
