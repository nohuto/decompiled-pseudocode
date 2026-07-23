/*
 * XREFs of sub_14054EA40 @ 0x14054EA40
 * Callers:
 *     sub_14022E3B0 @ 0x14022E3B0 (sub_14022E3B0.c)
 *     sub_14029B950 @ 0x14029B950 (sub_14029B950.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_14042C940 @ 0x14042C940 (sub_14042C940.c)
 *     sub_140569380 @ 0x140569380 (sub_140569380.c)
 *     sub_140569CA0 @ 0x140569CA0 (sub_140569CA0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054EA40(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5, int a6)
{
  ULONG_PTR v7; // rdi
  __int64 result; // rax
  int v11; // ebx
  _QWORD v12[14]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3[20]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = a1;
  memset(v12, 0, 0x68uLL);
  v12[5] = a5;
  LODWORD(v12[6]) = a6;
  LODWORD(v12[1]) = v7;
  v12[2] = a2;
  v12[3] = a3;
  v12[4] = a4;
  result = sub_140358A20(2u, 269, 0, (__int64)v12);
  v11 = result;
  if ( (int)result < 0 )
  {
    memset(BugCheckParameter3, 0, 0x98uLL);
    LODWORD(BugCheckParameter3[0]) = v11;
    BugCheckParameter3[4] = 67LL;
    LODWORD(BugCheckParameter3[3]) = 7;
    BugCheckParameter3[5] = v7;
    BugCheckParameter3[6] = a2;
    BugCheckParameter3[7] = a3;
    BugCheckParameter3[8] = a4;
    BugCheckParameter3[9] = a5;
    BugCheckParameter3[10] = a6;
    KeBugCheckEx(0x139u, 0x43uLL, 0LL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  return result;
}
