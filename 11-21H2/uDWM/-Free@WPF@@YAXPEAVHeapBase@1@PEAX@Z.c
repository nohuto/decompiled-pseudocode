/*
 * XREFs of ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180097908
 * Callers:
 *     ??R?$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z @ 0x1800629E8 (--R-$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WPF::Free(WPF *this, struct WPF::HeapBase *a2, void *a3)
{
  (*(void (__fastcall **)(WPF::HeapBase *, struct WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2,
    a3);
}
