/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C00F3E3C
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00130E0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchFlushAdapter @ 0x1C00F4140 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForEmptyHwQueue(struct _VIDSCH_GLOBAL *a1)
{
  __int64 i; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rsi
  __int64 result; // rax
  _DWORD v6[40]; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 20); i = (unsigned int)(i + 1) )
  {
    v3 = (__int64 *)*((_QWORD *)a1 + 79);
    if ( (unsigned int)i < *((_DWORD *)a1 + 176) )
      v3 += i;
    v4 = *v3;
    memset(v6, 0, sizeof(v6));
    v6[8] |= 0x40u;
    v6[5] = 1;
    v6[12] = i;
    *(_QWORD *)(v4 + 280) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 240));
    while ( 1 )
    {
      result = *(unsigned int *)(v4 + 2896);
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v6, 0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
