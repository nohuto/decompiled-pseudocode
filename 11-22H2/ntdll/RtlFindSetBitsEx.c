/*
 * XREFs of RtlFindSetBitsEx @ 0x1800F7E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  _QWORD *v13; // r8
  signed __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r9
  unsigned int v22; // r9d
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // r10d
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v7 + 1 < a2 )
      {
LABEL_4:
        v10 = -1LL;
        goto LABEL_27;
      }
      v11 = v8 - a2 + 1;
      v12 = v5 + 8 * (v11 >> 6);
      v13 = (_QWORD *)(v5 + 8 * (v7 >> 6));
      v14 = ~*v13 | ((1LL << (v7 & 0x3F)) - 1);
      if ( a2 <= 0x7F )
        break;
      v15 = v12 + 8;
      if ( (v11 & 0x3F) == 0 )
        v15 = v5 + 8 * (v11 >> 6);
      if ( v14 )
      {
        if ( *++v13 != -1LL )
          goto LABEL_14;
        v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v14);
        if ( v17 )
LABEL_12:
          v16 = 64;
        else
          v16 = 63 - v18;
      }
      else
      {
        v16 = 0;
      }
LABEL_18:
      v10 = ((__int64)((__int64)v13 - v5) >> 3 << 6) - v16;
      if ( v10 > v11 )
        goto LABEL_4;
      v21 = &v13[(a2 - v16) >> 6];
      while ( ++v13 != v21 )
      {
        if ( *v13 != -1LL )
          goto LABEL_14;
      }
      v22 = ((_BYTE)a2 - (_BYTE)v16) & 0x3F;
      if ( (((_BYTE)a2 - (_BYTE)v16) & 0x3F) != 0 )
      {
        v17 = !_BitScanForward64((unsigned __int64 *)&v23, ~*v13);
        if ( v17 )
          LODWORD(v23) = 64;
        if ( (unsigned int)v23 < v22 )
        {
LABEL_14:
          while ( 1 )
          {
            v19 = v13;
            if ( (unsigned __int64)v13 > v15 )
              goto LABEL_4;
            if ( *++v13 == -1LL )
            {
              v17 = !_BitScanReverse64((unsigned __int64 *)&v20, ~*v19);
              if ( v17 )
                goto LABEL_12;
              v16 = 63 - v20;
              goto LABEL_18;
            }
          }
        }
      }
LABEL_26:
      if ( v10 != -1LL )
        return v10;
LABEL_27:
      if ( !v7 )
        return v10;
      v24 = a2 + a3;
      if ( a2 + a3 > v3 )
        v24 = v3;
      v8 = v24 - 1;
      v7 = 0LL;
    }
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v25 = 0LL;
        v26 = (_QWORD *)(v5 + 8 * (v8 >> 6));
        while ( v14 != -1 )
        {
LABEL_38:
          v17 = !_BitScanForward64((unsigned __int64 *)&v27, v14);
          if ( v17 )
            LODWORD(v27) = 64;
          if ( (unsigned int)(v25 + v27) >= a2 )
          {
            v29 = -v25;
LABEL_67:
            v10 = ((__int64)((__int64)v13 - v5) >> 3 << 6) + v29;
            goto LABEL_68;
          }
          v28 = a2;
          v29 = ~v14;
          while ( 1 )
          {
            v29 &= v29 >> (v28 >> 1);
            if ( !v29 )
              break;
            v28 -= v28 >> 1;
            if ( v28 <= 1 )
            {
              _BitScanForward64(&v29, v29);
              goto LABEL_67;
            }
          }
          if ( v13 == v26 )
            goto LABEL_4;
          v17 = !_BitScanReverse64((unsigned __int64 *)&v34, v14);
          if ( v17 )
            v25 = 64LL;
          else
            v25 = (unsigned int)(63 - v34);
          v14 = ~*++v13;
        }
        while ( 1 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_4;
          v14 = ~*v13;
          if ( v14 != -1 )
          {
            v25 = 0LL;
            goto LABEL_38;
          }
        }
      }
      while ( v14 == -1 )
      {
        if ( (unsigned __int64)++v13 > v12 )
          goto LABEL_4;
        v14 = ~*v13;
      }
      _BitScanForward64(&v35, ~v14);
      v10 = v35 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
LABEL_68:
      if ( v10 > v11 )
        goto LABEL_4;
      goto LABEL_26;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_4;
          v14 = ~*v13;
        }
        v17 = !_BitScanReverse64((unsigned __int64 *)&v30, v14);
        if ( v17 )
          v31 = 64;
        else
          v31 = 63 - v30;
        v10 = ((((__int64)((__int64)v13 - v5) >> 3) + 1) << 6) - v31;
        if ( v10 > v11 )
          goto LABEL_4;
        v32 = a2 - v31;
        if ( a2 == v31 )
          goto LABEL_26;
        v14 = ~*++v13;
        if ( v32 >= 0x40 )
          break;
LABEL_57:
        v17 = !_BitScanForward64(&v33, v14);
        if ( v17 )
          v33 = 64LL;
        if ( v33 >= v32 )
          goto LABEL_26;
      }
      if ( *v13 == -1LL )
      {
        v32 -= 64LL;
        if ( !v32 )
          goto LABEL_26;
        v14 = ~*++v13;
        goto LABEL_57;
      }
    }
  }
  return v7 & 0xFFFFFFFFFFFFFFF8uLL;
}
