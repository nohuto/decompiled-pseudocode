/*
 * XREFs of sub_1800E39FC @ 0x1800E39FC
 * Callers:
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800E519C @ 0x1800E519C (sub_1800E519C.c)
 */

__int64 __fastcall sub_1800E39FC(__int64 a1, int a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  int v6; // edi
  _DWORD *v8; // rax
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 12) = 1;
  *(_DWORD *)(a1 + 16) = sub_1800E519C(a4, a6);
  v8 = v10;
  do
    *v8++ = v6++;
  while ( v6 < 4 );
  *(_DWORD *)(a1 + 20) = v10[a5];
  if ( (unsigned int)(a5 - 2) <= 1 )
  {
    *(_DWORD *)(a1 + 28) |= 0x10000u;
    if ( a5 == 3 )
      *(_DWORD *)(a1 + 28) |= 0x20000u;
  }
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 24) |= 8u;
  return a1;
}
