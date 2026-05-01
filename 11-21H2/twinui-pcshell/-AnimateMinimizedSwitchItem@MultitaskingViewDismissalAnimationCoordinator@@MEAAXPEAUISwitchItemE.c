/*
 * XREFs of ?AnimateMinimizedSwitchItem@MultitaskingViewDismissalAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804CB210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_761591aeddd72f295a970ac6e0cc3602___lambda_9b577220311cb778785b8f619b26c810_____lambda_761591aeddd72f295a970ac6e0cc3602__&__lambda_9b577220311cb778785b8f619b26c810__&_IDCompBatchAnimationCallback___&_ @ 0x1804CB158 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_761591aed.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MultitaskingViewDismissalAnimationCoordinator::AnimateMinimizedSwitchItem(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  struct IDCompBatchAnimationCallback *v12; // [rsp+50h] [rbp+18h] BYREF
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v12 = a3;
  v11 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_761591aeddd72f295a970ac6e0cc3602___lambda_9b577220311cb778785b8f619b26c810_____lambda_761591aeddd72f295a970ac6e0cc3602_____lambda_9b577220311cb778785b8f619b26c810____IDCompBatchAnimationCallback_____(
    &v13,
    v5,
    v6,
    (__int64 *)&v12);
  v7 = v13;
  if ( v13 )
    (**v13)(v13, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v11);
  if ( v7 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
  v8 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
         a2,
         0LL,
         12LL,
         v11);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v8);
  v9 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
         a2,
         1LL,
         12LL,
         v11);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
}
