/*
 * XREFs of sub_1405F7E2C @ 0x1405F7E2C
 * Callers:
 *     sub_140238310 @ 0x140238310 (sub_140238310.c)
 *     sub_140391B70 @ 0x140391B70 (sub_140391B70.c)
 *     sub_140391B9C @ 0x140391B9C (sub_140391B9C.c)
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 * Callees:
 *     sub_14023807C @ 0x14023807C (sub_14023807C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1405F7E2C(ULONG_PTR BugCheckParameter1, int **BugCheckParameter2, int a3)
{
  int v6; // ecx

  if ( a3 == 1 )
  {
    v6 = **BugCheckParameter2;
    if ( v6 == -1073741819 || v6 == -1073740768 )
      sub_14023807C(BugCheckParameter1 + 272, 2u, 1u);
  }
  if ( BugCheckParameter2 )
    KeBugCheckEx(0x154u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, a3, 0LL);
  return 0LL;
}
