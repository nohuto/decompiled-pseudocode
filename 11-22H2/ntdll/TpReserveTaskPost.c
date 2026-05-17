/*
 * XREFs of TpReserveTaskPost @ 0x18004FA10
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x180031978 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v6; // rcx
  _PEB_LDR_DATA *v7; // rdx
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode((__int64)v9, (int *)(a2 + 8), (_BYTE *)(a2 + 12), 0LL);
    return v4;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v6 = &TppPoolpSerializedPool;
    v7 = (_PEB_LDR_DATA *)&TppPoolpSerializedPoolLock;
  }
  else
  {
    v6 = &TppPoolpGlobalPool;
    v7 = (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock;
  }
  result = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v6, v7, &v9, a4);
  v4 = result;
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
