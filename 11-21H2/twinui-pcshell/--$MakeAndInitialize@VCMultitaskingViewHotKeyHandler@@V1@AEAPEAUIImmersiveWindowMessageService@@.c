/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1800FD740
 * Callers:
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FD668 (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 * Callees:
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1800FDD44 (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x1800FE768 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA20 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IApplicationTargetingTracker * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
        CMultitaskingViewHotKeyHandler **a1,
        struct IImmersiveWindowMessageService **a2,
        struct IImmersiveMonitorManager **a3,
        struct IApplicationTargetingTracker **a4,
        struct IMultitaskingViewTaskScheduler **a5,
        struct IApplicationViewCollection **a6)
{
  CMultitaskingViewHotKeyHandler *v10; // rax
  CMultitaskingViewHotKeyHandler *v11; // rdi
  volatile int *v12; // rdx
  int v13; // esi
  CMultitaskingViewHotKeyHandler *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CMultitaskingViewHotKeyHandler *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v10;
  if ( v10 )
  {
    v11 = CMultitaskingViewHotKeyHandler::CMultitaskingViewHotKeyHandler(v10);
    v15 = v11;
    v13 = CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    if ( v13 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (CMultitaskingViewHotKeyHandler *)((char *)v11 + 20),
          v12);
      *a1 = v11;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
