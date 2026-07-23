/*
 * XREFs of sub_140842F74 @ 0x140842F74
 * Callers:
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ED1D8 @ 0x1407ED1D8 (sub_1407ED1D8.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 *     sub_14084388C @ 0x14084388C (sub_14084388C.c)
 *     sub_140843CD4 @ 0x140843CD4 (sub_140843CD4.c)
 */

__int64 __fastcall sub_140842F74(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // eax
  int v8; // eax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]

  v12 = 0;
  v13 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = sub_140843CD4(a1, a2, &v13, &v12);
  if ( !v4 )
    goto LABEL_9;
  v5 = v13;
  v6 = v12;
  v7 = sub_140792CCC(v13, v12, 36868);
  if ( !v7 )
  {
LABEL_10:
    sub_1406E0C3C(1LL, (__int64)"SdbReadEntryInformation");
    return 0;
  }
  v4 = sub_1407ED29C(v5, v7, (__int64)&v14, 0x10u);
  if ( !v4 )
  {
LABEL_9:
    sub_1406E0C3C(1LL, (__int64)"SdbReadEntryInformation");
    return v4;
  }
  if ( !(unsigned int)sub_1407ED1D8(v5, (char *)&v15 + 8) )
    goto LABEL_10;
  v8 = sub_14084388C(&v14, &v15);
  LODWORD(v15) = v8 != 0 ? v15 : 0;
  DWORD1(v15) = sub_140792CCC(v5, v6, 28687);
  if ( a3 )
  {
    v9 = v15;
    *(_OWORD *)a3 = v14;
    v10 = v16;
    *(_OWORD *)(a3 + 16) = v9;
    *(_QWORD *)(a3 + 32) = v10;
  }
  return 1;
}
