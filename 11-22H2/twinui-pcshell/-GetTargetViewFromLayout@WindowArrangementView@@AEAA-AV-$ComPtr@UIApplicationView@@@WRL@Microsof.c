/*
 * XREFs of ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805D22B4
 * Callers:
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805D1828 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall WindowArrangementView::GetTargetViewFromLayout(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  void (__fastcall *v10)(__int64, GUID *, __int64 *); // rdi
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v5 = a3 - 2;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a1 + 120);
    v7 = *(void (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    v7(v6, 1LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v12);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 120);
    v9 = *(void (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    v9(v8, 0LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v12);
  }
  v4 = v12;
LABEL_6:
  *a2 = 0LL;
  if ( v4 )
  {
    v10 = *(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a2);
    v10(v4, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a2);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return a2;
}
