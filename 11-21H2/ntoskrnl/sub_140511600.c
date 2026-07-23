/*
 * XREFs of sub_140511600 @ 0x140511600
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     sub_140504A84 @ 0x140504A84 (sub_140504A84.c)
 *     sub_140504BA4 @ 0x140504BA4 (sub_140504BA4.c)
 *     sub_140504CA8 @ 0x140504CA8 (sub_140504CA8.c)
 *     sub_140519B94 @ 0x140519B94 (sub_140519B94.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_140511600(PDMA_ADAPTER DmaAdapter, __int64 a2, volatile signed __int32 *a3)
{
  char v5; // al
  __int64 v6; // rcx

  _m_prefetchw((const void *)(a3 + 2));
  v5 = _InterlockedOr(a3 + 2, 2u);
  if ( (v5 & 1) == 0 && (v5 & 4) != 0 )
  {
    if ( sub_140504CA8((__int64)DmaAdapter, (_QWORD *)a3 + 2) )
      return 1;
    if ( sub_140504BA4((__int64)DmaAdapter, &DmaAdapter[37].Version)
      || sub_140504A84((__int64)DmaAdapter)
      || !HIBYTE(DmaAdapter[27].Version) && (unsigned __int8)sub_140519B94(DmaAdapter) )
    {
      *(_DWORD *)&DmaAdapter[15].Version = 0;
      IoFreeAdapterChannel(DmaAdapter);
      v6 = *((_QWORD *)a3 + 11);
      if ( v6 )
      {
        if ( (*(_DWORD *)v6 & 1) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v6 + 160), 0);
          *((_QWORD *)a3 + 11) = 0LL;
        }
      }
      return 1;
    }
  }
  return 0;
}
