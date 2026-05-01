/*
 * XREFs of ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180084370
 * Callers:
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800E8438 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180084440 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18014025C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewHotKeyHandler_CreateInstance(
        struct IImmersiveWindowMessageService *a1,
        struct IImmersiveMonitorManager *a2,
        struct IMultitaskingViewTaskScheduler *a3,
        struct IApplicationViewCollection *a4,
        const struct _GUID *a5,
        void **a6)
{
  void **v6; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void **v11; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  void *v15; // r8
  void **v16; // rcx
  int v17; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IImmersiveWindowMessageService *v19; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveMonitorManager *v20; // [rsp+58h] [rbp+28h] BYREF
  struct IMultitaskingViewTaskScheduler *v21; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationViewCollection *v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
         (unsigned int)&a6,
         (unsigned int)&v19,
         (unsigned int)&v20,
         (unsigned int)&v21,
         (__int64)&v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    v13 = (unsigned int)v7;
    v14 = 262LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)v13,
      v17);
    goto LABEL_7;
  }
  *v6 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_1ac62032_7c9f_4d34_8191_c44d7d759dfe,
                       &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v16 = a6;
    *v6 = a6;
    (*((void (__fastcall **)(void **))*v16 + 1))(v16);
    v8 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v9, v9) )
    {
      v11 = a6;
      *v6 = a6;
LABEL_5:
      v8 = 0;
      (*((void (__fastcall **)(void **))*v11 + 1))(v11);
      goto LABEL_6;
    }
    if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      *v6 = v15;
      v11 = (void **)v15;
      goto LABEL_5;
    }
    v8 = -2147467262;
  }
LABEL_6:
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 263LL;
    goto LABEL_14;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a6);
  return (unsigned int)v8;
}
