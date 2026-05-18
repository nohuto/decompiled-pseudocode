/*
 * XREFs of ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x1800FAC50
 * Callers:
 *     j_?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x1800F6184 (j_-IsContext@WorkItem@details@Concurrency@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::WorkItem::IsContext(Concurrency::details::WorkItem *this)
{
  return *(_DWORD *)this == 1;
}
