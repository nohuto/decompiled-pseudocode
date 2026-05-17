/*
 * XREFs of RtlGrowFunctionTable @ 0x1800EB500
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlGrowFunctionTable(__int64 a1, unsigned int a2)
{
  int v4; // edi
  signed __int64 result; // rax
  int v6; // edx

  if ( *(_DWORD *)(a1 + 80) != 3 || a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(3221225485LL);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v4 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v4 == -1 )
        goto LABEL_10;
    }
    else
    {
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v4 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(a1 + 84) = a2;
  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_10:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 - 1;
    if ( v6 == 1 )
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return result;
}
