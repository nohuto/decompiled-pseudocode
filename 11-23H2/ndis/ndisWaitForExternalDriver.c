/*
 * XREFs of ndisWaitForExternalDriver @ 0x1C010F6D0
 * Callers:
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C010F644 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ndisFindSomeoneToBlame @ 0x1C0139660 (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C0139908 (ndisWaitForAllProcessorsIdle.c)
 */

char __fastcall ndisWaitForExternalDriver(PVOID Object, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  NTSTATUS v8; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  v6 = a2;
  if ( a2 > 0x1388 )
  {
    Timeout.QuadPart = -50000000LL;
    v8 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
    if ( !v8 )
      return 1;
    if ( v8 != 258 )
      ndisBugCheckEx(0x24uLL, 1uLL, v8, 0LL);
    v6 -= 5000;
  }
  ndisWaitForAllProcessorsIdle();
  Timeout.QuadPart = -10000LL * v6;
  v10 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
  if ( !v10 )
    return 1;
  if ( v10 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v10, 0LL);
  ndisWaitForAllProcessorsIdle();
  Timeout.QuadPart = 0LL;
  v11 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
  if ( !v11 )
    return 1;
  if ( v11 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v11, 0LL);
  ndisFindSomeoneToBlame(a3, a4);
  return 0;
}
