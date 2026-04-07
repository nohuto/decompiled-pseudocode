/*
 * XREFs of ?OnProxyWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x180063414
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnProxyWindowDying(struct CWindowData *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 82) + 648LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 56)
                                                         + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56),
    *(_QWORD *)(*((_QWORD *)a1 + 82) + 40LL),
    0LL,
    *((_QWORD *)a1 + 5));
}
