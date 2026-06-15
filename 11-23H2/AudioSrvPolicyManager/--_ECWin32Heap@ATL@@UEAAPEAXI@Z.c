/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x1800453D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 *     ??1CWin32Heap@ATL@@UEAA@XZ @ 0x180015EB8 (--1CWin32Heap@ATL@@UEAA@XZ.c)
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  ATL::CWin32Heap::~CWin32Heap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
