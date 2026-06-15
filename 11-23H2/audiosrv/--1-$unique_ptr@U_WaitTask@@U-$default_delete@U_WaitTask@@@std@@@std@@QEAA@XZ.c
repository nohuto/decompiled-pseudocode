/*
 * XREFs of ??1?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ @ 0x1800D574C
 * Callers:
 *     _CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor$2 @ 0x180078D40 (_CSerialWorkQueue--QueueWaitItemInternal_--_1_--dtor$2.c)
 * Callees:
 *     ??1_WaitTask@@QEAA@XZ @ 0x1800140DC (--1_WaitTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<_WaitTask>::~unique_ptr<_WaitTask>(PTP_WAIT **a1)
{
  PTP_WAIT *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    _WaitTask::~_WaitTask(*a1);
    operator delete(v1);
  }
}
