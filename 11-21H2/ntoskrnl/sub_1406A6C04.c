/*
 * XREFs of sub_1406A6C04 @ 0x1406A6C04
 * Callers:
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407A28C0 @ 0x1407A28C0 (sub_1407A28C0.c)
 * Callees:
 *     sub_1406A62C8 @ 0x1406A62C8 (sub_1406A62C8.c)
 *     sub_1406A633C @ 0x1406A633C (sub_1406A633C.c)
 *     sub_1406A6D60 @ 0x1406A6D60 (sub_1406A6D60.c)
 *     sub_1406A6ECC @ 0x1406A6ECC (sub_1406A6ECC.c)
 *     sub_1406AC298 @ 0x1406AC298 (sub_1406AC298.c)
 */

char __fastcall sub_1406A6C04(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // al
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v20 = 0LL;
  v5 = *a1;
  v6 = v2;
  v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = v6 & 3;
  if ( !v8 )
  {
    v13 = sub_1406A62C8((__int64)a1, &v20, *a1);
    if ( !v13 )
      return 0;
    v13[1] = *v13;
    *v13 = v7;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, (unsigned __int64)v13 | 1);
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    v14 = (unsigned int)v5 >> 19;
    if ( (unsigned int)v14 >= 0x80 )
      return 0;
    v15 = *(_QWORD *)(v7 + 8 * v14);
    v16 = (unsigned int)v14;
    if ( v15 )
    {
      v10 = sub_1406A6ECC(a1, *a1);
      v20 = v10;
      if ( v10 )
      {
        *(_QWORD *)(v15 + 8 * ((v5 >> 10) & 0x1FF)) = v10;
        goto LABEL_6;
      }
      return 0;
    }
    v19 = sub_1406A62C8((__int64)a1, &v20, *a1);
    if ( !v19 )
      return 0;
    *(_QWORD *)(v7 + 8 * v16) = v19;
LABEL_9:
    v10 = v20;
    goto LABEL_6;
  }
  v9 = (unsigned int)v5 >> 10;
  if ( (unsigned int)v9 >= 0x200 )
  {
    v17 = (unsigned __int64)sub_1406A633C(*((_QWORD *)a1 + 2), 0x400uLL);
    if ( !v17 )
      return 0;
    v18 = sub_1406A62C8((__int64)a1, &v20, v5);
    if ( !v18 )
    {
      sub_1406AC298(*((_QWORD *)a1 + 2), v17, 1024LL);
      return 0;
    }
    *(_QWORD *)v17 = v7;
    *(_QWORD *)(v17 + 8) = v18;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, v17 | 2);
    goto LABEL_9;
  }
  v10 = sub_1406A6ECC(a1, (unsigned int)v5);
  v20 = v10;
  if ( v10 )
  {
    *(_QWORD *)(v7 + 8 * v9) = v10;
LABEL_6:
    LOBYTE(v11) = a2 != 0;
    sub_1406A6D60(a1, v10, a2, v11);
    return 1;
  }
  return 0;
}
