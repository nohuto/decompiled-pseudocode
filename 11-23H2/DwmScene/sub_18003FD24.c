/*
 * XREFs of sub_18003FD24 @ 0x18003FD24
 * Callers:
 *     sub_18003F9C4 @ 0x18003F9C4 (sub_18003F9C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18003164C @ 0x18003164C (sub_18003164C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003FD24(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r8

  sub_180012440((_QWORD *)a1, a2);
  sub_18001246C((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 72) = 1;
  sub_18003164C((_DWORD *)(a1 + 76), 0LL, v6);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_180013348(a2);
  return a1;
}
