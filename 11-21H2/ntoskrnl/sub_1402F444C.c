/*
 * XREFs of sub_1402F444C @ 0x1402F444C
 * Callers:
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 * Callees:
 *     sub_14022E3B0 @ 0x14022E3B0 (sub_14022E3B0.c)
 *     sub_14025CB30 @ 0x14025CB30 (sub_14025CB30.c)
 *     sub_1402F472C @ 0x1402F472C (sub_1402F472C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlLocateSupervisorFeature @ 0x1405EC610 (RtlLocateSupervisorFeature.c)
 */

_OWORD *__fastcall sub_1402F444C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char *v3; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  _QWORD *v15; // rbx
  _QWORD *v16; // r13
  __int64 v17; // r11
  _OWORD *result; // rax
  unsigned __int64 v19; // rdx
  char *v20; // rax
  _QWORD *v21; // [rsp+30h] [rbp-528h]
  _BYTE v22[48]; // [rsp+40h] [rbp-518h] BYREF
  int v23; // [rsp+70h] [rbp-4E8h]
  __int16 v24; // [rsp+78h] [rbp-4E0h]
  __int16 v25; // [rsp+82h] [rbp-4D6h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v5 = (v2 - (unsigned int)dword_140D050FC) & 0xFFFFFFFFFFFFFFC0uLL;
  v7 = v5;
  if ( (_DWORD)dword_140D06A10 )
    *(_QWORD *)(a1 + 1112) = v5 + MEMORY[0xFFFFF78000000718];
  v8 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a1 + 1064) & 0x40000;
  if ( v8 )
    v5 = *(_QWORD *)(a1 + 96);
  v9 = (_QWORD *)(v7 - 80);
  memset(v9, 0, v2 - (_QWORD)v9);
  *v9 = v2;
  v9[1] = v2 - (unsigned int)dword_140D05050;
  *(_DWORD *)(v5 + 24) = 8064;
  if ( a2[4] )
  {
    v11 = 9LL;
    v12 = v22;
    v13 = (_OWORD *)a2[4];
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v23 = v23 & 6 | 0x100001;
    v15 = v9 - 90;
    v21 = v9 - 50;
    v24 = 51;
    v16 = v9 - 98;
    v25 = 43;
    memset(v9 - 90, 0, 0x140uLL);
    memset(v9 - 50, 0, 0x190uLL);
    *((_BYTE *)v9 - 357) = 1;
    sub_14022E3B0((__int64)(v9 - 50), (__int64)(v9 - 90), (__int64)v22, v23, 1);
    *v15 = a2[3];
    v15[1] = a2[2];
    v15[2] = a2[1];
    v15[39] = &loc_140424830;
    *(v9 - 91) = &loc_1404248A0;
    *(_WORD *)v5 = 639;
    *((_DWORD *)v9 - 89) = 8064;
    if ( (qword_140D068D8 & 0x800000) != 0 )
      *(_QWORD *)(v5 + 512) = 1LL;
    LOBYTE(v10) = 0;
  }
  else
  {
    v16 = v9 - 14;
    *(v9 - 6) = a2[3];
    LOBYTE(v10) = 1;
    *(v9 - 5) = a2[2];
    *(v9 - 4) = a2[1];
    *(v9 - 7) = sub_1404244D0;
    v21 = 0LL;
    *(v9 - 1) = 0LL;
  }
  *(_BYTE *)(a1 + 562) = sub_1402F472C(a1, v10, v8);
  result = v21 + 16;
  *((_BYTE *)v16 + 40) = 1;
  v16[6] = v21 + 16;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    result = (_OWORD *)MEMORY[0xFFFFF780000003EC];
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v19 = 0x8000000000000003uLL;
      *(_QWORD *)(v5 + 520) = 0x8000000000000003uLL;
      if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
      {
        if ( (*(_DWORD *)(v17 + 48) & 0x100040) == 0x100040 )
        {
          v20 = sub_14025CB30((_DWORD *)(v17 + 1232), 0xBu, 0xFFFFF780000003D8uLL, 0LL);
          v19 = *(_QWORD *)(v5 + 520);
          v3 = v20;
        }
        *(_QWORD *)(v5 + 512) |= 0x800uLL;
        *(_QWORD *)(v5 + 520) = v19 | 0x800;
        result = RtlLocateSupervisorFeature((PXSAVE_AREA_HEADER)(v5 + 512), 0xBu, 0LL);
        *result = *(_OWORD *)v3;
      }
    }
  }
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 88) = v16;
  *(_QWORD *)(a1 + 96) = v5;
  return result;
}
