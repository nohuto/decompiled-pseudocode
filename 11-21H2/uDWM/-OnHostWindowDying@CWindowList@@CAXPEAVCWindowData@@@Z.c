/*
 * XREFs of ?OnHostWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x1800633B8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnHostWindowDying(struct CWindowData *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 81) + 656LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 56)
                                                         + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56),
    *((_QWORD *)a1 + 5),
    0LL,
    *(_QWORD *)(*((_QWORD *)a1 + 81) + 40LL));
}
