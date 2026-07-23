/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x18006F3C8
 * Callers:
 *     LdrpCondenseGraph @ 0x18006F394 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F3C8 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F3C8 (LdrpCondenseGraphRecurse.c)
 *     LdrpDestroyNode @ 0x18006F524 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x18006F578 (LdrpMergeNodes.c)
 */

void __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // eax
  _QWORD *v8; // r14
  _QWORD **v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // eax
  _QWORD **v14; // r9
  _QWORD *v15; // r8
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v12 = v8[1];
      if ( *(int *)(v12 + 56) <= 5 )
        break;
LABEL_10:
      if ( v8 == *(_QWORD **)(a1 + 40) )
        goto LABEL_2;
    }
    v13 = *(_DWORD *)(v12 + 72);
    if ( v13 )
    {
      if ( !*(_QWORD *)(v12 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v12 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_10;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v8[1], a2, a3);
      v13 = *(_DWORD *)(v12 + 32);
    }
    if ( *(_DWORD *)(a1 + 32) > v13 )
      *(_DWORD *)(a1 + 32) = v13;
    goto LABEL_16;
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v9 = (_QWORD **)*a3;
    v10 = (_QWORD *)*a3;
    if ( *a3 )
    {
      v10 = *v9;
      *a3 = *v9;
    }
    v11 = 0LL;
    if ( v3 != v9 )
    {
      do
      {
        *v9 = v11;
        v11 = v9;
        v14 = v9;
        v15 = v10;
        if ( v10 )
        {
          v15 = (_QWORD *)*v10;
          *a3 = *v10;
        }
        v9 = (_QWORD **)v10;
        v10 = v15;
      }
      while ( v3 != v9 );
      v18 = v11;
      if ( v14 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v18);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v16 = v18;
        while ( v16 )
        {
          v17 = v16 - 8;
          v16 = (_QWORD *)*v16;
          LdrpDestroyNode(v17);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
