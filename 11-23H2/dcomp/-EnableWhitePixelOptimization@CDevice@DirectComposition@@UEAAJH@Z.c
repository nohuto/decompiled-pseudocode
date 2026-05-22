/*
 * XREFs of ?EnableWhitePixelOptimization@CDevice@DirectComposition@@UEAAJH@Z @ 0x18008BE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::EnableWhitePixelOptimization(DirectComposition::CDevice *this, int a2)
{
  *((_BYTE *)this + 360) = a2 != 0;
  return 0LL;
}
