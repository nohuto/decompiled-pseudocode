/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_644c307dd9b9cb2023e3dcd56f2b9d4c_@@$0?0PEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@PEAUICompositionBatchCompletedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@3@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18007EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionBatchCompletedEventArgs *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_644c307dd9b9cb2023e3dcd56f2b9d4c_,-1,IInspectable *,Windows::UI::Composition::ICompositionBatchCompletedEventArgs *>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[8];
  if ( v4 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 15) = -1073741823;
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
