/*
 * XREFs of NtWaitForMultipleObjects @ 0x1407AB430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall NtWaitForMultipleObjects(
        unsigned int a1,
        const void *a2,
        WAIT_TYPE a3,
        BOOLEAN a4,
        unsigned __int64 a5)
{
  __int64 v8; // r14
  char PreviousMode; // di
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  LARGE_INTEGER v13; // [rsp+48h] [rbp-240h] BYREF
  __int64 v14[64]; // [rsp+50h] [rbp-238h] BYREF

  v8 = a1;
  memset(v14, 0, sizeof(v14));
  v13.QuadPart = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( (unsigned int)a3 > WaitAny )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = a5;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      if ( a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v13 = *(LARGE_INTEGER *)v10;
      v10 = (__int64)&v13;
    }
    if ( 8 * v8 )
    {
      v11 = (unsigned __int64)a2 + 8 * v8;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v14, a2, 8 * v8);
  return ObWaitForMultipleObjects(v8, v14, PreviousMode, a3, PreviousMode, a4, (LARGE_INTEGER *)v10);
}
