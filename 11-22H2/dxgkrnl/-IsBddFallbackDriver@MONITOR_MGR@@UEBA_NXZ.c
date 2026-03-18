/*
 * XREFs of ?IsBddFallbackDriver@MONITOR_MGR@@UEBA_NXZ @ 0x1C03C73D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0004F9C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall MONITOR_MGR::IsBddFallbackDriver(MONITOR_MGR *this)
{
  return DXGADAPTER::IsBddFallbackDriver(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL));
}
