/*
 * XREFs of ?Present@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x18011C750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::Present(__int64 a1, bool a2)
{
  return CCaptureRenderTarget::Present((CCaptureRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
