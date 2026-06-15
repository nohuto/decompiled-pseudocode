/*
 * XREFs of ??_ECGenericWorkItem@@UEAAPEAXI@Z @ 0x180031CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

CGenericWorkItem *__fastcall CGenericWorkItem::`vector deleting destructor'(CGenericWorkItem *this, char a2)
{
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)this + 8);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
