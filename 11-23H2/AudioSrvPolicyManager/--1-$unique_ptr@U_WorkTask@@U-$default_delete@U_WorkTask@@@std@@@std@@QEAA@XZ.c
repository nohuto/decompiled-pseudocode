/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x1800201A4
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800226E0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x180048E14 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x180020F04 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(_WorkTask **a1, unsigned int a2)
{
  _WorkTask *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return _WorkTask::`scalar deleting destructor'(v2, a2);
  return result;
}
