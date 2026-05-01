/*
 * XREFs of ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1805D41F0
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D43BC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805D1828 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x1805D3BEC (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1805D3D68 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::ShowPlaceModeFeedback(__int64 a1, unsigned int a2, _QWORD *a3, char a4)
{
  __int64 v7; // rcx
  int v8; // edi
  WindowArrangementView *v9; // rcx
  volatile int *v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  char v15[16]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 266) )
    return 0LL;
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32), &v17);
    v7 = *(_QWORD *)(a1 + 56);
    v16 = v17;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, char *))(*(_QWORD *)v7 + 48LL))(v7, *a3, &v16, a2, v15);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 56LL))(*(_QWORD *)(a1 + 56));
    v15[0] = 1;
  }
  v8 = 2;
  v9 = (WindowArrangementView *)(a1 - 48);
  if ( a2 == 2 )
    WindowArrangementView::SetPlaceModeIdleAnimationEnabled(v9, 0LL);
  else
    WindowArrangementView::ResetPlaceModeIdleTimer(v9);
  if ( !v15[0] && *(_DWORD *)(a1 + 248) != 2 && !*(_DWORD *)(a1 + 260) && a2 != 4 )
    return 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  if ( *(_DWORD *)(a1 + 248) )
  {
    LOBYTE(v10) = 1;
    WindowArrangementView::SetPlaceModeIdleAnimationEnabled((WindowArrangementView *)(a1 - 48), v10);
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), &v17);
  v11 = 0LL;
  if ( DWORD1(v17) == 5 )
    v11 = 4 - (unsigned int)((_DWORD)v17 != 2);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 168LL))(
    *(_QWORD *)(a1 + 32),
    v11,
    0LL,
    0LL);
  if ( a2 != 4 )
    v8 = 0;
  v12 = WindowArrangementView::EnablePlaceModeDropFeedback(a1 - 48, v8, (int *)&v17, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39E,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
