/*
 * XREFs of ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x18002C604
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18002C3D0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ??$As@UIApplicationManagerViewPosition@@@?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationManagerViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002C6FC (--$As@UIApplicationManagerViewPosition@@@-$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Micro.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x1800ED338 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintOverrides(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5)
{
  int v5; // edi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = (int)a4;
  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0LL;
  a5 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&a5);
  if ( !a5 )
  {
    v10 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v13);
    goto LABEL_6;
  }
  v15 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationManagerViewPosition>(&a5, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 211LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v9,
      v13);
    goto LABEL_5;
  }
  v13 = v5;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)v15 + 40LL))(
         v15,
         *((_QWORD *)this + 26),
         a2,
         a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 212LL;
    goto LABEL_10;
  }
  v10 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&a5);
  return v10;
}
