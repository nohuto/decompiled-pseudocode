/*
 * XREFs of TpReserveTaskPost @ 0x1800708D8
 * Callers:
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 */

NTSTATUS __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ebx
  volatile signed __int32 **v5; // rcx
  _PEB_LDR_DATA *v6; // rdx
  NTSTATUS result; // eax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode((__int64)v8, (_DWORD *)(a2 + 8), (_BYTE *)(a2 + 12));
    return v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = (volatile signed __int32 **)&TppPoolpSerializedPool;
    v6 = (_PEB_LDR_DATA *)&TppPoolpSerializedPoolLock;
  }
  else
  {
    v5 = (volatile signed __int32 **)&TppPoolpGlobalPool;
    v6 = (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock;
  }
  result = TppPoolpReferenceGlobalPool(v5, v6, &v8);
  v3 = result;
  if ( result >= 0 )
    goto LABEL_6;
  return result;
}
