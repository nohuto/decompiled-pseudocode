/*
 * XREFs of TpUnreserveTaskPost @ 0x18004FA30
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18004F940 (RtlpTpWorkUnposted.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FB10 (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpUnreserveTaskPost(PVOID a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdx
  const void **v3; // rcx

  if ( !a1 )
  {
    if ( !a2 || (a1 = (PVOID)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = TppPoolpGlobalPool;
  }
  if ( a1 == TppPoolpGlobalPool )
  {
    v2 = &TppPoolpGlobalPoolLock;
    v3 = (const void **)&TppPoolpGlobalPool;
LABEL_7:
    TppPoolpDereferenceGlobalPool(v3, v2);
    return;
  }
  if ( a1 == (PVOID)TppPoolpSerializedPool )
  {
    v2 = &TppPoolpSerializedPoolLock;
    v3 = (const void **)&TppPoolpSerializedPool;
    goto LABEL_7;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    TppPoolpFree(a1);
}
