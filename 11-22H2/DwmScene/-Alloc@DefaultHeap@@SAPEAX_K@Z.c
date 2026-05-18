/*
 * XREFs of ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18001C150
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall DefaultHeap::Alloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
