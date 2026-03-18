/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C0265710
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C02A8450 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this)
{
  GreReleaseHmgrSemaphore(this);
}
