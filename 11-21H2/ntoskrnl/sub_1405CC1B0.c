/*
 * XREFs of sub_1405CC1B0 @ 0x1405CC1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1405CC1B0(__int64 a1, __int64 a2)
{
  KeBugCheckEx(0x9Fu, 5uLL, *(_QWORD *)(a2 - 976 + 96), a2 - 976, 0LL);
}
