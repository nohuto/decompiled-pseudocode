/*
 * XREFs of sub_1C001EB88 @ 0x1C001EB88
 * Callers:
 *     sub_1C00A2D68 @ 0x1C00A2D68 (sub_1C00A2D68.c)
 *     sub_1C00A2E7C @ 0x1C00A2E7C (sub_1C00A2E7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001EB88(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  return CurrentStackLocation->Parameters.Create.Options < (IoIs32bitProcess(a1) != 0 ? 44 : 56) ? 0xC0000023 : 0;
}
