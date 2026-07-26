/*
 * XREFs of ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x1C0017560
 * Callers:
 *     NdisFreeNetBufferListPool @ 0x1C0017450 (NdisFreeNetBufferListPool.c)
 *     NdisFreeNetBufferPool @ 0x1C00AE6F0 (NdisFreeNetBufferPool.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisPplDestroyPool(char *P)
{
  struct _LOOKASIDE_LIST_EX *v1; // rdi
  unsigned int v3; // edx
  _SLIST_HEADER *v4; // rbx
  __int64 v5; // rbp
  PSLIST_ENTRY v6; // rcx

  if ( P )
  {
    v1 = (struct _LOOKASIDE_LIST_EX *)(P + 128);
    v3 = ndisMaxNumberOfProcessors + 1;
    if ( ndisMaxNumberOfProcessors <= 1 )
      v3 = ndisMaxNumberOfProcessors;
    if ( v3 )
    {
      v4 = (_SLIST_HEADER *)(P + 256);
      v5 = v3;
      do
      {
        if ( *((_BYTE *)&v4[5].HeaderX64 + 8) )
        {
          while ( 1 )
          {
            v6 = ExpInterlockedPopEntrySList(v4);
            if ( !v6 )
              break;
            ((void (__fastcall *)(PSLIST_ENTRY, struct _LOOKASIDE_LIST_EX *))v4[-5].Region)(v6, v1);
          }
          ExDeleteLookasideListEx(v1);
        }
        v1 = (struct _LOOKASIDE_LIST_EX *)((char *)v1 + 256);
        v4 += 16;
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
