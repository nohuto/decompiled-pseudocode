/*
 * XREFs of sub_1405C8ECC @ 0x1405C8ECC
 * Callers:
 *     sub_1405C7D34 @ 0x1405C7D34 (sub_1405C7D34.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405C8ECC(__int64 a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  int v9; // r10d
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // ecx
  _DWORD v13[6]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-30h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]

  v9 = -1;
  if ( dword_140C0B8AC == -1 )
    return 0;
  if ( a5 != -1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = a5 + sub_14029394C(PerformanceCounter.QuadPart - *a6, qword_140D069F8, 0x989680uLL);
  }
  if ( (DWORD2(xmmword_140D06900) & 0x4000000) != 0 )
  {
    v13[1] = a3;
    v12 = a4 | 4;
    v13[2] = a2;
    v13[3] = a5;
    v13[4] = v9;
    if ( a5 != -1 )
      v12 = a4;
    v15 = 20;
    v16 = 0;
    v13[0] = v12;
    v14 = v13;
    sub_14035EDE4((__int64)&v14, 1u, 0x44000000u, 0x123Cu, 0x602u);
  }
  return 1;
}
