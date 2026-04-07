/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x18001FADC
 * Callers:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001C4E4 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800D4920 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001C528 (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     memmove_0 @ 0x180063707 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData **this)
{
  CDesktopManager *v2; // rsi
  __int64 v3; // rdi
  CWindowData **v4; // r8
  CWindowData **i; // rcx

  if ( this[2] != (CWindowData *)((char *)this + 780) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)this + 670) & 1) != 0 )
  {
    v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55);
    v4 = *(CWindowData ***)(v3 + 536);
    for ( i = *(CWindowData ***)(v3 + 528); i != v4; ++i )
    {
      if ( *i == (CWindowData *)this )
      {
        memmove_0(i, i + 1, (char *)v4 - (char *)(i + 1));
        *(_QWORD *)(v3 + 536) -= 8LL;
        break;
      }
    }
  }
  CWindowList::OnWindowDataDestroyed(*((CDisplayAnimatedVisual ***)v2 + 52), this);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 76);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 71);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 67);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 62);
}
