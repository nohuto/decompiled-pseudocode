/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x1800F8040
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x1800F9D70 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rdx
  signed __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned int v17; // r8d
  bool v18; // zf
  unsigned __int64 *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned int v22; // r10d
  unsigned __int64 *v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax

  v3 = *a1;
  v5 = a1[1];
  v8 = a3 & -(__int64)(a3 < *a1);
  v9 = *a1 - 1;
  if ( !a2 )
  {
    v10 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_76;
  }
  while ( 1 )
  {
    if ( v9 - v8 + 1 < a2 )
    {
LABEL_4:
      v11 = -1LL;
      goto LABEL_27;
    }
    v12 = v9 - a2 + 1;
    v13 = v5 + 8 * (v12 >> 6);
    v14 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
    v15 = *v14 | ((1LL << (v8 & 0x3F)) - 1);
    if ( a2 <= 0x7F )
    {
      if ( a2 < 0x40 )
      {
        if ( a2 > 1 )
        {
          v22 = 0;
          v9 >>= 6;
          v23 = (unsigned __int64 *)(v5 + 8 * v9);
          while ( v15 != -1 )
          {
LABEL_38:
            v18 = !_BitScanForward64((unsigned __int64 *)&v24, v15);
            if ( v18 )
              LODWORD(v24) = 64;
            if ( v22 + (unsigned int)v24 >= a2 )
            {
              v26 = -(__int64)v22;
LABEL_68:
              v11 = ((__int64)((__int64)v14 - v5) >> 3 << 6) + v26;
              goto LABEL_69;
            }
            v25 = a2;
            v9 = ~v15;
            while ( 1 )
            {
              v9 &= v9 >> (v25 >> 1);
              if ( !v9 )
                break;
              v25 -= v25 >> 1;
              if ( v25 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v26, v9);
                goto LABEL_68;
              }
            }
            if ( v14 == v23 )
              goto LABEL_4;
            v18 = !_BitScanReverse64((unsigned __int64 *)&v30, v15);
            if ( v18 )
              v22 = 64;
            else
              v22 = 63 - v30;
            v15 = *++v14;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_4;
            v15 = *v14;
            if ( *v14 != -1LL )
            {
              v22 = 0;
              goto LABEL_38;
            }
          }
        }
        while ( v15 == -1 )
        {
          if ( (unsigned __int64)++v14 > v13 )
            goto LABEL_4;
          v15 = *v14;
        }
        _BitScanForward64(&v31, ~v15);
        v11 = v31 + ((__int64)((__int64)v14 - v5) >> 3 << 6);
LABEL_69:
        if ( v11 > v12 )
          goto LABEL_4;
        goto LABEL_26;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_4;
            v15 = *v14;
          }
          v18 = !_BitScanReverse64((unsigned __int64 *)&v27, v15);
          if ( v18 )
            v28 = 64;
          else
            v28 = 63 - v27;
          v11 = ((((__int64)((__int64)v14 - v5) >> 3) + 1) << 6) - v28;
          if ( v11 > v12 )
            goto LABEL_4;
          v9 = a2 - v28;
          if ( a2 == v28 )
            goto LABEL_26;
          v15 = *++v14;
          if ( v9 >= 0x40 )
            break;
LABEL_57:
          v18 = !_BitScanForward64(&v29, v15);
          if ( v18 )
            v29 = 64LL;
          if ( v29 >= v9 )
            goto LABEL_26;
        }
        if ( !v15 )
        {
          v9 -= 64LL;
          if ( !v9 )
            goto LABEL_26;
          v15 = *++v14;
          goto LABEL_57;
        }
      }
    }
    v16 = v13 + 8;
    if ( (v12 & 0x3F) == 0 )
      v16 = v5 + 8 * ((v9 - a2 + 1) >> 6);
    if ( v15 )
    {
      if ( *++v14 )
        goto LABEL_12;
      v18 = !_BitScanReverse64((unsigned __int64 *)&v19, v15);
LABEL_15:
      if ( v18 )
        v17 = 64;
      else
        v17 = 63 - (_DWORD)v19;
    }
    else
    {
      v17 = 0;
    }
    v9 = v17;
    v11 = ((__int64)((__int64)v14 - v5) >> 3 << 6) - v17;
    if ( v11 > v12 )
      goto LABEL_4;
    v9 = (unsigned __int64)&v14[(a2 - v17) >> 6];
    while ( ++v14 != (unsigned __int64 *)v9 )
    {
      if ( *v14 )
        goto LABEL_12;
    }
    v9 = ((_BYTE)a2 - (_BYTE)v17) & 0x3F;
    if ( (((_BYTE)a2 - (_BYTE)v17) & 0x3F) != 0 )
    {
      v18 = !_BitScanForward64((unsigned __int64 *)&v20, *v14);
      if ( v18 )
        LODWORD(v20) = 64;
      if ( (unsigned int)v20 < (unsigned int)v9 )
      {
LABEL_12:
        while ( 1 )
        {
          v19 = v14;
          if ( (unsigned __int64)v14 > v16 )
            goto LABEL_4;
          if ( !*++v14 )
          {
            v18 = !_BitScanReverse64((unsigned __int64 *)&v19, *v19);
            goto LABEL_15;
          }
        }
      }
    }
LABEL_26:
    if ( v11 != -1LL )
      break;
LABEL_27:
    if ( !v8 )
      break;
    v21 = a2 + a3;
    if ( a2 + a3 > v3 )
      v21 = v3;
    v9 = v21 - 1;
    v8 = 0LL;
  }
  v10 = v11;
LABEL_76:
  if ( v10 != -1LL )
    RtlSetBitsEx(a1, v10, a2, v9);
  return v10;
}
