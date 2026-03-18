/*
 * XREFs of KeStartDynamicProcessor @ 0x140961810
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     PnpInitializeProcessor @ 0x14055F378 (PnpInitializeProcessor.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AD870 (PsUpdateActiveProcessAffinity.c)
 */

__int64 __fastcall KeStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // r9d
  int started; // ebx

  if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess || !KeDynamicPartitioningSupported )
    return 3221225473LL;
  ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
  if ( (unsigned int)KeNumberProcessors_0 >= KeMaximumProcessors )
  {
    started = -1073741223;
  }
  else
  {
    v8 = KeNumberProcessors_0;
    *a4 = KeNumberProcessors_0;
    started = KiStartDynamicProcessor(v7, a2, a3, v8);
  }
  ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
  if ( started >= 0 )
  {
    PnpInitializeProcessor();
    PsUpdateActiveProcessAffinity();
  }
  return (unsigned int)started;
}
