/*
 * XREFs of SepSecureBootManifestCompareElements @ 0x1409D0FD0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403DA530 (memcmp.c)
 */

int __fastcall SepSecureBootManifestCompareElements(void *a1, const void *a2, const void *a3)
{
  return memcmp(a2, a3, 0x20uLL);
}
