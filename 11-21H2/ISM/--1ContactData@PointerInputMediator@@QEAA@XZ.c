/*
 * XREFs of ??1ContactData@PointerInputMediator@@QEAA@XZ @ 0x1800E37AC
 * Callers:
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$3 @ 0x1800E36B7 (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerInputMediator::ContactData::~ContactData(
        PointerInputMediator::ContactData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    (__int64 *)this + 1,
    a2,
    a3,
    a4);
}
