/*
 * XREFs of sub_1C007AF40 @ 0x1C007AF40
 * Callers:
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C00560B8 @ 0x1C00560B8 (sub_1C00560B8.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 */

__int64 __fastcall sub_1C007AF40(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  int v5; // r12d
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  _WORD *v9; // rbx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // r15
  __int64 v14; // r8
  __int64 v15; // rbx
  char v18[8]; // [rsp+30h] [rbp-38h] BYREF
  char v19[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v21; // [rsp+48h] [rbp-20h] BYREF
  _WORD *v22; // [rsp+50h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-10h] BYREF
  __int16 v24; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+58h] BYREF
  int v27; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(int **)a1;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v20 = 0LL;
  v5 = 4;
  v21 = 0LL;
  sub_1C007D404(v2, a2 + 40, a2 + 48);
  v7 = *(unsigned __int16 *)(a2 + 24);
  if ( !(_WORD)v7 )
  {
    v7 = *(unsigned __int16 *)(a1 + 28);
    *(_WORD *)(a2 + 24) = v7;
  }
  LOBYTE(v6) = 2;
  v8 = sub_1C007CEAC(*(_QWORD *)a1, v6, v7, 512, (__int64)&v20, (__int64)&v21);
  if ( v8 >= 0 )
  {
    sub_1C0055B44(v2, v20, &v22, &v26);
    if ( v26 >= 8 )
    {
      v25 = *(_WORD *)(a2 + 24);
      sub_1C007A4E8((char *)&v25, 2u);
      v9 = v22;
      v27 = v10;
      *v22 = v25;
      sub_1C007A4E8((char *)&v27, 4u);
      v11 = v20;
      *((_DWORD *)v9 + 1) = v27;
      v8 = sub_1C007D14C(v2, v11, v12, 0LL);
    }
    else
    {
      v8 = -1073741789;
    }
  }
  if ( v8 >= 0 )
  {
    v13 = v21;
    while ( 1 )
    {
      sub_1C0055B8C(v2, "ResetStack", 0, 0, 0LL, 0LL);
      v8 = sub_1C00557CC((__int64)v2, v13, v14);
      if ( v8 < 0 )
        break;
      sub_1C0055B44(v2, v13, &v23, &v26);
      if ( v26 < 0x10 )
        goto LABEL_19;
      v15 = v23;
      *(_DWORD *)v18 = *(_DWORD *)(v23 + 4);
      sub_1C007A4E8(v18, 4u);
      if ( *(_DWORD *)v18 != 2 )
        goto LABEL_19;
      v24 = *(_WORD *)(v15 + 10);
      sub_1C007A4E8((char *)&v24, 2u);
      if ( v24 == 4 )
      {
        *(_DWORD *)v19 = *(_DWORD *)(v15 + 12);
        sub_1C007A4E8(v19, 4u);
        if ( !*(_DWORD *)v19 )
        {
          v8 = 0;
LABEL_18:
          _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
          break;
        }
LABEL_19:
        v8 = -1073741435;
        break;
      }
      if ( v24 )
        goto LABEL_19;
      v8 = 259;
      sub_1C00560B8(v2, v13);
      if ( !v5-- )
        goto LABEL_18;
    }
  }
  sub_1C007D404(v2, &v20, &v21);
  return (unsigned int)v8;
}
