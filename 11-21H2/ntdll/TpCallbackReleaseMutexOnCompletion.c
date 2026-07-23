/*
 * XREFs of TpCallbackReleaseMutexOnCompletion @ 0x1801240F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackReleaseMutexOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Mutex)
{
  __int64 v2; // r8

  if ( !Instance || (char *)Mutex - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 38) )
  {
    TppRaiseInvalidParameter(Instance, Mutex, v2);
  }
  else
  {
    *((_DWORD *)Instance + 36) |= 2u;
    *((_DWORD *)Instance + 38) = (_DWORD)Mutex;
  }
}
