/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x1800757D8
 * Callers:
 *     LdrpCondenseGraph @ 0x1800757A4 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x1800757D8 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x1800757D8 (LdrpCondenseGraphRecurse.c)
 *     LdrpDestroyNode @ 0x180075920 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x180075974 (LdrpMergeNodes.c)
 */

signed __int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, signed __int64 **a3, unsigned __int64 a4)
{
  signed __int64 *v4; // r15
  int v5; // eax
  _QWORD *v9; // r14
  __int64 v10; // rsi
  signed __int64 result; // rax
  signed __int64 *v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v4 = (signed __int64 *)(a1 + 64);
  v5 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 64) = *a3;
  v9 = *(_QWORD **)(a1 + 40);
  *a3 = (signed __int64 *)(a1 + 64);
  if ( !v9 )
  {
LABEL_5:
    v12 = *a3;
    if ( *a3 )
      *a3 = (signed __int64 *)*v12;
    result = 0LL;
    if ( v4 != v12 )
    {
      do
      {
        *v12 = result;
        v14 = (unsigned __int64)v12;
        result = (signed __int64)v12;
        v12 = *a3;
        if ( *a3 )
          *a3 = (signed __int64 *)*v12;
      }
      while ( v4 != v12 );
      v17 = (_QWORD *)result;
      if ( v14 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)v12, v14, a4);
        LdrpMergeNodes(a1, &v17);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v15 = v17;
        while ( v15 )
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
          result = LdrpDestroyNode(v16 - 8);
        }
      }
    }
    *v4 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
    return result;
  }
  do
  {
    v9 = (_QWORD *)*v9;
    v10 = v9[1];
    if ( *(int *)(v10 + 56) > 5 )
      continue;
    v13 = *(_DWORD *)(v10 + 72);
    if ( !v13 )
    {
      LdrpCondenseGraphRecurse(v9[1], a2, a3);
      v13 = *(_DWORD *)(v10 + 32);
LABEL_13:
      if ( *(_DWORD *)(a1 + 32) > v13 )
        *(_DWORD *)(a1 + 32) = v13;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v10 + 64) )
      goto LABEL_13;
LABEL_15:
    if ( *(_DWORD *)(v10 + 56) == -3 )
      *(_DWORD *)(a1 + 56) = -3;
  }
  while ( v9 != *(_QWORD **)(a1 + 40) );
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
    goto LABEL_5;
  return result;
}
