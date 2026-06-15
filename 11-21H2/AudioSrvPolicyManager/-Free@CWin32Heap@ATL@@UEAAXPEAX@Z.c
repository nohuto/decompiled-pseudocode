/*
 * XREFs of ?Free@CWin32Heap@ATL@@UEAAXPEAX@Z @ 0x180040E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CWin32Heap::Free(HANDLE *this, void *a2)
{
  if ( a2 )
    HeapFree(this[1], 0, a2);
}
