/*
 * XREFs of sub_14082F8AC @ 0x14082F8AC
 * Callers:
 *     sub_14082F3C4 @ 0x14082F3C4 (sub_14082F3C4.c)
 *     sub_140B132D0 @ 0x140B132D0 (sub_140B132D0.c)
 *     sub_140B13578 @ 0x140B13578 (sub_140B13578.c)
 *     sub_140B13964 @ 0x140B13964 (sub_140B13964.c)
 *     sub_140B13B7C @ 0x140B13B7C (sub_140B13B7C.c)
 *     sub_140B143B0 @ 0x140B143B0 (sub_140B143B0.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall sub_14082F8AC(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, ULONG_PTR a3, unsigned int *a4, _DWORD *a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  P[0] = 0LL;
  v8[0] = 0;
  if ( !sub_1407C46A0(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
