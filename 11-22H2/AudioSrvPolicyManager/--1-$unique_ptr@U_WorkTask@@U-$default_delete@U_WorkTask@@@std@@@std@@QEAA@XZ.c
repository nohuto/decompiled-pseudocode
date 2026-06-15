/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x180020394
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800228D0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x18004A2A4 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800210F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
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
