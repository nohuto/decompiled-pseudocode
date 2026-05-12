/*
 * XREFs of StorFreeExtraIoResourceForGateway @ 0x1C0066144
 * Callers:
 *     StorFreeExtraIoResourceForAdapter @ 0x1C00660B8 (StorFreeExtraIoResourceForAdapter.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 */

__int64 __fastcall StorFreeExtraIoResourceForGateway(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // rcx

  result = *(unsigned int *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 136) > a2 )
  {
    if ( (_DWORD)result )
    {
      while ( 1 )
      {
        v7 = 0;
        if ( (_DWORD)result )
          break;
LABEL_18:
        if ( *(_DWORD *)(a1 + 136) <= a2 )
          return result;
      }
      while ( *(_DWORD *)(a1 + 136) > a2 )
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), 0, 0);
        result = (__int64)ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 64) + 8LL * v7));
        if ( !result )
          break;
        v9 = *(_QWORD *)(a1 + 48);
        if ( *(_BYTE *)(v9 + 4306) )
          StorFreeContiguousIoResources(v9, result);
        else
          ExFreePoolWithTag((PVOID)result, 0x53526152u);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 136));
        if ( (unsigned int)result >= v8 )
          break;
        result = *(unsigned int *)(a1 + 128);
        if ( ++v7 >= (unsigned int)result )
          goto LABEL_18;
      }
    }
    else
    {
      do
      {
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), 0, 0);
        result = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 64));
        if ( !result )
          break;
        v6 = *(_QWORD *)(a1 + 48);
        if ( *(_BYTE *)(v6 + 4306) )
          StorFreeContiguousIoResources(v6, result);
        else
          ExFreePoolWithTag((PVOID)result, 0x53526152u);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 136));
        if ( (unsigned int)result >= v5 )
          break;
      }
      while ( *(_DWORD *)(a1 + 136) > a2 );
    }
  }
  return result;
}
