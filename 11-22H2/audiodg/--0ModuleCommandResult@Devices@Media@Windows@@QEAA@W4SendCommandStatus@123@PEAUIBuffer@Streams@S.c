/*
 * XREFs of ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x14008001C
 * Callers:
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14007E738 (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14001C2FC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140081034 (--4-$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::ModuleCommandResult(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // rdi

  v6 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Media::Devices::ModuleCommandResult::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 64) = a2;
  wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_returncode_policy>::operator=(a1 + 72, a3);
  return a1;
}
