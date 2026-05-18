/*
 * XREFs of ?GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ @ 0x180041434
 * Callers:
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 * Callees:
 *     <none>
 */

struct Concurrency::details::_TaskCollectionBase *__fastcall Concurrency::details::ContextBase::GetExecutingCollection(
        Concurrency::details::ContextBase *this)
{
  return (struct Concurrency::details::_TaskCollectionBase *)*((_QWORD *)this + 12);
}
