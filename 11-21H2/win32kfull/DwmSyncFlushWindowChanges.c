/*
 * XREFs of DwmSyncFlushWindowChanges @ 0x1C00CC928
 * Callers:
 *     xxxSynchronizeDWMWindowChanges @ 0x1C00CC8DC (xxxSynchronizeDWMWindowChanges.c)
 * Callees:
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C00CC990 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 */

__int64 __fastcall DwmSyncFlushWindowChanges(void *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = g_cDWMWindowUniqueness;
  v2 = -1073741823;
  if ( a1 )
  {
    if ( gbInVideoPnpCallout || (v2 = 0, qword_1C032BFB8 == g_cDWMWindowUniqueness) )
    {
      ObfDereferenceObject(a1);
    }
    else
    {
      v2 = DwmSyncFlushForceRenderAndWaitForBatch(a1);
      qword_1C032BFB8 = v1;
    }
  }
  return v2;
}
