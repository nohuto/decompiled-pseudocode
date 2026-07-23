/*
 * XREFs of sub_14038EFE0 @ 0x14038EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14038EFE0(_BYTE *a1, unsigned int a2, _BYTE *a3, unsigned int a4, int a5, _DWORD *a6)
{
  __int64 v7; // r13
  _BYTE *v8; // rdx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  _BYTE *v11; // r11
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r15
  int v14; // ecx
  int v15; // eax
  bool v16; // sf
  unsigned __int64 v17; // rdi
  char v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r9
  signed __int64 v21; // r10
  _BYTE *v22; // rsi
  signed __int64 v23; // r9
  _DWORD *v24; // rsi
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdi
  char v28; // cl
  __int16 v29; // cx
  unsigned __int64 v30; // rdi
  char v31; // r9
  unsigned __int64 v32; // r9
  void *v33; // rdi
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r9
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r9

  if ( a4 >= 5 )
  {
    v7 = a2;
    v8 = a1;
    v9 = (unsigned __int64)&a1[v7];
    v10 = (unsigned __int64)&a3[a4];
    v11 = 0LL;
    v12 = v9 - 352;
    v13 = v10 - 86;
LABEL_3:
    v14 = *(_DWORD *)a3;
    a3 += 4;
    if ( (unsigned __int64)v8 < v12 && (unsigned __int64)a3 < v13 )
    {
      v15 = 2 * v14 + 1;
      if ( v14 >= 0 )
      {
        while ( 1 )
        {
          if ( v15 < 0 )
          {
            *v8++ = *a3++;
            goto LABEL_12;
          }
          v16 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          if ( v16 )
          {
            *(_WORD *)v8 = *(_WORD *)a3;
            v8 += 2;
            a3 += 2;
            goto LABEL_12;
          }
          v16 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          *(_DWORD *)v8 = *(_DWORD *)a3;
          if ( v16 )
          {
            v8 += 3;
            a3 += 3;
            goto LABEL_12;
          }
          v8 += 4;
          a3 += 4;
          v16 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          if ( v16 )
            goto LABEL_12;
LABEL_10:
          v15 *= 2;
        }
      }
      while ( 1 )
      {
        v17 = *(unsigned __int16 *)a3;
        a3 += 2;
        v18 = v17;
        v19 = (v17 >> 3) + 1;
        v20 = v18 & 7;
        if ( v20 == 7 )
        {
          if ( v11 )
          {
            v25 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
            v11 = 0LL;
          }
          else
          {
            v11 = a3++;
            v25 = *v11 & 0xF;
          }
          if ( v25 == 15 )
          {
            if ( (unsigned __int64)(a3 + 7) >= v13 )
              goto LABEL_66;
            v26 = (unsigned __int8)*a3++;
            if ( v26 == 255 )
            {
              v38 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v38 )
              {
                v38 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v38 < 0x16 || &v8[v38 + 3] < v8 )
                return 3221226050LL;
              v26 = v38 - 22;
            }
            v25 = v26 + 15;
          }
          v20 = v25 + 7;
        }
        v21 = v20;
        v22 = &v8[-v19];
        v23 = v20 + 3;
        if ( &v8[-v19] < a1 )
          return 3221226050LL;
        if ( v19 >= 4 )
        {
LABEL_16:
          *(_DWORD *)v8 = *(_DWORD *)v22;
          *((_DWORD *)v8 + 1) = *((_DWORD *)v22 + 1);
          if ( v23 >= 9 )
          {
            v8 += 8;
            v24 = v22 + 8;
            for ( v23 -= 8LL; ; v23 -= 16LL )
            {
              if ( (unsigned __int64)v8 >= v12 )
                goto LABEL_57;
              *(_DWORD *)v8 = *v24;
              *((_DWORD *)v8 + 1) = v24[1];
              *((_DWORD *)v8 + 2) = v24[2];
              *((_DWORD *)v8 + 3) = v24[3];
              if ( v23 < 17 )
                break;
              v8 += 16;
              v24 += 4;
            }
          }
          v8 += v23;
          goto LABEL_18;
        }
        *v8 = *v22;
        v27 = v19 - 1;
        if ( v27 )
        {
          v8[1] = v22[1];
          if ( v27 == 1 )
          {
            v23 -= 2LL;
            v8 += 2;
            goto LABEL_39;
          }
          v28 = v22[2];
        }
        else
        {
          v8[1] = *v22;
          v28 = *v22;
        }
        v8[2] = v28;
        v23 = v21;
        v8 += 3;
LABEL_39:
        if ( v23 )
          goto LABEL_16;
LABEL_18:
        if ( v15 >= 0 )
          goto LABEL_10;
LABEL_12:
        v15 *= 2;
        if ( !v15 )
          goto LABEL_3;
      }
    }
LABEL_43:
    v15 = 2 * v14 + 1;
    if ( v14 < 0 )
    {
      while ( 1 )
      {
        if ( a3 == (_BYTE *)v10 )
          goto LABEL_69;
        if ( (unsigned __int64)(a3 + 1) >= v10 )
          break;
        v30 = *(unsigned __int16 *)a3;
        a3 += 2;
        v31 = v30;
        v19 = (v30 >> 3) + 1;
        v32 = v31 & 7;
        if ( v32 == 7 )
        {
          if ( v11 )
          {
            v34 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
            v11 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)a3 >= v10 )
              return 3221226050LL;
            v11 = a3++;
            v34 = *v11 & 0xF;
          }
          if ( v34 == 15 )
          {
LABEL_66:
            if ( (unsigned __int64)a3 >= v10 )
              return 3221226050LL;
            v35 = (unsigned __int8)*a3++;
            if ( v35 == 255 )
            {
              if ( (unsigned __int64)(a3 + 1) >= v10 )
                return 3221226050LL;
              v37 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v37 )
              {
                if ( (unsigned __int64)(a3 + 3) >= v10 )
                  return 3221226050LL;
                v37 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v37 < 0x16 || &v8[v37 + 3] < v8 )
                return 3221226050LL;
              v35 = v37 - 22;
            }
            v34 = v35 + 15;
          }
          v32 = v34 + 7;
        }
        v23 = v32 + 3;
        v24 = &v8[-v19];
        if ( &v8[-v19] < a1 )
          return 3221226050LL;
LABEL_57:
        if ( (unsigned __int64)&v8[v23] > v9 )
          return 3221226050LL;
        v33 = v8;
        v8 += v23;
        qmemcpy(v33, v24, v23);
        if ( v15 >= 0 )
        {
          v15 *= 2;
          goto LABEL_44;
        }
LABEL_52:
        v15 *= 2;
        if ( !v15 )
        {
          if ( (unsigned __int64)(a3 + 3) >= v10 )
            return 3221226050LL;
          v14 = *(_DWORD *)a3;
          a3 += 4;
          goto LABEL_43;
        }
      }
      if ( (unsigned __int64)v8 >= v9 )
      {
LABEL_69:
        *a6 = (_DWORD)v8 - (_DWORD)a1;
        return 0LL;
      }
    }
    else
    {
LABEL_44:
      if ( v15 < 0 )
      {
LABEL_49:
        if ( (unsigned __int64)a3 < v10 && (unsigned __int64)v8 < v9 )
        {
          *v8++ = *a3++;
          goto LABEL_52;
        }
      }
      else
      {
        while ( 1 )
        {
          v15 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v10 || (unsigned __int64)(v8 + 2) > v9 )
            break;
          v29 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)v8 = v29;
          v8 += 2;
          if ( v15 < 0 )
            goto LABEL_52;
          v16 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          if ( v16 )
            goto LABEL_49;
        }
      }
    }
  }
  return 3221226050LL;
}
