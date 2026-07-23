/*
 * XREFs of sub_140A2B950 @ 0x140A2B950
 * Callers:
 *     sub_1406BD260 @ 0x1406BD260 (sub_1406BD260.c)
 *     sub_140A24D6C @ 0x140A24D6C (sub_140A24D6C.c)
 * Callees:
 *     sub_1406BD5D8 @ 0x1406BD5D8 (sub_1406BD5D8.c)
 *     sub_1406BD994 @ 0x1406BD994 (sub_1406BD994.c)
 *     sub_1406BDEE4 @ 0x1406BDEE4 (sub_1406BDEE4.c)
 *     sub_1406BE094 @ 0x1406BE094 (sub_1406BE094.c)
 */

__int64 __fastcall sub_140A2B950(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  __int64 *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ecx
  _DWORD v33[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h]
  void *v35; // [rsp+A0h] [rbp+18h]

  v35 = (void *)a3;
  v34 = a1;
  v7 = a7;
  v8 = (__int64 *)&off_140A39560;
  v33[0] = 0;
  LODWORD(a7) = 0;
  *v7 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *v8;
    if ( *v8 )
    {
      if ( a4
        || (result = sub_1406BD994(a1, (int)a2, a3, *v8, v33, 0LL, 0, (unsigned int *)&a7), (_DWORD)result == -1073741789)
        || !(_DWORD)result )
      {
        if ( a5 )
        {
          v14 = *v7;
          if ( (unsigned int)v14 < a6 )
          {
            v15 = 5 * v14;
            *(_OWORD *)(a5 + 4 * v15) = *(_OWORD *)v12;
            *(_DWORD *)(a5 + 4 * v15 + 16) = *(_DWORD *)(v12 + 16);
          }
        }
        v16 = *v7 + 1;
        if ( v16 < *v7 )
          goto LABEL_51;
        *v7 = v16;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_52;
      }
      a1 = v34;
    }
    ++v11;
    v8 += 3;
    if ( v11 >= 9 )
      break;
    a3 = (__int64)v35;
  }
  v17 = 0;
  v18 = (__int64 *)&off_140A39F60;
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 )
    {
      if ( a4
        || (result = sub_1406BDEE4(a1, (int)a2, v35, v19, v33, 0LL, 0, &a7), (_DWORD)result == -1073741789)
        || !(_DWORD)result )
      {
        if ( a5 )
        {
          v20 = *v7;
          if ( (unsigned int)v20 < a6 )
          {
            v21 = 5 * v20;
            *(_OWORD *)(a5 + 4 * v21) = *(_OWORD *)v19;
            *(_DWORD *)(a5 + 4 * v21 + 16) = *(_DWORD *)(v19 + 16);
          }
        }
        v22 = *v7 + 1;
        if ( v22 < *v7 )
          goto LABEL_51;
        *v7 = v22;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_52;
      }
    }
    ++v17;
    v18 += 4;
    if ( v17 >= 0xD )
      break;
    a1 = v34;
  }
  v23 = 0;
  v24 = (__int64 *)&off_140A38810;
  do
  {
    v25 = *v24;
    if ( a4
      || (result = sub_1406BD5D8(v34, (int)a2, (int)v35, *v24, v33, 0LL, 0, (unsigned int *)&a7),
          (_DWORD)result == -1073741789)
      || !(_DWORD)result )
    {
      if ( a5 )
      {
        v26 = *v7;
        if ( (unsigned int)v26 < a6 )
        {
          v27 = 5 * v26;
          *(_OWORD *)(a5 + 4 * v27) = *(_OWORD *)v25;
          *(_DWORD *)(a5 + 4 * v27 + 16) = *(_DWORD *)(v25 + 16);
        }
      }
      v28 = *v7 + 1;
      if ( v28 < *v7 )
        goto LABEL_51;
      *v7 = v28;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
      goto LABEL_52;
    }
    ++v23;
    v24 += 2;
  }
  while ( v23 < 4 );
  if ( !a4 )
  {
    v29 = sub_1406BE094(v34, a2, a3, v33, 0LL, 0, (__int64)&a7);
    if ( v29 != -1073741789 )
    {
      if ( v29 )
        return a6 < *v7 ? 0xC0000023 : 0;
    }
  }
  if ( a5 )
  {
    v30 = *v7;
    if ( (unsigned int)v30 < a6 )
    {
      v31 = 5 * v30;
      *(_OWORD *)(a5 + 4 * v31) = xmmword_14000EA88;
      *(_DWORD *)(a5 + 4 * v31 + 16) = 2;
    }
  }
  v32 = *v7 + 1;
  if ( v32 >= *v7 )
  {
    *v7 = v32;
    return a6 < *v7 ? 0xC0000023 : 0;
  }
LABEL_51:
  result = 3221225621LL;
LABEL_52:
  *v7 = 0;
  return result;
}
