/*
 * XREFs of IoFreeWorkItem @ 0x1402D32E0
 * Callers:
 *     sub_1402D3290 @ 0x1402D3290 (sub_1402D3290.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( *(_QWORD *)IoWorkItem )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)IoWorkItem + 32, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
