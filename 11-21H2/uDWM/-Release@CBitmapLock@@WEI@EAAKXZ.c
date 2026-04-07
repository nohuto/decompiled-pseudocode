/*
 * XREFs of ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x180063FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::Release(__int64 a1)
{
  return CWICBitmapWrapper::Release((CWICBitmapWrapper *)(a1 - 72));
}
