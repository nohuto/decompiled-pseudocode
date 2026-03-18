/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C026B51C
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C0146B70 (NtGdiMakeObjectUnXferable.c)
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 * Callees:
 *     <none>
 */

void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this)
{
  GreReleaseHmgrSemaphore(this);
}
