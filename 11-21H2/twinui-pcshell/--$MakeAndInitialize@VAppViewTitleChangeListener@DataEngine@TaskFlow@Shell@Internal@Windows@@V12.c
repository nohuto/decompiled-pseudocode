/*
 * XREFs of ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x18010B6CC
 * Callers:
 *     ?Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1800AB010 (-Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18010B248 (--0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18017B728 (--4-$com_ptr_t@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_poli.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener **a1,
        _QWORD *a2)
{
  unsigned int v4; // edi
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v5; // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v6; // rbx

  v4 = 0;
  *a1 = 0LL;
  v5 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)operator new(
                                                                                       0x98uLL,
                                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AppViewTitleChangeListener(v5);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter,wil::err_exception_policy>::operator=(
      (char *)v6 + 80,
      *a2);
    if ( v6 )
      (*(void (__fastcall **)(Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
