/*
 * XREFs of SmpMarkThreadFree @ 0x14000398C
 * Callers:
 *     SmpApiCallback @ 0x140002CF0 (SmpApiCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpMarkThreadFree(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // edi

  RtlAcquireSRWLockExclusive(a1);
  v2 = (unsigned int)(*(_DWORD *)(a1 + 20))--;
  if ( (unsigned int)v2 < *(_DWORD *)(a1 + 16) )
  {
    v3 = *(_DWORD *)(a1 + 20) + 1;
    if ( (int)TpSetPoolMinThreads(*(_QWORD *)(a1 + 8), v3) >= 0 )
      *(_DWORD *)(a1 + 16) = v3;
  }
  return RtlReleaseSRWLockExclusive(a1, v2);
}
