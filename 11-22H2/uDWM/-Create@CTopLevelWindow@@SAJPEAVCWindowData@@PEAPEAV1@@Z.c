/*
 * XREFs of ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036C34
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036BA4 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180021590 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x180036CD4 (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::Create(struct CWindowData *a1, struct CTopLevelWindow **a2)
{
  CTopLevelWindow *v4; // rax
  CTopLevelWindow *v5; // rax
  struct CTopLevelWindow *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CTopLevelWindow *v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v4 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            872LL);
  v14 = v4;
  if ( !v4 )
  {
    v14 = 0LL;
    goto LABEL_7;
  }
  v5 = CTopLevelWindow::CTopLevelWindow(v4, a1, 0);
  v6 = v5;
  v14 = v5;
  if ( !v5 )
  {
LABEL_7:
    v8 = -2147024882;
    v10 = 2147942414LL;
    v11 = 80LL;
    goto LABEL_8;
  }
  v7 = CTopLevelWindow::Initialize(v5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    return 0LL;
  }
  v10 = (unsigned int)v7;
  v11 = 82LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)v10,
    v12);
  Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v14);
  return v8;
}
