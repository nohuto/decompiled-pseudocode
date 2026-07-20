/*
 * XREFs of SmpMarkThreadBusy @ 0x14000390C
 * Callers:
 *     SmpApiCallback @ 0x140002CF0 (SmpApiCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpMarkThreadBusy(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rdx
  unsigned int v4; // edi

  v2 = 0;
  RtlAcquireSRWLockExclusive(a1);
  v3 = (unsigned int)(++*(_DWORD *)(a1 + 20) + 1);
  if ( (unsigned int)v3 > *(_DWORD *)(a1 + 16) )
  {
    v4 = *(_DWORD *)(a1 + 20) + 1;
    v2 = TpSetPoolMinThreads(*(_QWORD *)(a1 + 8), v4);
    if ( v2 < 0 )
      --*(_DWORD *)(a1 + 20);
    else
      *(_DWORD *)(a1 + 16) = v4;
  }
  RtlReleaseSRWLockExclusive(a1, v3);
  return (unsigned int)v2;
}
