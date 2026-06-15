/*
 * XREFs of ??_G?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1800415F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`scalar deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *lpMem = &wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
