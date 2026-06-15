/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x180031C88
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$6 @ 0x180046316 (_QueueGenericWorkItem_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
