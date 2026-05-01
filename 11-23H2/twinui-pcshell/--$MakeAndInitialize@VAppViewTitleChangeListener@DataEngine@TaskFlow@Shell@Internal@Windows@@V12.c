/*
 * XREFs of ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1804A551C
 * Callers:
 *     ?Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1804A5830 (-Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1802D6F66 (--4-$com_ptr_t@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_poli.c)
 *     ??0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1804A55D4 (--0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        __int64 **a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v5; // rax
  __int64 *v6; // rbx

  v4 = 0;
  *a1 = 0LL;
  v5 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)operator new(
                                                                                       0x98uLL,
                                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AppViewTitleChangeListener(v5);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter,wil::err_exception_policy>::operator=(
      v6 + 10,
      *a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
