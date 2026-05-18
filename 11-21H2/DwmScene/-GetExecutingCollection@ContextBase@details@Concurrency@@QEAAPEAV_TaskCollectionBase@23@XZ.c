/*
 * XREFs of ?GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ @ 0x1800465E4
 * Callers:
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 * Callees:
 *     <none>
 */

struct Concurrency::details::_TaskCollectionBase *__fastcall Concurrency::details::ContextBase::GetExecutingCollection(
        Concurrency::details::ContextBase *this)
{
  return (struct Concurrency::details::_TaskCollectionBase *)*((_QWORD *)this + 12);
}
