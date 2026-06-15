/*
 * XREFs of ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x180040CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ATL::CAtlStringMgr *__fastcall ATL::CAtlStringMgr::`scalar deleting destructor'(ATL::CAtlStringMgr *this, char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &ATL::CAtlStringMgr::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
