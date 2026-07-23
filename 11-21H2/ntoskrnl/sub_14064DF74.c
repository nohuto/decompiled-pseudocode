/*
 * XREFs of sub_14064DF74 @ 0x14064DF74
 * Callers:
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14064D9B4 @ 0x14064D9B4 (sub_14064D9B4.c)
 *     sub_14064DB50 @ 0x14064DB50 (sub_14064DB50.c)
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 *     sub_14064E684 @ 0x14064E684 (sub_14064E684.c)
 */

__int64 __fastcall sub_14064DF74(unsigned int a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // ebp
  __int64 v7; // rsi
  int v9; // edx
  unsigned __int64 *v10; // r14
  __int64 v11; // r8
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  __int64 v15; // r8
  int v16; // r15d
  int v17; // edx
  __int64 v18; // r8
  __int16 v19; // cx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rbx
  int v23; // edx
  int v24; // edx
  __int16 v25; // cx
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // r12
  int v29; // r13d
  __int64 v30; // r8
  __int64 result; // rax
  int v32; // [rsp+20h] [rbp-F8h] BYREF
  int v33; // [rsp+24h] [rbp-F4h]
  __int64 v34; // [rsp+28h] [rbp-F0h]
  unsigned int v35; // [rsp+30h] [rbp-E8h]
  _DWORD v36[2]; // [rsp+38h] [rbp-E0h] BYREF
  char *v37; // [rsp+40h] [rbp-D8h]
  __int64 v38; // [rsp+48h] [rbp-D0h]
  char v39; // [rsp+50h] [rbp-C8h] BYREF

  v6 = qword_140C4EF78;
  v7 = a1;
  v36[1] = 0;
  v33 = a2;
  v38 = a5;
  v32 = qword_140C4EF78;
  v9 = dword_140C0B2E0[18 * a1 + 1];
  v10 = (unsigned __int64 *)a3;
  qword_140D04CA8 = (__int64)&v32;
  sub_14064DC1C(&stru_140C5A7D0.Length, v9, a3, a1);
  sub_14064DC1C(&stru_140C5A7E0.Length, dword_140C0B2E0[18 * v7 + 1], v11, (unsigned int)v7);
  v12 = dword_140C0B2E0[18 * v7 + 11];
  LODWORD(qword_140C4EF78) = v6;
  HIDWORD(qword_140C4EF78) = v12 + dword_140C4EF80;
  v14 = dword_140C0B2E0[18 * v7];
  dword_140C4EF80 += v12 + v12;
  v13 = dword_140C4EF80;
  sub_14064DC1C(&stru_140C5A720.Length, v14, v15, (unsigned int)v7);
  v16 = v13 + dword_140C0B2E0[18 * v7 + 11];
  HIDWORD(qword_140C4EF78) = v13;
  LODWORD(qword_140C4EF78) = v6;
  v17 = dword_140C0B2E0[18 * v7];
  dword_140C4EF80 = v16;
  sub_14064DC1C(&stru_140C5A7C0.Length, v17, v18, (unsigned int)v7);
  sub_14064DB50(v19, dword_140C0B2E0[18 * v7]);
  sub_14064DC1C((unsigned __int16 *)(a5 + 16), dword_140C0B2E0[18 * v7], v20, (unsigned int)v7);
  v22 = 0LL;
  if ( a4 )
  {
    v23 = dword_140C0B2E0[18 * v7 + 11];
    LODWORD(qword_140C4EF78) = v6;
    dword_140C4EF80 = v16 + v23;
    v24 = dword_140C0B2E0[18 * v7];
    HIDWORD(qword_140C4EF78) = v16;
    sub_14064DC1C(&stru_140C5A7B0.Length, v24, v21, (unsigned int)v7);
    sub_14064DB50(v25, dword_140C0B2E0[18 * v7]);
    v36[0] = 0x800000;
    v37 = &v39;
    sub_14064E684(a4, v36);
    sub_14064DC1C((unsigned __int16 *)v36, dword_140C0B2E0[18 * v7], v26, (unsigned int)v7);
  }
  v27 = 4LL;
  v34 = qword_140C4EF78;
  v28 = v38;
  v29 = v33;
  v35 = dword_140C4EF80;
  qword_140C4EF78 = 0LL;
  dword_140C4EF80 = 0;
  do
  {
    sub_14064D9B4(*v10, v22 + v28 + 32);
    if ( byte_140D04CB8 || (a6 & 8) != 0 && v29 == 317 )
    {
      sub_14064DC1C((unsigned __int16 *)(v22 + v28 + 32), dword_140C0B2E0[18 * v7], v30, (unsigned int)v7);
      LODWORD(qword_140C4EF78) = 0;
      HIDWORD(qword_140C4EF78) = dword_140C4EF80;
    }
    v22 += 16LL;
    ++v10;
    --v27;
  }
  while ( v27 );
  result = v35;
  qword_140D04CA8 = 0LL;
  qword_140C4EF78 = v34;
  dword_140C4EF80 = v35;
  return result;
}
