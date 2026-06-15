/*
 * XREFs of ??1?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ @ 0x1800D2B68
 * Callers:
 *     _CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor$2 @ 0x1800D3B01 (_CSerialWorkQueue--QueueWaitItemInternal_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1_WaitTask@@QEAA@XZ @ 0x1800D2D70 (--1_WaitTask@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<_WaitTask>::~unique_ptr<_WaitTask>(_WaitTask **a1)
{
  _WaitTask *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    _WaitTask::~_WaitTask(*a1);
    operator delete(v1);
  }
}
