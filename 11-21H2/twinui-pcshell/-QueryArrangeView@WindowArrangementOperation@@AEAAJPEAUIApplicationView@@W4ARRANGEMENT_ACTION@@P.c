/*
 * XREFs of ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805108A0
 * Callers:
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1805103B0 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180510AAC (-QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180510C48 (-QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180615050 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180615920 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementOperation::QueryArrangeView(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v7; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *, _QWORD); // rbx
  int v10; // eax
  int ViewFullScreen; // ebx
  __int64 v12; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  *a4 = 0;
  v16 = 0;
  if ( (int)a3 <= 0 )
    goto LABEL_25;
  if ( (int)a3 <= 2 )
  {
    ViewFullScreen = WindowArrangementOperation::QuerySnapView(a1, a2, a3, &v16);
    if ( ViewFullScreen < 0 )
    {
      v14 = 133LL;
      goto LABEL_18;
    }
    goto LABEL_24;
  }
  if ( (int)a3 <= 4 )
  {
    ViewFullScreen = WindowArrangementOperation::QueryReplaceView(a1, a2, a3, &v16);
    if ( ViewFullScreen < 0 )
    {
      v14 = 138LL;
      goto LABEL_18;
    }
LABEL_24:
    v7 = v16;
    goto LABEL_25;
  }
  if ( (_DWORD)a3 == 5 )
  {
    ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
    if ( ViewFullScreen >= 0 )
    {
      v7 = 2;
      goto LABEL_25;
    }
    v14 = 126LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)ViewFullScreen);
    return (unsigned int)ViewFullScreen;
  }
  if ( (_DWORD)a3 == 6
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 184LL))(*(_QWORD *)(a1 + 64)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 264LL))(*(_QWORD *)(a1 + 64), 4LL);
    v17 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 152LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v10 = v9(v8, a2, &v17, 0LL);
    ViewFullScreen = v10;
    if ( v10 < 0 )
    {
      v12 = 118LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
      return (unsigned int)ViewFullScreen;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 64) + 240LL))(
            *(_QWORD *)(a1 + 64),
            2LL,
            v17);
    ViewFullScreen = v10;
    if ( v10 < 0 )
    {
      v12 = 119LL;
      goto LABEL_13;
    }
    v10 = CAppLayoutOperation::_EvictView(a1 + 24, a2, 2LL);
    ViewFullScreen = v10;
    if ( v10 < 0 )
    {
      v12 = 120LL;
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  }
LABEL_25:
  *a4 = v7;
  return 0LL;
}
