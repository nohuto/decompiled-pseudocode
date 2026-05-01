/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180084440
 * Callers:
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180084370 (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 * Callees:
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x180084514 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1801395EC (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18014025C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
        CMultitaskingViewHotKeyHandler **a1,
        struct IImmersiveWindowMessageService **a2,
        struct IImmersiveMonitorManager **a3,
        struct IMultitaskingViewTaskScheduler **a4,
        struct IApplicationViewCollection **a5)
{
  CMultitaskingViewHotKeyHandler *v9; // rax
  CMultitaskingViewHotKeyHandler *v10; // rdi
  volatile int *v11; // rdx
  int v12; // esi
  CMultitaskingViewHotKeyHandler *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CMultitaskingViewHotKeyHandler *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v10 = CMultitaskingViewHotKeyHandler::CMultitaskingViewHotKeyHandler(v9);
    v14 = v10;
    v12 = CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(v10, *a2, *a3, *a4, *a5);
    if ( v12 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (CMultitaskingViewHotKeyHandler *)((char *)v10 + 20),
          v11);
      *a1 = v10;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
