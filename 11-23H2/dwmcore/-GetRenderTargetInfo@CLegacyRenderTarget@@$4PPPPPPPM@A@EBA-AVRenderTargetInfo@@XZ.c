/*
 * XREFs of ?GetRenderTargetInfo@CLegacyRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x18011C3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CLegacyRenderTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4), a2);
}
