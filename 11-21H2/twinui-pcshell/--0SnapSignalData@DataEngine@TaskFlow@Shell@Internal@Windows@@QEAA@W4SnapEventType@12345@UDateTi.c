/*
 * XREFs of ??0SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1803C9CD8
 * Callers:
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1803C9E48 (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::SnapSignalData(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  *(_DWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  return a1;
}
