/*
 * XREFs of sub_1404076A0 @ 0x1404076A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 *     sub_1404012E4 @ 0x1404012E4 (sub_1404012E4.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1404076A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // r12
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD v21[8]; // [rsp+60h] [rbp-88h] BYREF

  memset(v21, 0, sizeof(v21));
  v9 = *(_DWORD **)(a1 + 616);
  v11 = v21;
  v12 = (unsigned int)sub_140401368((__int64)v9);
  v13 = 8LL;
  do
  {
    a5 += v12;
    *v11 = sub_140400F4C();
    a6 -= v12;
    ++v11;
    --v13;
  }
  while ( v13 );
  sub_1404012B0(v9);
  sub_1404012B0(v9);
  v14 = v21[2];
  sub_1404012B0(v9);
  sub_140400EB4(v9, v14);
  v15 = v21[3];
  sub_1404011D4(v9, *(_QWORD *)(a1 + 632));
  v16 = v21[4];
  sub_140400EB4(v9, a2 + 32);
  sub_1404012B0(v9);
  sub_1404012E4(v9, v16);
  sub_1404012E4(v9, v16);
  v17 = v21[6];
  sub_140400EB4(v9, v15);
  v18 = v21[5];
  sub_1404012E4(v9, v17);
  sub_1404012E4(v9, v15);
  sub_1404011D4(v9, v16);
  sub_1404011D4(v9, v17);
  sub_1404011D4(v9, v16);
  return sub_1404011D4(v9, v18);
}
