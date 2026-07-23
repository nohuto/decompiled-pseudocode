/*
 * XREFs of sub_14080F66C @ 0x14080F66C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x14080F640 (FsRtlSetDriverBacking.c)
 * Callees:
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14080F6C8 @ 0x14080F6C8 (sub_14080F6C8.c)
 */

__int64 __fastcall sub_14080F66C(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rsi
  struct _KTHREAD *v3; // rdi
  unsigned int v4; // ebx

  v2 = sub_1402FDA80(BugCheckParameter2, 1);
  if ( !v2 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = sub_1406F5B50();
  v4 = sub_14080F6C8(v2);
  sub_1406F5AF0((__int64)v3);
  return v4;
}
