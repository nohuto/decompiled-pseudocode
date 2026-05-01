/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800FD5C8
 * Callers:
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FD364 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 * Callees:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800FDA34 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x1800FE828 (--0MultitaskingViewGestureHandler@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA48 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureHandler,MultitaskingViewGestureHandler,IMultitaskingViewTaskScheduler * &,IMultitaskingViewVisibilityService * &>(
        MultitaskingViewGestureHandler **a1,
        struct IMultitaskingViewTaskScheduler **a2,
        struct IMultitaskingViewVisibilityService **a3)
{
  MultitaskingViewGestureHandler *v6; // rax
  MultitaskingViewGestureHandler *v7; // rax
  struct IMultitaskingViewVisibilityService *v8; // r8
  struct IMultitaskingViewTaskScheduler *v9; // rdx
  MultitaskingViewGestureHandler *v10; // rdi
  volatile int *v11; // rdx
  int v12; // ebx
  MultitaskingViewGestureHandler *v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (MultitaskingViewGestureHandler *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = MultitaskingViewGestureHandler::MultitaskingViewGestureHandler(v6);
    v8 = *a3;
    v9 = *a2;
    v10 = v7;
    v14 = v7;
    v12 = MultitaskingViewGestureHandler::RuntimeClassInitialize(v7, v9, v8);
    if ( v12 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (MultitaskingViewGestureHandler *)((char *)v10 + 28),
          v11);
      *a1 = v10;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
