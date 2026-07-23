/*
 * XREFs of sub_1407E4D40 @ 0x1407E4D40
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 */

__int64 __fastcall sub_1407E4D40(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  ULONG_PTR v12; // r14
  unsigned int i; // r8d
  __int64 v14; // rdx
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // r8d
  __int64 v22; // rdx
  char v23; // cl
  char v24; // cl
  int v25; // [rsp+24h] [rbp-144h]
  unsigned __int64 v26; // [rsp+28h] [rbp-140h]
  unsigned int v27; // [rsp+30h] [rbp-138h]
  ULONG_PTR v28; // [rsp+48h] [rbp-120h]
  unsigned __int64 v29; // [rsp+68h] [rbp-100h]
  ULONG_PTR v30[10]; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-98h]
  __int128 v32; // [rsp+E0h] [rbp-88h]
  __int128 v33; // [rsp+F0h] [rbp-78h]
  __int128 v34; // [rsp+100h] [rbp-68h]
  __int64 v35; // [rsp+110h] [rbp-58h]

  memset(v30, 0, sizeof(v30));
  v6 = 0;
  v26 = 0LL;
  *a3 = 0;
  v7 = a2[20];
  if ( (_DWORD)v7 )
  {
    if ( (v7 & 3) == 0 )
    {
      v19 = a2[21];
      if ( v19 >= 0x48 && (unsigned int)v7 + v19 > (unsigned int)v7 )
        v6 = v7 + 72 <= (unsigned __int64)a2[4];
    }
  }
  v8 = a2[26];
  if ( v8 )
  {
    if ( (v8 & 3) == 0 )
    {
      v9 = a2[27];
      if ( v9 >= 0x1C && v9 + v8 > v8 && v9 + v8 <= a2[4] )
        v6 |= 2u;
    }
  }
  if ( !v6 )
    return 0LL;
  v25 = sub_1406F3884(a1, 3, (__int64)v30);
  if ( v25 >= 0 )
  {
    v10 = sub_140281750((__int64)a1);
    v26 = v10;
    v6 |= 0xCu;
    v11 = *a1;
    v28 = v30[0];
    if ( (v6 & 1) != 0 )
    {
      v20 = a2[20];
      v31 = *(_OWORD *)(v30[0] + v20);
      v32 = *(_OWORD *)(v30[0] + v20 + 16);
      v33 = *(_OWORD *)(v30[0] + v20 + 32);
      v34 = *(_OWORD *)(v30[0] + v20 + 48);
      v35 = *(_QWORD *)(v30[0] + v20 + 64);
      sub_1407E5148((unsigned int)v20, 72LL, v10, a1);
      v21 = v32;
      if ( (v32 & 1) != 0 )
      {
        *a3 = 1;
        *(_BYTE *)(v11 + 15) |= 1u;
        if ( WORD2(v31) > 2u || WORD2(v31) == 2 && WORD3(v31) >= 5u )
        {
          v22 = *(_QWORD *)(v11 + 56);
          v23 = *(_BYTE *)(v22 + 51) | 2;
          *(_BYTE *)(v22 + 51) = v23;
          if ( (v21 & 0x20002) != 2 && (*(_BYTE *)(v11 + 14) & 0x40) != 0 )
          {
            v24 = v23 | 1;
            *(_BYTE *)(v22 + 51) = v24;
            if ( (v21 & 0x20000) != 0 )
              *(_BYTE *)(v22 + 51) = v24 | 0x20;
          }
        }
      }
    }
    if ( (v6 & 2) != 0 )
    {
      v12 = v28 + a2[26];
      for ( i = 0; ; i = v27 + 1 )
      {
        v27 = i;
        v14 = (a2[27] * (unsigned __int128)0x2492492492492493uLL) >> 64;
        if ( i >= (v14 + (((unsigned __int64)a2[27] - v14) >> 1)) >> 4 )
          break;
        sub_1407E5148(a2[26] + 28 * i, 28LL, v26, a1);
        v29 = *(_QWORD *)(v12 + 16);
        if ( HIDWORD(*(_OWORD *)v12) == 20 )
        {
          if ( !HIDWORD(v29) )
            break;
          if ( (v29 & 0x300000000LL) != 0 )
            break;
          if ( !(_DWORD)v29 )
            break;
          if ( (v29 & 3) != 0 )
            break;
          v16 = a2[4];
          if ( (unsigned int)v29 >= v16 || HIDWORD(v29) >= v16 || HIDWORD(v29) + (int)v29 >= v16 )
            break;
          sub_1407E5148(HIDWORD(v29), 4LL, v26, a1);
          v17 = *(_DWORD *)(v28 + HIDWORD(v29));
          if ( (v17 & 1) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 1u;
          if ( (v17 & 2) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 2u;
          if ( (v17 & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 4u;
          if ( (v17 & 8) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 8u;
          if ( (v17 & 0x10) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 0x10u;
          v18 = v25;
          if ( (v17 & 0x20) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 0x20u;
          goto LABEL_36;
        }
        v12 += 28LL;
      }
    }
  }
  v18 = v25;
LABEL_36:
  if ( (v6 & 4) != 0 )
    sub_1406F39F8(v30);
  if ( v6 >= 8 )
    sub_140280D08((__int64)a1, v26);
  return v18;
}
