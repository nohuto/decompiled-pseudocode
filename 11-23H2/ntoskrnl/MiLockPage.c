/*
 * XREFs of MiLockPage @ 0x14046D124
 * Callers:
 *     MiScanPagefileSpace @ 0x140A32E90 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x140AE81B8 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
