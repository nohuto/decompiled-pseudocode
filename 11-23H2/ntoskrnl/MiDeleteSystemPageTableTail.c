/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x140340B30
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiFreeUnmappedPageTables @ 0x140340BE0 (MiFreeUnmappedPageTables.c)
 *     MiReturnSystemCharges @ 0x140340C88 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  unsigned int *v1; // rdi
  int *v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // rbx
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v1 = *(unsigned int **)(a1 + 168);
  memset(v7, 0, sizeof(v7));
  v9 = 0LL;
  v3 = (int *)*((_QWORD *)v1 + 2);
  v8 = 0LL;
  MiFlushTbList(v3);
  v4 = *((_QWORD *)v1 + 1);
  if ( v4 )
  {
    MiFreeUnmappedPageTables(v4, v7);
    *((_QWORD *)v1 + 1) = 0LL;
    if ( (_QWORD)v8 )
    {
      if ( qword_140C6F9D8 )
      {
        v6 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v6, v8 - *((_QWORD *)&v7[0] + 1));
        MiReturnSystemCharges(v6, v8, *v1);
      }
    }
  }
  return 0LL;
}
