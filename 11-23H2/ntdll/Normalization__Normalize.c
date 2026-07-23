/*
 * XREFs of Normalization__Normalize @ 0x180089EE8
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x180089D10 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__Append @ 0x18008A160 (NormBuffer__Append.c)
 *     Normalization__GuessCharCountBySize @ 0x18010E520 (Normalization__GuessCharCountBySize.c)
 */

__int64 __fastcall Normalization__Normalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v6; // r10
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v12; // ecx
  int v13; // r9d
  int v14; // r11d
  int v15; // r10d
  int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-39h] BYREF
  __int64 v18; // [rsp+30h] [rbp-31h]
  __int64 v19; // [rsp+38h] [rbp-29h]
  __int64 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+48h] [rbp-19h]
  __int64 v22; // [rsp+50h] [rbp-11h]
  int v23; // [rsp+58h] [rbp-9h]
  int v24; // [rsp+5Ch] [rbp-5h]
  int v25; // [rsp+60h] [rbp-1h]
  __int64 v26; // [rsp+68h] [rbp+7h]
  __int16 v27; // [rsp+70h] [rbp+Fh]
  __int64 v28; // [rsp+78h] [rbp+17h]
  int v29; // [rsp+80h] [rbp+1Fh]
  __int16 v30; // [rsp+84h] [rbp+23h]
  __int64 v31; // [rsp+98h] [rbp+37h]

  v6 = a2;
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  *a6 = 0;
  v8 = 0;
  v17 = a2;
  v24 = a3;
  v20 = a4;
  v22 = a4;
  v18 = a2 + 2LL * (int)a3;
  v23 = a5;
  v19 = a2;
  v28 = a4;
  v21 = a4 + 2LL * a5;
  v26 = a4 - 2;
  v31 = a1;
  while ( v6 != v18 )
  {
    if ( v8 )
      goto LABEL_21;
    v9 = *(unsigned __int16 *)v6;
    v10 = *(unsigned __int16 *)v6;
    v19 = v6 + 2;
    if ( (signed int)v9 < *(_DWORD *)(a1 + 28)
      || (LOBYTE(a3) = *(_BYTE *)(((unsigned __int64)v9 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)a3)
      || (_BYTE)a3 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( !(unsigned __int8)NormBuffer__Append(&v17, v10) )
      {
        v6 = v19;
        v8 = -1073741789;
        goto LABEL_18;
      }
    }
    else
    {
      v8 = Normalization__NormalizeCharacter(a1, v10, a3, &v17);
    }
    v6 = v19;
  }
  if ( !v8 )
  {
    v6 = (v22 - v20) >> 1;
    goto LABEL_14;
  }
LABEL_21:
  if ( v8 != -1073741789 )
  {
    LODWORD(v6) = ((v6 - v17) >> 1) - 1;
    goto LABEL_14;
  }
LABEL_18:
  v12 = Normalization__GuessCharCountBySize(a1, (unsigned int)((v18 - v6) >> 1) + 1);
  v16 = v14 * v13 / v15;
  if ( v16 <= v12 )
    v16 = v12;
  LODWORD(v6) = v13 + v16 + (v16 >> 3);
LABEL_14:
  *a6 = v6;
  return v8;
}
