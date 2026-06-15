/*
 * XREFs of ??_ECThreadPool@@UEAAPEAXI@Z @ 0x180041B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CThreadPool *__fastcall CThreadPool::`vector deleting destructor'(CThreadPool *this, char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CThreadPool::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
