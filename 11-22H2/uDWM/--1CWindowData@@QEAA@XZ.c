/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x180007AB8
 * Callers:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x1800073C8 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800D99B8 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800551B4 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800C7258 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x1800E76DC (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C36C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData **this)
{
  CDesktopManager *v2; // rdi
  CWindowList *v3; // rdi
  CDisplayAnimatedVisual *v4; // rcx
  CTopLevelWindow3D *v5; // rcx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this[2] != (CWindowData *)((char *)this + 804) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)this + 678) & 2) != 0 )
    CLivePreview::OnWindowDataDeleted(
      *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
      (const struct CWindowData *)this);
  v3 = (CWindowList *)*((_QWORD *)v2 + 54);
  if ( this == *((CWindowData ***)v3 + 88) )
  {
    v6 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(v3, 1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCBB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v6,
        v7);
    *((_QWORD *)v3 + 88) = 0LL;
  }
  v4 = (CDisplayAnimatedVisual *)*((_QWORD *)v3 + 71);
  if ( v4 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v4, (struct CWindowData *)this);
  v5 = this[56];
  if ( v5 )
    CTopLevelWindow3D::SetWindowData(v5, 0LL);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 76);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 71);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 67);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 62);
}
