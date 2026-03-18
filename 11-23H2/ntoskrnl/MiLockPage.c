/*
 * XREFs of MiLockPage @ 0x14046CD24
 * Callers:
 *     MiScanPagefileSpace @ 0x140A32BE0 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x140AE81C8 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
