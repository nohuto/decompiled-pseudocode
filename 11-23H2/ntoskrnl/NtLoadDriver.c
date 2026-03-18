/*
 * XREFs of NtLoadDriver @ 0x1407CEA10
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x14035AF70 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
