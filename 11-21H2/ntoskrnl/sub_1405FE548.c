/*
 * XREFs of sub_1405FE548 @ 0x1405FE548
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_1405554B0 @ 0x1405554B0 (sub_1405554B0.c)
 *     sub_140A84950 @ 0x140A84950 (sub_140A84950.c)
 *     sub_140A8682C @ 0x140A8682C (sub_140A8682C.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *sub_1405FE548()
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *result; // rax

  if ( dword_140C1AE0C )
  {
    dword_140C1AE0C = 0;
    for ( i = stru_140D57590.Flink; &stru_140D57590 != i; i = i->Flink )
    {
      Flink = i[1].Flink;
      if ( Flink )
      {
        result = i[3].Flink;
        Flink->Blink = result;
      }
    }
  }
  return result;
}
