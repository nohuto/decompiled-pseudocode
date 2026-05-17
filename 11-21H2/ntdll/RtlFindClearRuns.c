/*
 * XREFs of RtlFindClearRuns @ 0x1800F72D0
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800F7590 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(int *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  int v6; // r9d
  unsigned int v8; // edx
  BOOL v9; // r15d
  bool v11; // zf
  unsigned int v12; // r15d
  __int64 v13; // r10
  unsigned __int8 *v14; // rax
  unsigned int v15; // r13d
  int v16; // ebp
  unsigned int v17; // ecx
  unsigned __int8 v18; // r8
  __int64 v19; // rsi
  unsigned int v20; // r10d
  unsigned int v21; // ebx
  __int64 v22; // r9
  _QWORD *i; // rcx
  int v24; // ebx
  unsigned __int8 v25; // r8
  unsigned int v26; // edi
  __int64 v27; // rbp
  unsigned __int8 v28; // bl
  int v29; // esi
  unsigned int v30; // edi
  __int64 v31; // r9
  _QWORD *j; // rcx
  unsigned int v33; // r8d
  __int64 v34; // r9
  _QWORD *k; // rcx
  int v37; // [rsp+0h] [rbp-48h]
  int v38; // [rsp+4h] [rbp-44h]
  unsigned int v39; // [rsp+8h] [rbp-40h]
  int v40; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v39 = *a1;
  v6 = *a1 & 7;
  v8 = 0;
  v38 = v6;
  v9 = v6 != 0;
  v40 = 0;
  v11 = ((unsigned int)*a1 >> 3) + v9 == 0;
  v12 = ((unsigned int)*a1 >> 3) + v9;
  LODWORD(v13) = 0;
  v14 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v15 = 0;
  if ( v11 )
    return v8;
  v16 = 0;
  v17 = v12 - 1;
  v37 = 0;
  while ( 1 )
  {
    v18 = *v14;
    if ( v15 == v17 && v6 )
      v18 |= byte_18013A0B0[v4 & 7];
    if ( !v18 )
    {
      v24 = v40;
      LODWORD(v13) = v13 + 8;
      goto LABEL_37;
    }
    v19 = RtlpBitsClearLow[v18];
    v20 = v19 + v13;
    if ( v20 )
    {
      if ( v8 < a3 )
      {
        ++v8;
LABEL_12:
        v21 = v8 - 2;
        if ( a4 )
        {
          v22 = (int)v21;
          for ( i = (_QWORD *)(a2 + 8 + 8LL * (int)v21); v22 >= 0 && *((_DWORD *)i - 1) < v20; --i )
          {
            --v21;
            --v22;
            *i = *(i - 1);
          }
        }
        *(_DWORD *)(a2 + 8LL * (int)v21 + 12) = v20;
        *(_DWORD *)(a2 + 8LL * (int)v21 + 8) = v40;
        if ( !a4 && v8 >= a3 )
          return v8;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < v20 )
        goto LABEL_12;
    }
LABEL_19:
    v13 = RtlpBitsClearHigh[v18];
    v24 = v16 - v13 + 8;
    v40 = v24;
    v25 = *((_BYTE *)&unk_18013A0B8 - v13) | RtlIsSystemAceType[v19 + 16] | v18;
    if ( v25 != 0xFF )
    {
      do
      {
        v26 = v8;
        if ( v8 >= a3 && *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v25] )
          break;
        v27 = RtlpBitsClearAnywhere[v25];
        v28 = RtlIsSystemAceType[v27 + 16];
        v29 = 0;
        while ( (v28 & v25) != 0 )
        {
          v28 *= 2;
          ++v29;
        }
        ++v8;
        if ( v26 >= a3 )
          v8 = v26;
        v30 = v8 - 2;
        if ( a4 )
        {
          v31 = (int)v30;
          for ( j = (_QWORD *)(a2 + 8 + 8LL * (int)v30); v31 >= 0 && *((_DWORD *)j - 1) < (unsigned int)v27; --j )
          {
            --v30;
            --v31;
            *j = *(j - 1);
          }
        }
        *(_DWORD *)(a2 + 8LL * (int)v30 + 12) = v27;
        v16 = v37;
        *(_DWORD *)(a2 + 8LL * (int)v30 + 8) = v29 + v37;
        if ( !a4 && v8 >= a3 )
          return v8;
        v25 |= v28;
      }
      while ( v25 != 0xFF );
      v24 = v40;
    }
    v17 = v12 - 1;
LABEL_37:
    v16 += 8;
    ++v15;
    v37 = v16;
    if ( v15 >= v12 )
      break;
    ++v14;
    v6 = v38;
    LOBYTE(v4) = v39;
  }
  if ( (_DWORD)v13 )
  {
    if ( v8 < a3 )
    {
      ++v8;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < (unsigned int)v13 )
    {
LABEL_45:
      v33 = v8 - 2;
      if ( a4 )
      {
        v34 = (int)v33;
        for ( k = (_QWORD *)(a2 + 8 + 8LL * (int)v33); v34 >= 0 && *((_DWORD *)k - 1) < (unsigned int)v13; --k )
        {
          --v33;
          --v34;
          *k = *(k - 1);
        }
      }
      *(_DWORD *)(a2 + 8LL * (int)v33 + 12) = v13;
      *(_DWORD *)(a2 + 8LL * (int)v33 + 8) = v24;
    }
  }
  return v8;
}
