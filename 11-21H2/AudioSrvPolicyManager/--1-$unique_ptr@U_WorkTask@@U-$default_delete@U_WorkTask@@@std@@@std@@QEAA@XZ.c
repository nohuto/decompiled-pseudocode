/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x18000F654
 * Callers:
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x180045007 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(__int64 *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>(*a1);
    operator delete(v1);
  }
}
