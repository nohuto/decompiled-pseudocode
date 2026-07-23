/*
 * XREFs of sub_140A2B08C @ 0x140A2B08C
 * Callers:
 *     sub_140785470 @ 0x140785470 (sub_140785470.c)
 *     sub_140A23D44 @ 0x140A23D44 (sub_140A23D44.c)
 * Callees:
 *     sub_1406CC2C8 @ 0x1406CC2C8 (sub_1406CC2C8.c)
 *     sub_1407872FC @ 0x1407872FC (sub_1407872FC.c)
 */

__int64 __fastcall sub_140A2B08C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // rsi
  int v9; // r10d
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // esi
  __int64 *v17; // rdi
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ecx
  _DWORD v27[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+90h] [rbp+8h]

  v28 = a1;
  v7 = a7;
  v8 = (__int64 *)&off_140A380C0;
  v9 = 0;
  LODWORD(a7) = 0;
  *v7 = 0;
  v12 = a2;
  v13 = 0;
  while ( 1 )
  {
    v14 = *v8;
    if ( *v8 )
      break;
LABEL_25:
    ++v13;
    v8 += 2;
    if ( v13 >= 3 )
      goto LABEL_9;
  }
  if ( a4 || (v15 = sub_1406CC2C8(a1, v12, a3, *v8, &a7, 0LL, 0, v27), v9 = v15, v15 == -1073741789) || !v15 )
  {
    if ( a5 )
    {
      v20 = *v7;
      if ( (unsigned int)v20 < a6 )
      {
        v21 = 5 * v20;
        *(_OWORD *)(a5 + 4 * v21) = *(_OWORD *)v14;
        *(_DWORD *)(a5 + 4 * v21 + 16) = *(_DWORD *)(v14 + 16);
      }
    }
    v22 = *v7 + 1;
    if ( v22 < *v7 )
    {
LABEL_34:
      *v7 = 0;
      return (unsigned int)-1073741675;
    }
    *v7 = v22;
    goto LABEL_24;
  }
  if ( v15 != -1073741811 && (unsigned int)(v15 + 1073741767) > 1 )
  {
LABEL_24:
    a1 = v28;
    v9 = 0;
    v12 = a2;
    goto LABEL_25;
  }
  *v7 = 0;
LABEL_9:
  if ( v9 < 0 )
    return (unsigned int)v9;
  v16 = 0;
  v17 = (__int64 *)&off_140A38850;
  while ( 2 )
  {
    v18 = *v17;
    if ( a4 || (v19 = sub_1407872FC(v28, a2, a3, *v17, &a7, 0LL, 0, v27), v9 = v19, v19 == -1073741789) || !v19 )
    {
      if ( a5 )
      {
        v23 = *v7;
        if ( (unsigned int)v23 < a6 )
        {
          v24 = 5 * v23;
          *(_OWORD *)(a5 + 4 * v24) = *(_OWORD *)v18;
          *(_DWORD *)(a5 + 4 * v24 + 16) = *(_DWORD *)(v18 + 16);
        }
      }
      v25 = *v7 + 1;
      if ( v25 < *v7 )
        goto LABEL_34;
      *v7 = v25;
LABEL_32:
      v9 = 0;
      ++v16;
      v17 += 2;
      if ( v16 >= 4 )
        goto LABEL_17;
      continue;
    }
    break;
  }
  if ( v19 != -1073741811 && (unsigned int)(v19 + 1073741767) > 1 )
    goto LABEL_32;
  *v7 = 0;
LABEL_17:
  if ( v9 >= 0 )
    return a6 < *v7 ? 0xC0000023 : 0;
  return (unsigned int)v9;
}
