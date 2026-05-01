/*
 * XREFs of ??0IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x180149364
 * Callers:
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP84@EAAJ24@_E@Z @ 0x18014905C (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::Internal::Shell::IInputHostLayoutChangesHandler *__fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::IInputHostLayoutChangesHandler(
        Windows::Internal::Shell::IInputHostLayoutChangesHandler *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInputHostLayoutChanges>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInputHostLayoutChanges>::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::IInputHostLayoutChangesHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::IInputHostLayoutChangesHandler::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::IInputHostLayoutChangesHandler::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::IInputHostLayoutChangesHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return this;
}
