/*
 * XREFs of ?SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z @ 0x1800474EC
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ContextBase::SetExecutingCollection(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *a2)
{
  *((_QWORD *)this + 12) = a2;
}
