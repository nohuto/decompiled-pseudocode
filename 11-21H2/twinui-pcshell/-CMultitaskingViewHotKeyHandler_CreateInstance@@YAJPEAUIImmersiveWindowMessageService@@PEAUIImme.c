/*
 * XREFs of ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FD668
 * Callers:
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800FD160 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1800FD740 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA20 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewHotKeyHandler_CreateInstance(
        struct IImmersiveWindowMessageService *a1,
        struct IImmersiveMonitorManager *a2,
        struct IApplicationTargetingTracker *a3,
        struct IMultitaskingViewTaskScheduler *a4,
        struct IApplicationViewCollection *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  void **v12; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  void *v16; // r8
  void **v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IImmersiveWindowMessageService *v19; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveMonitorManager *v20; // [rsp+58h] [rbp+28h] BYREF
  struct IApplicationTargetingTracker *v21; // [rsp+60h] [rbp+30h] BYREF
  struct IMultitaskingViewTaskScheduler *v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v7 = a7;
  *a7 = 0LL;
  a7 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IApplicationTargetingTracker * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
         (unsigned int)&a7,
         (unsigned int)&v19,
         (unsigned int)&v20,
         (unsigned int)&v21,
         (__int64)&v22,
         (__int64)&a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = (unsigned int)v8;
    v15 = 268LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)v14);
    goto LABEL_7;
  }
  *v7 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1ac62032_7c9f_4d34_8191_c44d7d759dfe, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v17 = a7;
    *v7 = a7;
    (*((void (__fastcall **)(void **))*v17 + 1))(v17);
    v9 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, v10) )
    {
      v12 = a7;
      *v7 = a7;
LABEL_5:
      v9 = 0;
      (*((void (__fastcall **)(void **))*v12 + 1))(v12);
      goto LABEL_6;
    }
    if ( InlineIsEqualGUID(v11, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      *v7 = v16;
      v12 = (void **)v16;
      goto LABEL_5;
    }
    v9 = -2147467262;
  }
LABEL_6:
  if ( v9 < 0 )
  {
    v14 = (unsigned int)v9;
    v15 = 269LL;
    goto LABEL_14;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a7);
  return (unsigned int)v9;
}
