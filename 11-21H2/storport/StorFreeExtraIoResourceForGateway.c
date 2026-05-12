/*
 * XREFs of StorFreeExtraIoResourceForGateway @ 0x1C0059138
 * Callers:
 *     StorFreeExtraIoResourceForAdapter @ 0x1C00590AC (StorFreeExtraIoResourceForAdapter.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 */

__int64 __fastcall StorFreeExtraIoResourceForGateway(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned int v6; // esi
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  __int64 v10; // rcx

  result = *(unsigned int *)(a1 + 128);
  v4 = *(_DWORD *)(a1 + 136);
  if ( (_DWORD)result )
  {
    if ( v4 > a2 )
    {
      while ( 1 )
      {
        v8 = 0;
        if ( (_DWORD)result )
          break;
LABEL_19:
        if ( *(_DWORD *)(a1 + 136) <= a2 )
          return result;
      }
      while ( *(_DWORD *)(a1 + 136) > a2 )
      {
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), 0, 0);
        result = (__int64)ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 64) + 8LL * v8));
        if ( !result )
          break;
        v10 = *(_QWORD *)(a1 + 48);
        if ( *(_BYTE *)(v10 + 4242) )
          StorFreeContiguousIoResources(v10, result);
        else
          ExFreePoolWithTag((PVOID)result, 0x53526152u);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 136));
        if ( (unsigned int)result >= v9 )
          break;
        result = *(unsigned int *)(a1 + 128);
        if ( ++v8 >= (unsigned int)result )
          goto LABEL_19;
      }
    }
  }
  else if ( v4 > a2 )
  {
    do
    {
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), 0, 0);
      result = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 64));
      if ( !result )
        break;
      v7 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)(v7 + 4242) )
        StorFreeContiguousIoResources(v7, result);
      else
        ExFreePoolWithTag((PVOID)result, 0x53526152u);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 136));
      if ( (unsigned int)result >= v6 )
        break;
    }
    while ( *(_DWORD *)(a1 + 136) > a2 );
  }
  return result;
}
