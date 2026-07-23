/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x18007DCC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

PPORT_MESSAGE __cdecl AlpcGetMessageFromCompletionList(
        PVOID CompletionList,
        PALPC_MESSAGE_ATTRIBUTES *MessageAttributes)
{
  _RTL_SRWLOCK *v2; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  char *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r11
  signed __int64 v12; // rdx
  unsigned int v13; // ecx
  _PORT_MESSAGE *v14; // rbx

  v2 = (_RTL_SRWLOCK *)((char *)CompletionList + 320);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CompletionList + 40);
  v5 = *((_QWORD *)CompletionList + 8);
  v6 = (unsigned __int64)*((unsigned int *)CompletionList + 4) >> 2;
  v7 = (char *)CompletionList + *((unsigned int *)CompletionList + 3);
  do
  {
    v8 = v5;
    v9 = v5 & 0xFFFFFF;
    if ( (v5 & 0xFFFFFF) == 0xFFFFFF || v9 >= v6 || (v10 = (v5 >> 24) & 0xFFFFFF, v10 >= v6) )
    {
      v14 = 0LL;
      goto LABEL_13;
    }
    v11 = *(unsigned int *)&v7[4 * (v5 & 0xFFFFFF)];
    if ( v9 == v10 )
      v12 = v5 | 0xFFFFFFFFFFFFLL;
    else
      v12 = v5 ^ (v5 ^ ((v9 + 1) % v6)) & 0xFFFFFF;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)CompletionList + 8, v12, v5);
  }
  while ( v5 != v8 );
  v13 = 0;
  v14 = (_PORT_MESSAGE *)((char *)CompletionList + *((unsigned int *)CompletionList + 7) + v11);
  if ( MessageAttributes )
  {
    if ( *((_DWORD *)CompletionList + 9) )
    {
      if ( (((_BYTE)v14 + (unsigned __int8)v14->u1.s1.TotalLength) & 7) != 0 )
        v13 = 8 - (((_BYTE)v14 + (unsigned __int8)v14->u1.s1.TotalLength) & 7);
      *MessageAttributes = (PALPC_MESSAGE_ATTRIBUTES)((char *)v14 + (unsigned __int16)v14->u1.s1.TotalLength + v13);
    }
    else
    {
      *MessageAttributes = 0LL;
    }
  }
LABEL_13:
  RtlReleaseSRWLockExclusive(v2);
  return v14;
}
