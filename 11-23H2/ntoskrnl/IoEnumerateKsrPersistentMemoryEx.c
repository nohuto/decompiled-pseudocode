/*
 * XREFs of IoEnumerateKsrPersistentMemoryEx @ 0x140560000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PipGetDriverKsrGuid @ 0x1409533A0 (PipGetDriverKsrGuid.c)
 */

__int64 __fastcall IoEnumerateKsrPersistentMemoryEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v11; // [rsp+58h] [rbp-40h] BYREF

  v11 = 0LL;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  result = PipGetDriverKsrGuid(a1, &v11);
  if ( (int)result >= 0 )
  {
    v10[0] = a1;
    v10[1] = a2;
    v10[2] = a3;
    v10[3] = a4;
    v10[4] = a5;
    return KsrEnumeratePersistedMemory(&v11, PipEnumeratePersistedMemoryCallback, v10);
  }
  return result;
}
