/*
 * XREFs of NtLoadDriver @ 0x1406DDFF0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140255A78 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
