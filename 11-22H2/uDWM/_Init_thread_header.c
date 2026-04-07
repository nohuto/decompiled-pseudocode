/*
 * XREFs of _Init_thread_header @ 0x18005CCD0
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180041028 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     _Init_thread_wait @ 0x18005CD94 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
