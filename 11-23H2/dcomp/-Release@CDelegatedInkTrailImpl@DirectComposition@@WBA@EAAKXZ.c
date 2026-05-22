/*
 * XREFs of ?Release@CDelegatedInkTrailImpl@DirectComposition@@WBA@EAAKXZ @ 0x1800A81B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::Release(__int64 a1)
{
  return DirectComposition::CDeviceTextureManager::Release((volatile signed __int32 *)(a1 - 16));
}
