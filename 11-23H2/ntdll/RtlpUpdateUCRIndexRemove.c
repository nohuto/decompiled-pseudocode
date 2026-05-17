/*
 * XREFs of RtlpUpdateUCRIndexRemove @ 0x180046664
 * Callers:
 *     RtlpRemoveUCRBlock @ 0x1800465E0 (RtlpRemoveUCRBlock.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 */

void __fastcall RtlpUpdateUCRIndexRemove(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 *v6; // rax

  v3 = *(__int64 **)(a1 + 320);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 + 2);
    v5 = *(_QWORD *)(a2 + 40) >> 12;
    while ( v5 >= v4 )
    {
      v6 = (__int64 *)*v3;
      if ( !*v3 )
      {
        LODWORD(v5) = *((_DWORD *)v3 + 2) - 1;
        break;
      }
      v3 = (__int64 *)*v3;
      v4 = *((unsigned int *)v6 + 2);
    }
    RtlpHeapRemoveListEntry(a1, (_DWORD)v3, 0, a2, v5, *(_QWORD *)(a2 + 40));
  }
}
