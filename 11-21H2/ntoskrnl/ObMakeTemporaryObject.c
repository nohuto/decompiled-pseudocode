/*
 * XREFs of ObMakeTemporaryObject @ 0x1406E1700
 * Callers:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1406E1680 @ 0x1406E1680 (sub_1406E1680.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     IoDeleteDriver @ 0x140936380 (IoDeleteDriver.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 *     sub_140A349B0 @ 0x140A349B0 (sub_140A349B0.c)
 *     sub_140A81078 @ 0x140A81078 (sub_140A81078.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegion();
  sub_1407A3190(v2);
}
