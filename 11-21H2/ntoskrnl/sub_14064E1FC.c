/*
 * XREFs of sub_14064E1FC @ 0x14064E1FC
 * Callers:
 *     sub_14064E408 @ 0x14064E408 (sub_14064E408.c)
 *     sub_14064E7FC @ 0x14064E7FC (sub_14064E7FC.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14064D5F4 @ 0x14064D5F4 (sub_14064D5F4.c)
 *     sub_14064DA4C @ 0x14064DA4C (sub_14064DA4C.c)
 *     sub_14064DB28 @ 0x14064DB28 (sub_14064DB28.c)
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 */

__int64 __fastcall sub_14064E1FC(unsigned int a1, unsigned int a2, __int64 a3)
{
  bool v5; // zf
  __int64 v6; // r14
  __int64 v7; // r9
  int v8; // edx
  UNICODE_STRING *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  UNICODE_STRING *v12; // rcx
  __int64 v13; // xmm0_8
  int v14; // r13d
  unsigned int v15; // ebx
  unsigned int v16; // esi
  int v17; // r12d
  int v18; // r15d
  unsigned int v19; // edi
  unsigned __int64 v21; // [rsp+48h] [rbp-29h]
  int v22; // [rsp+58h] [rbp-19h] BYREF
  int v23; // [rsp+5Ch] [rbp-15h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-11h] BYREF
  int v25; // [rsp+68h] [rbp-9h]
  __int64 v26; // [rsp+70h] [rbp-1h] BYREF
  int v27; // [rsp+78h] [rbp+7h]
  _QWORD v28[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v29; // [rsp+90h] [rbp+1Fh] BYREF

  v24 = 0LL;
  v25 = 0;
  v22 = 0;
  v5 = a1 == 1;
  v23 = 0;
  v6 = 9LL * (int)a2;
  v7 = a2;
  v8 = dword_140C0B2E0[18 * a2 + 2];
  v9 = &stru_140C5A770;
  if ( !v5 )
    v9 = &stru_140C5A790;
  sub_14064DC1C(&v9->Length, v8, a3, v7);
  v28[0] = 0x80000LL;
  v28[1] = &v29;
  sub_14064DA4C(a1, (__int64)v28);
  sub_14064DC1C((unsigned __int16 *)v28, dword_140C0B2E0[2 * v6 + 2], v10, a2);
  v12 = &stru_140C5A780;
  if ( a1 != 1 )
    v12 = &stru_140C5A7A0;
  sub_14064DC1C(&v12->Length, dword_140C0B2E0[2 * v6 + 2], v11, a2);
  v13 = qword_140C4EF78;
  v14 = dword_140C4EF80;
  v26 = qword_140C4EF78;
  v27 = dword_140C4EF80;
  if ( sub_14064DB28(&v26) )
  {
    v15 = v26;
    v16 = HIDWORD(v26);
    v24 = v26;
    v17 = *(_DWORD *)(*(_QWORD *)(qword_140C5A830 + 24) + 40LL);
    if ( qword_140D04CA8 )
      v18 = *(_DWORD *)qword_140D04CA8;
    else
      v18 = dword_140C0B2E0[2 * v6 + 8] + dword_140C0B2E0[2 * v6 + 4];
    if ( qword_140D04CB0 )
      v19 = *(_DWORD *)qword_140D04CB0;
    else
      v19 = dword_140C0B2E0[2 * v6 + 8] + dword_140C0B2E0[2 * v6 + 6] + dword_140C0B2E0[2 * v6 + 4];
    while ( sub_14064DB28(&v24) )
    {
      if ( (int)sub_14064D5F4(0x20u, (__int64 *)qword_140C5A830, v15, v16, v17, v17, &v22, &v23, v21) < 0 )
        return 0LL;
      v15 += v22;
      LODWORD(v24) = v15;
      if ( v15 > v19 )
      {
        v16 += v23;
        v15 = v18;
        v24 = __PAIR64__(v16, v18);
      }
    }
    v13 = v26;
  }
  if ( (dword_140C0DF90 & 0x1000000) == 0 )
  {
    qword_140C0DEE0 = v13;
    dword_140C0DEE8 = v14;
  }
  return 0LL;
}
