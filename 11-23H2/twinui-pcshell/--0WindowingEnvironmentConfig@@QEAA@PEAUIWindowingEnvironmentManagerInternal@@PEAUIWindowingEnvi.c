/*
 * XREFs of ??0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@W4WindowingEnvironmentType@@@Z @ 0x18008F38C
 * Callers:
 *     ??$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@12@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x180091108 (--$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironme.c)
 * Callees:
 *     ??0?$com_ptr_t@UIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18009032C (--0-$com_ptr_t@UIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowingEnvironmentConfig::WindowingEnvironmentConfig(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_QWORD *)(a1 + 40) = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  *(_DWORD *)(a1 + 52) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::`vftable';
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::`vftable'{for `IWindowingEnvironmentConfig'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentConfigInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &WindowingEnvironmentConfig::`vftable';
  *(_QWORD *)(a1 + 32) = &WindowingEnvironmentConfig::`vftable'{for `IWindowingEnvironmentConfig'};
  *(_QWORD *)(a1 + 40) = &WindowingEnvironmentConfig::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentConfigInternal>'};
  *(_DWORD *)(a1 + 56) = 0;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel,wil::err_exception_policy>(
    a1 + 64,
    a3);
  *(_QWORD *)(a1 + 80) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v8 = operator new(0x40uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)(a1 + 104) = v8;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 72LL))(*(_QWORD *)(a1 + 64), a1 + 72);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v9,
      v11);
  return a1;
}
