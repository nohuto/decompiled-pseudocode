/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18002F254
 * Callers:
 *     ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18002F020 (-ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const_&_ @ 0x1801BE3F0 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5d.c)
 *     CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE5FC (CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___--CMultitaskingViewTask.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const_&_ @ 0x180494644 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce977.c)
 *     MakeMultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358___ @ 0x1804946F0 (MakeMultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358___.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2_____lambda_3a2de4e4b80ecd8274c796c02122adf2__const_&_ @ 0x180494D44 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const_&_ @ 0x18049545C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317.c)
 *     CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___::CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___ @ 0x18049972C (CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___--CMultitaskingViewTask.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_QWORD *)(a1 + 32) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
