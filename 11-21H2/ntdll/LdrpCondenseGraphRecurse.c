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

void __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // eax
  _QWORD *v8; // r14
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // r8
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( !v8 )
  {
LABEL_5:
    v10 = (_QWORD *)*a3;
    if ( *a3 )
      *a3 = *v10;
    v11 = 0LL;
    if ( v3 != v10 )
    {
      do
      {
        *v10 = v11;
        v13 = v10;
        v11 = v10;
        v10 = (_QWORD *)*a3;
        if ( *a3 )
          *a3 = *v10;
      }
      while ( v3 != v10 );
      v16 = v11;
      if ( v13 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v16);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v14 = v16;
        while ( v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          LdrpDestroyNode(v15 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
    return;
  }
  do
  {
    v8 = (_QWORD *)*v8;
    v9 = v8[1];
    if ( *(int *)(v9 + 56) > 5 )
      continue;
    v12 = *(_DWORD *)(v9 + 72);
    if ( !v12 )
    {
      LdrpCondenseGraphRecurse(v8[1], a2, a3);
      v12 = *(_DWORD *)(v9 + 32);
LABEL_13:
      if ( *(_DWORD *)(a1 + 32) > v12 )
        *(_DWORD *)(a1 + 32) = v12;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v9 + 64) )
      goto LABEL_13;
LABEL_15:
    if ( *(_DWORD *)(v9 + 56) == -3 )
      *(_DWORD *)(a1 + 56) = -3;
  }
  while ( v8 != *(_QWORD **)(a1 + 40) );
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
    goto LABEL_5;
}
