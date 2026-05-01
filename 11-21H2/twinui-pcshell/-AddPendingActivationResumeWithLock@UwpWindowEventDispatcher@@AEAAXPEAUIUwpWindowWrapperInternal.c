/*
 * XREFs of ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EB32C
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x1803F457C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query_to@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA_NPEAPEAUIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803DE068 (--$try_query_to@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_362f4c4eb4ca595a2ded14b60ff82544___ @ 0x1803E96DC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_362f4c4eb4ca595a2ded14b60ff82544___.c)
 *     ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x1803E9C6C (--$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@-$vector@UPending.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_1448efa524df9375437edfb695407616___ @ 0x1803E9EE4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_UwpWindowEventDispatche.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EA194 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 *     ??0?$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEventDispatcher@@@Z @ 0x1803EA1D0 (--0-$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEve.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE468 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803F0BB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1803F0BB0.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x1803F86BC (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPendingActi.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall UwpWindowEventDispatcher::AddPendingActivationResumeWithLock(
        UwpWindowEventDispatcher *this,
        struct IUwpWindowWrapperInternal *a2)
{
  char v4; // r14
  unsigned int v5; // r12d
  int (__fastcall *v6)(struct IUwpWindowWrapperInternal *, __int64 *); // rbx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64 *); // rdi
  __int64 v9; // rcx
  __int64 Uwlm; // rax
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _QWORD, struct IUnknown **); // rbx
  char v13; // bl
  struct IUnknown **v14; // rbx
  struct IUnknown ***v15; // rax
  signed __int32 v16; // r14d
  struct IUnknown *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct IUnknown **v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  signed __int32 v31; // [rsp+50h] [rbp-30h]
  struct IUnknown *v32; // [rsp+58h] [rbp-28h] BYREF
  __int64 v33[2]; // [rsp+60h] [rbp-20h] BYREF
  signed __int32 v34; // [rsp+70h] [rbp-10h]
  struct IUnknown **v35; // [rsp+C8h] [rbp+48h] BYREF
  struct IUnknown *v36; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+58h] BYREF

  v4 = 0;
  LODWORD(v35) = 0;
  v5 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
  v28 = 0LL;
  v37 = 0LL;
  v27 = 0LL;
  v36 = 0LL;
  if ( !v5 )
    goto LABEL_12;
  v6 = *(int (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64 *))(*(_QWORD *)a2 + 248LL);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v28);
  if ( v6(a2, &v28) < 0 )
    goto LABEL_12;
  v7 = v28;
  if ( !v28 )
    goto LABEL_12;
  v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL);
  v9 = v37;
  v37 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8(v7, &v37) >= 0
    && (v27 = 0LL,
        wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
          &v37,
          (__int64)&v27))
    && (Uwlm = UwpWindowEventDispatcher::GetUwlm(this, &v29),
        v4 = 1,
        LODWORD(v35) = 1,
        v11 = *(_QWORD *)Uwlm,
        v12 = *(int (__fastcall **)(__int64, _QWORD, struct IUnknown **))(**(_QWORD **)Uwlm + 112LL),
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v36),
        v12(v11, v5, &v36) >= 0)
    && v36
    && ((int (__fastcall *)(struct IUnknown *, __int64))v36->lpVtbl[5].AddRef)(v36, 2LL) >= 0 )
  {
    v13 = 1;
  }
  else
  {
LABEL_12:
    v13 = 0;
  }
  if ( (v4 & 1) != 0 )
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v29);
  if ( v13 )
  {
    v14 = (struct IUnknown **)*((_QWORD *)this + 64);
    v15 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_1448efa524df9375437edfb695407616___(
            &v35,
            *((struct IUnknown ***)this + 63),
            v14,
            &v36);
    std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase((char *)this + 504, &v29, *v15, v14);
    wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
      &v35,
      (__int64)this);
    v16 = _InterlockedExchangeAdd(&UwpWindowEventDispatcher::s_nextResumeToken, 1u);
    v17 = v36;
    v36 = 0LL;
    v32 = v17;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
      v33,
      (__int64)a2);
    v18 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 296LL))(a2);
    v33[1] = v18;
    v34 = v16;
    v19 = *((_QWORD *)this + 64);
    if ( v19 == *((_QWORD *)this + 65) )
    {
      std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        (__int64 *)this + 63,
        v19,
        (__int64 *)&v32);
    }
    else
    {
      v20 = (__int64)v32;
      v32 = 0LL;
      *(_QWORD *)v19 = v20;
      v21 = v33[0];
      v33[0] = 0LL;
      *(_QWORD *)(v19 + 8) = v21;
      *(_QWORD *)(v19 + 16) = v18;
      *(_DWORD *)(v19 + 24) = v16;
      *((_QWORD *)this + 64) += 32LL;
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v33);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v32);
    v22 = v35;
    wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
      &v30,
      (__int64)v35);
    v31 = v16;
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_362f4c4eb4ca595a2ded14b60ff82544___(
      v24,
      v23,
      *((_DWORD *)this + 125),
      v25,
      v26,
      &v30);
    if ( v30 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::Release(v30);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::Release(v22);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v36);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v37);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v28);
}
