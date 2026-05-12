/*
 * XREFs of RaFreeRaidResources @ 0x1C00589F8
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 *     RaInitializeRaidResources @ 0x1C0058B7C (RaInitializeRaidResources.c)
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 */

void __fastcall RaFreeRaidResources(__int64 a1, __int64 a2, char a3)
{
  union _SLIST_HEADER *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  PSLIST_ENTRY v8; // rax
  unsigned int v9; // eax
  PSLIST_ENTRY v10; // rax
  __int64 v11; // rdi
  struct _IO_WORKITEM *v12; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v5 = (union _SLIST_HEADER *)(a1 + 64);
      if ( a1 != -64 )
      {
        v6 = *(_QWORD *)(a2 + 64);
        if ( *(_DWORD *)v6 == 1 )
          v6 = *(_QWORD *)(v6 + 24);
        v7 = 0LL;
        if ( *(_DWORD *)(a1 + 128) )
        {
          do
          {
            while ( 1 )
            {
              v10 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v5->Alignment + 8 * v7));
              if ( !v10 )
                break;
              if ( a3 )
                StorFreeContiguousIoResources(v6, (__int64)v10);
              else
                ExFreePoolWithTag(v10, 0x53526152u);
            }
            v9 = *(_DWORD *)(a1 + 128);
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < v9 );
        }
        else
        {
          if ( *(_DWORD *)(a1 + 136) )
          {
            do
            {
              v8 = ExpInterlockedPopEntrySList(v5);
              if ( !v8 )
                break;
              if ( a3 )
                StorFreeContiguousIoResources(v6, (__int64)v8);
              else
                ExFreePoolWithTag(v8, 0x53526152u);
              LODWORD(v7) = v7 + 1;
            }
            while ( (unsigned int)v7 < *(_DWORD *)(a1 + 136) );
          }
          v9 = *(_DWORD *)(a1 + 128);
        }
        *(_DWORD *)(a1 + 136) = 0;
        if ( v9 )
        {
          v11 = 0LL;
          do
          {
            ExFreePoolWithTag(*(PVOID *)(v5->Alignment + 8 * v11), 0x53526152u);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *(_DWORD *)(a1 + 128) );
          ExFreePoolWithTag((PVOID)v5->Alignment, 0x53526152u);
          *(_DWORD *)(a1 + 128) = 0;
        }
        v12 = *(struct _IO_WORKITEM **)(a1 + 288);
        if ( v12 )
        {
          IoFreeWorkItem(v12);
          *(_QWORD *)(a1 + 288) = 0LL;
        }
      }
    }
  }
}
