/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140219894
 * Callers:
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x140625F90 (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
