/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18000510C
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180002AE0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180002B30 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
