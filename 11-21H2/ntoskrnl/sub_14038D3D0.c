/*
 * XREFs of sub_14038D3D0 @ 0x14038D3D0
 * Callers:
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void sub_14038D3D0()
{
  ExAcquireFastMutex(&stru_140C1FB00);
  byte_140C1FB3C = 1;
  KeReleaseGuardedMutex(&stru_140C1FB00);
}
