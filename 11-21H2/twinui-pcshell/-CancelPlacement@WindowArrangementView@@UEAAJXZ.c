/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x180518E40
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x18051CB20 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x1805179FC (CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___.c)
 *     _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x1805186A4 (_lambda_83894a20d7676cc7370719a196cbc3a9_--operator().c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180519184 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18051A854 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this, volatile int *a2)
{
  char *v3; // rbx
  volatile int *v4; // rdx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  __int64 v11; // [rsp+50h] [rbp+28h] BYREF
  char *v12; // [rsp+58h] [rbp+30h] BYREF
  WindowArrangementView *v13; // [rsp+60h] [rbp+38h] BYREF
  char *v14; // [rsp+68h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 268) && !*((_BYTE *)this + 266) )
  {
    v3 = (char *)this - 48;
    v14 = (char *)this - 48;
    if ( this != (WindowArrangementView *)48 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 68), a2);
    v13 = (WindowArrangementView *)v3;
    if ( v3 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 68), a2);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    v12 = v3;
    if ( v3 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 68), v4);
    v5 = CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9_((__int64)&v12, &v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 554LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v5);
LABEL_17:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v14);
      return v6;
    }
    v8 = WindowArrangementView::EnablePlaceModeDropFeedback(v3, 3LL, 0LL, v11);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 268) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v8);
      v5 = lambda_83894a20d7676cc7370719a196cbc3a9_::operator()(&v13);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 562LL;
        goto LABEL_14;
      }
    }
    v6 = 0;
    goto LABEL_17;
  }
  return 0LL;
}
