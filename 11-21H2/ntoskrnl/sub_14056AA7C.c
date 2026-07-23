/*
 * XREFs of sub_14056AA7C @ 0x14056AA7C
 * Callers:
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 *     sub_14074D580 @ 0x14074D580 (sub_14074D580.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_14056AA7C(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
