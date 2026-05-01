/*
 * XREFs of ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18051A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180519184 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1805197B4 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18051B6B8 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18051CBD8 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowArrangementView::MovePlacement(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  int PlaceModePoint; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 )
    return;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  WindowArrangementView::SetPlaceModeIdleAnimationEnabled((WindowArrangementView *)(a1 - 48), 0);
  v6 = 6;
  switch ( a2 )
  {
    case 0:
      goto LABEL_13;
    case 1:
      if ( v5 != 6 )
      {
        if ( v5 == 5 )
          return;
        v7 = 5;
        goto LABEL_15;
      }
      goto LABEL_7;
    case 2:
LABEL_13:
      if ( v5 - 5 <= 1 )
        return;
      v7 = (a2 != 0) + 2;
      goto LABEL_15;
  }
  if ( a2 != 3 )
    return;
  if ( v5 != 5 )
  {
    if ( v5 == 6 )
      return;
    v7 = 6;
    goto LABEL_15;
  }
LABEL_7:
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 88LL))(*(_QWORD *)(a1 + 56));
LABEL_15:
  if ( v7 != -1 )
  {
    if ( v7 != v5 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 72LL))(*(_QWORD *)(a1 + 56), v7);
    if ( v7 == 5 )
    {
      v6 = 3;
    }
    else if ( v7 == 6 )
    {
      v6 = 2;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32), v6);
    PlaceModePoint = WindowArrangementView::GetPlaceModePoint(a1 - 48, v7, v5, &v14);
    if ( PlaceModePoint >= 0 )
    {
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 32) + 56LL))(*(_QWORD *)(a1 + 32), v14, v9);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1FA,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PlaceModePoint);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(*(_QWORD *)(a1 + 32));
    v10 = a1 - 48;
    if ( v7 == 7 )
    {
      WindowArrangementView::EnablePlaceModeDropFeedback(v10, 0, 0LL, 0LL);
      v14 = 0LL;
      v11 = *(_QWORD *)(a1 + 32);
      v12 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 152LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      if ( v12(v11, &GUID_959cb746_add4_483a_8acd_059d06f3798a, &v14) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    else
    {
      WindowArrangementView::UpdateDropFeedback(v10, v7, v5);
    }
  }
}
