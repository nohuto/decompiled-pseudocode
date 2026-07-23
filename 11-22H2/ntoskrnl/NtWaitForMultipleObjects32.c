/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x1407C7DC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects32(
        ULONG Count,
        LONG Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d
  char PreviousMode; // r8
  __int64 v11; // rax
  LONG *v12; // rax
  LARGE_INTEGER *v14; // [rsp+40h] [rbp-248h]
  __int64 v15; // [rsp+50h] [rbp-238h] BYREF
  __int64 v16[64]; // [rsp+60h] [rbp-228h] BYREF

  v8 = Count;
  v14 = Timeout;
  memset(v16, 0, sizeof(v16));
  v9 = 0;
  v15 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( Timeout )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
        v11 = (__int64)Timeout;
      v15 = *(_QWORD *)v11;
      v14 = (LARGE_INTEGER *)&v15;
    }
    if ( 4 * v8 )
    {
      v12 = &Handles[v8];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v9 < (unsigned int)v8 )
  {
    v16[v9] = Handles[v9];
    ++v9;
  }
  return ObWaitForMultipleObjects(v8, v16, PreviousMode, WaitType, PreviousMode, Alertable, v14);
}
