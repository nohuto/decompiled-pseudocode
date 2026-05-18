/*
 * XREFs of sub_180044A54 @ 0x180044A54
 * Callers:
 *     sub_18004420C @ 0x18004420C (sub_18004420C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180044A54(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  volatile __int32 *v7; // rax
  __int32 v8; // edx
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = a2;
  sub_1800129F4((__int64 *)a1, a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  LODWORD(v11) = 0;
  sub_180030724((unsigned int *)&v11);
  v7 = (volatile __int32 *)sub_18001DE70(a1 + 76);
  _InterlockedExchange(v7, v8);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 >= 8 )
    sub_180010884(*(char **)a2, 2 * v9 + 2);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  return a1;
}
