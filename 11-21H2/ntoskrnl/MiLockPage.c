/*
 * XREFs of MiLockPage @ 0x14045C6C8
 * Callers:
 *     MiScanPagefileSpace @ 0x14096F470 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x140A8142C (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 */

__int64 __fastcall MiLockPage(__int64 a1)
{
  return MiLockPageInline(a1);
}
