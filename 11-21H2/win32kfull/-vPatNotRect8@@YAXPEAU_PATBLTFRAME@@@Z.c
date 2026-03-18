/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02C66C0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02DA32C (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02DA48C (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v3; // r9d
  unsigned int v4; // edi
  int v5; // r13d
  __int64 v6; // rcx
  __int64 v7; // r12
  int v8; // r10d
  unsigned int v9; // r13d
  unsigned int v10; // r9d
  int v11; // eax
  unsigned int v12; // edi
  int v13; // r11d
  int v14; // eax
  unsigned int v15; // esi
  int v16; // esi
  int v17; // r12d
  int v18; // r14d
  int *v19; // rdx
  __int64 i; // r10
  int v21; // r14d
  int v22; // eax
  int v23; // r15d
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ecx
  int v27; // r11d
  int *v28; // r9
  __int64 v29; // r10
  __int64 v30; // rdx
  __int128 v31; // [rsp+20h] [rbp-38h] BYREF
  __int128 v32; // [rsp+30h] [rbp-28h]
  __int64 v33; // [rsp+40h] [rbp-18h]
  int v34; // [rsp+A8h] [rbp+50h]
  int v35; // [rsp+B8h] [rbp+60h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v33 = 0LL;
  v3 = *v1 * *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 12) * v1[2];
  v31 = 0LL;
  v6 = v3 & 3;
  v32 = 0LL;
  v7 = v5 & 3;
  v8 = aulLeftMask[v6];
  v34 = v5 & 3;
  v35 = aulLeftMask[v7];
  v9 = v5 & 0xFFFFFFFC;
  v10 = v3 & 0xFFFFFFFC;
  v11 = v10 - *((_DWORD *)a1 + 8);
  if ( v11 >= 0 )
    v12 = v11 % v4;
  else
    v12 = v4 - ~v11 % v4 - 1;
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  v15 = *((_DWORD *)a1 + 11);
  if ( v14 >= 0 )
    v16 = v14 % v15;
  else
    v16 = v15 - ~v14 % v15 - 1;
  if ( v10 != v9 && !(_DWORD)v6 )
    goto LABEL_18;
  LODWORD(v32) = v12;
  v17 = ~v35 & v8;
  v18 = v16;
  if ( v10 != v9 )
    v17 = v8;
  v19 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  for ( i = *((_QWORD *)a1 + 1) + v16 * *((_DWORD *)a1 + 5); v13 < v1[3]; v19 = (int *)((char *)v19 + *((int *)a1 + 4)) )
  {
    ++v18;
    *v19 = *v19 & ~v17 | v17 & ~*(_DWORD *)(i + v12);
    if ( v18 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v18 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v13;
  }
  if ( v10 != v9 )
  {
    LODWORD(v7) = v34;
    v10 += 4;
    v12 += 4;
LABEL_18:
    DWORD2(v32) = (v9 - v10) >> 2;
    if ( v9 - v10 >= 4 )
    {
      v21 = v1[1];
      DWORD1(v32) = *((_DWORD *)a1 + 10);
      v22 = *((_DWORD *)a1 + 4) * v21;
      v23 = v16;
      v12 %= DWORD1(v32);
      LODWORD(v32) = v12;
      HIDWORD(v32) = DWORD1(v32);
      v24 = v10 + (__int64)v22;
      v25 = v16 * *((_DWORD *)a1 + 5);
      *(_QWORD *)&v31 = *(_QWORD *)a1 + v24;
      *((_QWORD *)&v31 + 1) = *((_QWORD *)a1 + 1) + v25;
      v26 = v1[3];
      if ( (((unsigned __int8)v12 | BYTE4(v32)) & 3) != 0 )
      {
        if ( v21 < v26 )
        {
          do
          {
            vFetchShiftNotAndCopy(&v31);
            if ( ++v23 == *((_DWORD *)a1 + 11) )
            {
              v23 = 0;
              *((_QWORD *)&v31 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v31 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v21;
            *(_QWORD *)&v31 = *((int *)a1 + 4) + (_QWORD)v31;
            LODWORD(v32) = v12;
          }
          while ( v21 < v1[3] );
        }
      }
      else
      {
        HIDWORD(v32) = DWORD1(v32) >> 2;
        if ( v21 < v26 )
        {
          do
          {
            vFetchNotAndCopy(&v31);
            if ( ++v23 == *((_DWORD *)a1 + 11) )
            {
              v23 = 0;
              *((_QWORD *)&v31 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v31 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v21;
            *(_QWORD *)&v31 = *((int *)a1 + 4) + (_QWORD)v31;
          }
          while ( v21 < v1[3] );
        }
      }
    }
    if ( (_DWORD)v7 )
    {
      v27 = v1[1];
      v28 = (int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v27));
      v29 = *((_QWORD *)a1 + 1) + v16 * *((_DWORD *)a1 + 5);
      v30 = (v12 + 4 * DWORD2(v32)) % *((_DWORD *)a1 + 10);
      if ( v27 < v1[3] )
      {
        do
        {
          ++v16;
          *v28 = *v28 & v35 | ~v35 & ~*(_DWORD *)(v30 + v29);
          if ( v16 == *((_DWORD *)a1 + 11) )
          {
            v29 = *((_QWORD *)a1 + 1);
            v16 = 0;
          }
          else
          {
            v29 += *((int *)a1 + 5);
          }
          ++v27;
          v28 = (int *)((char *)v28 + *((int *)a1 + 4));
        }
        while ( v27 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
