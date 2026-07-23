/*
 * XREFs of NtWaitForMultipleObjects @ 0x1407AB9E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // r14
  char PreviousMode; // di
  PLARGE_INTEGER v10; // rbx
  HANDLE *v11; // rax
  LARGE_INTEGER v13; // [rsp+48h] [rbp-240h] BYREF
  __int64 v14[64]; // [rsp+50h] [rbp-238h] BYREF

  v8 = Count;
  memset(v14, 0, sizeof(v14));
  v13.QuadPart = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = Timeout;
  if ( PreviousMode )
  {
    if ( Timeout )
    {
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v10 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
      v13 = *v10;
      v10 = &v13;
    }
    if ( 8 * v8 )
    {
      v11 = &Handles[v8];
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v14, Handles, 8 * v8);
  return ObWaitForMultipleObjects(v8, v14, PreviousMode, WaitType, PreviousMode, Alertable, v10);
}
