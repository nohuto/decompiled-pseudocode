/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x14097F86C
 * Callers:
 *     PfProcessExitNotification @ 0x140760FA4 (PfProcessExitNotification.c)
 *     PfSnSetAltPrefetchParam @ 0x14097FBF8 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     memcmp @ 0x1403DA530 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
