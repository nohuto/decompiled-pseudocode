/*
 * XREFs of ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F53C
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801A0870 (-AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009B91C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??0?$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEventDispatcher@@@Z @ 0x18009F958 (--0-$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEve.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x18016B094 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x18017EA40 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPendingActi.c)
 *     ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x18017ECB0 (--$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@-$vector@UPending.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_857bb2a2e4c38396973e50bba847e920___ @ 0x1801924DC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_857bb2a2e4c38396973e50bba847e920___.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_f48cc153ad6d2c1ec159261e04c305aa___ @ 0x1801AC1C0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_UwpWindowEventDispatche.c)
 *     ??$try_query_to@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA_NPEAPEAUIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801B1DB0 (--$try_query_to@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall UwpWindowEventDispatcher::AddPendingActivationResumeWithLock(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // si
  char v7; // bl
  int (__fastcall *v8)(__int64, __int64 *); // rbx
  int (__fastcall *v9)(__int64, __int64 *); // r12
  __int64 v10; // rcx
  _QWORD *Uwlm; // rax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, _QWORD, __int64 *); // r12
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  signed __int32 v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // edx
  int v23; // ecx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+30h] [rbp-29h] BYREF
  __int64 v28; // [rsp+38h] [rbp-21h] BYREF
  __int64 v29; // [rsp+40h] [rbp-19h] BYREF
  __int64 v30; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v31[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v32; // [rsp+58h] [rbp-1h] BYREF
  signed __int32 v33; // [rsp+60h] [rbp+7h]
  __int64 v34; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v35[2]; // [rsp+70h] [rbp+17h] BYREF
  signed __int32 v36; // [rsp+80h] [rbp+27h]
  __int64 v37; // [rsp+D8h] [rbp+7Fh] BYREF

  v6 = 0;
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v37 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 248LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v29);
  if ( v8(a2, &v29) < 0 )
    goto LABEL_2;
  if ( !v29 )
    goto LABEL_2;
  v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 48LL);
  v27 = 0LL;
  if ( v9(v29, &v27) < 0 )
    goto LABEL_2;
  v10 = v28;
  v28 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( !(unsigned __int8)wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
                           &v27,
                           &v28) )
    goto LABEL_2;
  Uwlm = UwpWindowEventDispatcher::GetUwlm(a1, &v30);
  v6 = 1;
  v12 = *Uwlm;
  v13 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
  v14 = v37;
  v37 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13(v12, a3, &v37) >= 0
    && v37
    && (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 128LL))(v37, 2LL) >= 0 )
  {
    v7 = 1;
  }
  else
  {
LABEL_2:
    v7 = 0;
  }
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
  if ( v7 )
  {
    v15 = *(_QWORD *)(a1 + 528);
    v16 = (_QWORD *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_f48cc153ad6d2c1ec159261e04c305aa___(
                      &v30,
                      *(_QWORD *)(a1 + 520),
                      v15,
                      &v37);
    std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase(a1 + 520, v31, *v16, v15);
    wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
      &v30,
      a1);
    v17 = _InterlockedExchangeAdd(&UwpWindowEventDispatcher::s_nextResumeToken, 1u);
    v18 = v37;
    v37 = 0LL;
    v34 = v18;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
      v35,
      a2);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 296LL))(a2);
    v35[1] = v19;
    v36 = v17;
    v20 = *(_QWORD *)(a1 + 528);
    if ( v20 == *(_QWORD *)(a1 + 536) )
    {
      std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        a1 + 520,
        v20,
        &v34);
    }
    else
    {
      v25 = v34;
      v34 = 0LL;
      *(_QWORD *)v20 = v25;
      v26 = v35[0];
      v35[0] = 0LL;
      *(_QWORD *)(v20 + 8) = v26;
      *(_QWORD *)(v20 + 16) = v19;
      *(_DWORD *)(v20 + 24) = v17;
      *(_QWORD *)(a1 + 528) += 32LL;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v35);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
    v21 = v30;
    wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
      &v32,
      v30);
    v33 = v17;
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_857bb2a2e4c38396973e50bba847e920___(
      v23,
      v22,
      *(_DWORD *)(a1 + 516),
      v24);
    if ( v32 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::Release(v32);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::Release(v21);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
}
