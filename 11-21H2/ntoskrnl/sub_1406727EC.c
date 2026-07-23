/*
 * XREFs of sub_1406727EC @ 0x1406727EC
 * Callers:
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_140672A1C @ 0x140672A1C (sub_140672A1C.c)
 *     sub_140672A64 @ 0x140672A64 (sub_140672A64.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 */

__int64 __fastcall sub_1406727EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r9
  unsigned int v7; // edx
  __int64 v8; // r8
  int v9; // edx
  unsigned __int8 i; // dl
  int v12; // ecx
  __int64 v13; // rax
  __int16 v14; // ax
  __int128 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (_DWORD)a1 )
  {
    v12 = a1 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_3;
      v13 = sub_140672A64(2LL);
    }
    else
    {
      v13 = sub_140672A64(1LL);
    }
    v3 = *(_QWORD *)(v13 + 56);
    v4 = sub_140672A1C(1LL, &v20);
    goto LABEL_3;
  }
  v3 = qword_140D07160;
  v4 = sub_140672A1C(a1, &v20);
  if ( *(_QWORD *)(v6 + 1408) )
  {
    v14 = *(_WORD *)(v6 + 2412);
    if ( v14 == 332 || v14 == 452 )
      v5 = sub_140672A1C(1LL, &v21);
  }
LABEL_3:
  if ( a2 )
  {
    v16 = *(_OWORD *)(a2 + 336);
    v17 = *(_QWORD *)(a2 + 352);
    v18 = *(_OWORD *)(a2 + 464);
    v19 = *(_QWORD *)(a2 + 480);
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
  }
  if ( *(_DWORD *)v3 != 240 )
    return 3221225561LL;
  *(_QWORD *)(v3 + 16) = off_140D3B180[0][7];
  v7 = sub_140672A7C(v6);
  if ( !v7 )
    v7 = 1;
  v8 = sub_140672A64(v7);
  *(_QWORD *)(v3 + 8) = off_140D3B180[v9][7];
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v3 + 8LL * i + 24) = *(_QWORD *)(v8 + 8LL * i);
  *(_DWORD *)(v3 + 152) = sub_140363220(1);
  *(_DWORD *)(v3 + 156) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v3 + 156) |= 1u;
  }
  *(_OWORD *)(v3 + 160) = v16;
  *(_QWORD *)(v3 + 176) = v17;
  *(_OWORD *)(v3 + 216) = v18;
  *(_QWORD *)(v3 + 232) = v19;
  *(_QWORD *)(v3 + 184) = v4;
  *(_QWORD *)(v3 + 192) = v20;
  *(_QWORD *)(v3 + 200) = v5;
  *(_QWORD *)(v3 + 208) = v21;
  return 0LL;
}
