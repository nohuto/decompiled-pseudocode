/*
 * XREFs of sub_140407280 @ 0x140407280
 * Callers:
 *     sub_140407670 @ 0x140407670 (sub_140407670.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012E4 @ 0x1404012E4 (sub_1404012E4.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140407280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rdi
  _DWORD *v18; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+60h] [rbp-B8h]
  __int64 v23[8]; // [rsp+80h] [rbp-98h] BYREF

  memset(v23, 0, sizeof(v23));
  v18 = *(_DWORD **)(a1 + 616);
  v10 = (unsigned int)sub_140401368((__int64)v18);
  v11 = v23;
  v12 = 8LL;
  do
  {
    a6 += v10;
    *v11 = sub_140400F4C();
    a7 -= v10;
    ++v11;
    --v12;
  }
  while ( v12 );
  v22 = *(unsigned int *)(a1 + 36);
  sub_1404011D4(v18, a2 + 32);
  sub_1404011D4(v18, v22 + a2 + 32);
  sub_1404011D4(v18, (unsigned int)(3 * v22) + a2 + 32);
  sub_1404011D4(v18, *(_QWORD *)(a1 + 640));
  v13 = v23[3];
  sub_1404011D4(v18, (unsigned int)(2 * v22) + a2 + 32);
  v14 = v23[4];
  sub_140400EB4(v18, a2 + 32);
  v15 = v23[5];
  sub_140400EB4(v18, a3 + 32);
  sub_1404011D4(v18, v14);
  sub_1404012E4(v18, v14);
  sub_1404012E4(v18, v14);
  sub_1404012E4(v18, v13);
  v16 = v23[6];
  sub_140400EB4(v18, v13);
  sub_1404011D4(v18, *(_QWORD *)(a1 + 632));
  sub_1404012E4(v18, v23[1]);
  sub_1404011D4(v18, v14);
  sub_1404011D4(v18, v16);
  sub_1404011D4(v18, v14);
  return sub_1404011D4(v18, v15);
}
