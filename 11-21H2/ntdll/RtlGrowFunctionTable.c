/*
 * XREFs of RtlGrowFunctionTable @ 0x1800EBD50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlGrowFunctionTable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  int v8; // edi
  signed __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  int v13; // edx

  v3 = a2;
  if ( *(_DWORD *)(a1 + 80) != 3 || (unsigned int)a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(-1073741811, a2, a3);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v5, v6, v7);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v8 == -1 )
        goto LABEL_10;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(a1 + 84) = v3;
  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v10, v11, v12);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_10:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
    if ( v13 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return result;
}
