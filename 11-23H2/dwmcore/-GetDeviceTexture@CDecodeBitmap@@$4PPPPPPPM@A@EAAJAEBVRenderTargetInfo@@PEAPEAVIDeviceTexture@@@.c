/*
 * XREFs of ?GetDeviceTexture@CDecodeBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180123190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDecodeBitmap::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDecodeBitmap::GetDeviceTexture((CDecodeBitmap *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
