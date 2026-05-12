/*
 * XREFs of sub_1C0006B40 @ 0x1C0006B40
 * Callers:
 *     sub_1C0006A3C @ 0x1C0006A3C (sub_1C0006A3C.c)
 *     sub_1C0022A14 @ 0x1C0022A14 (sub_1C0022A14.c)
 * Callees:
 *     sub_1C0001008 @ 0x1C0001008 (sub_1C0001008.c)
 */

union _SLIST_HEADER *__fastcall sub_1C0006B40(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *Alignment; // rbx
  union _SLIST_HEADER *v3; // rsi
  PSLIST_ENTRY EntrySList; // rax

  Alignment = (union _SLIST_HEADER *)a1[9].Alignment;
  if ( Alignment == &a1[9] )
  {
    v3 = a1 + 7;
    Alignment = 0LL;
    if ( !ExQueryDepthSList(a1 + 7) )
      sub_1C0001008(a1);
    if ( ExQueryDepthSList(v3) )
    {
      EntrySList = FirstEntrySList(v3);
      if ( EntrySList )
        return (union _SLIST_HEADER *)(&EntrySList[-1].Next + 1);
    }
  }
  return Alignment;
}
