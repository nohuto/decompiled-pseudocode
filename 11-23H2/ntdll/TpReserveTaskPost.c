/*
 * XREFs of TpReserveTaskPost @ 0x18004F8B0
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033C84 (TppGetCurrentThreadNumaNode.c)
 */

NTSTATUS __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // ebx
  volatile signed __int32 **v6; // rcx
  _RTL_SRWLOCK *v7; // rdx
  NTSTATUS result; // eax
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
    v6 = (volatile signed __int32 **)&TppPoolpSerializedPool;
    v7 = &TppPoolpSerializedPoolLock;
  }
  else
  {
    v6 = (volatile signed __int32 **)&TppPoolpGlobalPool;
    v7 = &TppPoolpGlobalPoolLock;
  }
  result = TppPoolpReferenceGlobalPool(v6, (_PEB_LDR_DATA *)v7, &v9, a4);
  v4 = result;
  if ( result >= 0 )
    goto LABEL_6;
  return result;
}
