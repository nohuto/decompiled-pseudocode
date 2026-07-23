/*
 * XREFs of TpCallbackReleaseSemaphoreOnCompletion @ 0x180125B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpCallbackReleaseSemaphoreOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        HANDLE Semaphore,
        ULONG ReleaseCount)
{
  if ( Instance && (char *)Semaphore - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ReleaseCount && !*((_DWORD *)Instance + 39) )
  {
    *((_DWORD *)Instance + 36) |= 8u;
    *((_DWORD *)Instance + 39) = (_DWORD)Semaphore;
    *((_DWORD *)Instance + 40) = ReleaseCount;
  }
  else
  {
    TppRaiseInvalidParameter(Instance, Semaphore, *(_QWORD *)&ReleaseCount);
  }
}
