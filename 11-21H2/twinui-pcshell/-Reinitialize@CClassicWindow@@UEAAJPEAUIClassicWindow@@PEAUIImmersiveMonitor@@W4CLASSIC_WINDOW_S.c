/*
 * XREFs of ?Reinitialize@CClassicWindow@@UEAAJPEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x18022AA40
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUIClassicWindow@@@Z @ 0x1802EFDF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::Reinitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a1 + 64);
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)(a1 + 24), a3);
  result = 0LL;
  *(_DWORD *)(a1 + 72) = a4;
  return result;
}
