/*
 * XREFs of ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18051B53C
 * Callers:
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18051BB50 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___ @ 0x18051804C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18051A854 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::ResetPlaceModeIdleTimer(WindowArrangementView *this)
{
  __int64 *v1; // rdi
  volatile int *v3; // rdx
  Microsoft::WRL::Details *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v9; // [rsp+30h] [rbp+8h] BYREF
  WindowArrangementView *v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  v10 = this;
  v4 = (WindowArrangementView *)((char *)this + 68);
  if ( this )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, v3);
  v9 = this;
  if ( this )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___(
         v6,
         v5,
         (__int64)v1,
         &v9);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v10);
}
