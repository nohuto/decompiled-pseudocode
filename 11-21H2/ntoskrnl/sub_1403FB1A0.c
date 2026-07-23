/*
 * XREFs of sub_1403FB1A0 @ 0x1403FB1A0
 * Callers:
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 *     sub_140656BC4 @ 0x140656BC4 (sub_140656BC4.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1403FB1A0(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  _misaligned_access();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
