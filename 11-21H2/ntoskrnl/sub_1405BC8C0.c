/*
 * XREFs of sub_1405BC8C0 @ 0x1405BC8C0
 * Callers:
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_14045D8D2 @ 0x14045D8D2 (sub_14045D8D2.c)
 *     sub_1405BC2C4 @ 0x1405BC2C4 (sub_1405BC2C4.c)
 *     sub_1405BC9E8 @ 0x1405BC9E8 (sub_1405BC9E8.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_1405BC8C0(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned int *a3,
        int *a4,
        int a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  ULONG_PTR v8; // r9
  ULONG_PTR BugCheckParameter4; // rax

  v5 = BugCheckParameter1 + 16;
  v6 = *a4;
  if ( a5 )
    v5 = BugCheckParameter1;
  if ( *a3 == v6 )
  {
    v8 = *((_QWORD *)a3 + 1);
    BugCheckParameter4 = *((_QWORD *)a4 + 1);
  }
  else
  {
    v8 = *a3;
    BugCheckParameter4 = v6;
  }
  KeBugCheckEx(0x1Au, v5, (unsigned int)BugCheckParameter2, v8, BugCheckParameter4);
}
