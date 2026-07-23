/*
 * XREFs of AsanWrapperMemcmp @ 0x140565820
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     KasanValidateAddress @ 0x140565A70 (KasanValidateAddress.c)
 */

int __fastcall AsanWrapperMemcmp(void *Buf1, ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  KasanValidateAddress((ULONG_PTR)Buf1, BugCheckParameter2);
  KasanValidateAddress(BugCheckParameter1, BugCheckParameter2);
  return memcmp(Buf1, (const void *)BugCheckParameter1, BugCheckParameter2);
}
