/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncActionCompletedHandler@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2a41ea20f21462c29868894764bbafd5_@@$0?0PEAUIAsyncAction@Foundation@Windows@@W4AsyncStatus@67ABI@@@?$DelegateArgTraits@P8IAsyncActionCompletedHandler@Foundation@Windows@@EAAJPEAUIAsyncAction@23@W4AsyncStatus@23ABI@@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_2a41ea20f21462c29868894764bbafd5_@@@Z @ 0x180064CBC
 * Callers:
 *     ??$CreateAgileHelper@UIAsyncActionCompletedHandler@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@PEAPEAU345@@Z @ 0x180064B50 (--$CreateAgileHelper@UIAsyncActionCompletedHandler@Foundation@Windows@@@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002DED4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IAsyncActionCompletedHandler::*)(Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>,_lambda_2a41ea20f21462c29868894764bbafd5_,-1,Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>,_lambda_2a41ea20f21462c29868894764bbafd5_,-1,Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 60) = 1;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IAsyncActionCompletedHandler::*)(Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>,_lambda_2a41ea20f21462c29868894764bbafd5_,-1,Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
