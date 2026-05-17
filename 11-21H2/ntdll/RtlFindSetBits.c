/*
 * XREFs of RtlFindSetBits @ 0x18008D730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r10
  int v7; // r11d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // r15d
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rdx
  signed __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  unsigned int v25; // r9d
  int v26; // ecx
  _QWORD *v27; // rsi
  bool v28; // zf
  __int64 v29; // rax
  unsigned int v30; // r10d
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r10d
  __int64 v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // rax
  int v38; // ecx
  char v39; // r9
  _QWORD *v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // [rsp+40h] [rbp+8h]
  __int64 v45; // [rsp+58h] [rbp+20h]

  v3 = *(_DWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v45 = v5;
  v7 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v8 = *(_DWORD *)a1 - 1;
  if ( !a2 )
    return v7 & 0xFFFFFFF8;
  v9 = v5 & 4;
  v44 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v8;
    v12 = v10 + v7;
    v13 = v5 - (v9 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < a2 )
      goto LABEL_16;
    v14 = v11 - a2 + 1;
    v15 = (1LL << (v12 & 0x3F)) - 1;
    v16 = v13 + 8 * ((unsigned __int64)v14 >> 6);
    v17 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v12 >> 6));
    v18 = ~*v17 | v15;
    if ( a2 > 0x7F )
    {
      v36 = v16 + 8;
      if ( (v14 & 0x3F) == 0 )
        v36 = v13 + 8 * ((unsigned __int64)(v11 - a2 + 1) >> 6);
      if ( !v18 )
      {
        v38 = 0;
        goto LABEL_59;
      }
      if ( *++v17 != -1LL )
        goto LABEL_73;
      v28 = !_BitScanReverse64((unsigned __int64 *)&v37, v18);
      if ( !v28 )
      {
        v38 = 63 - v37;
        goto LABEL_59;
      }
LABEL_72:
      v38 = 64;
LABEL_59:
      while ( 1 )
      {
        v21 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) - v38;
        if ( v21 > v14 )
          goto LABEL_16;
        v39 = a2 - v38;
        v40 = &v17[(unsigned __int64)(a2 - v38) >> 6];
        while ( ++v17 != v40 )
        {
          if ( *v17 != -1LL )
            goto LABEL_73;
        }
        v41 = v39 & 0x3F;
        if ( !v41 )
          goto LABEL_12;
        v28 = !_BitScanForward64((unsigned __int64 *)&v42, ~*v17);
        if ( v28 )
          LODWORD(v42) = 64;
        if ( (unsigned int)v42 >= v41 )
          goto LABEL_12;
        do
        {
LABEL_73:
          if ( (unsigned __int64)v17 > v36 )
            goto LABEL_16;
          ++v17;
        }
        while ( *v17 != -1LL );
        v28 = !_BitScanReverse64((unsigned __int64 *)&v43, ~*(v17 - 1));
        if ( v28 )
          goto LABEL_72;
        v38 = 63 - v43;
      }
    }
    v19 = 64;
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_16;
            v18 = ~*v17;
          }
          v28 = !_BitScanReverse64((unsigned __int64 *)&v33, v18);
          if ( !v28 )
            v19 = 63 - v33;
          v21 = (((unsigned int)(((__int64)v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_16;
          v34 = a2 - v19;
          if ( a2 == v19 )
            goto LABEL_12;
          ++v17;
          v19 = 64;
          v18 = ~*v17;
          if ( v34 >= 0x40 )
            break;
LABEL_49:
          v28 = !_BitScanForward64((unsigned __int64 *)&v35, v18);
          if ( v28 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 >= v34 )
            goto LABEL_12;
        }
        if ( *v17 == -1LL )
        {
          v34 -= 64;
          if ( !v34 )
            goto LABEL_12;
          v18 = ~*++v17;
          goto LABEL_49;
        }
      }
    }
    if ( a2 > 1 )
    {
      v26 = 0;
      v27 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v11 >> 6));
      while ( v18 != -1 )
      {
LABEL_26:
        v28 = !_BitScanForward64((unsigned __int64 *)&v29, v18);
        if ( v28 )
          LODWORD(v29) = 64;
        if ( v26 + (int)v29 >= a2 )
        {
          LODWORD(v31) = -v26;
LABEL_37:
          v21 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) + v31;
          v22 = v21 <= v14;
          goto LABEL_11;
        }
        v30 = a2;
        v31 = ~v18;
        while ( 1 )
        {
          v31 &= v31 >> (v30 >> 1);
          if ( !v31 )
            break;
          v30 -= v30 >> 1;
          if ( v30 <= 1 )
          {
            _BitScanForward64(&v31, v31);
            goto LABEL_37;
          }
        }
        if ( v17 == v27 )
          goto LABEL_16;
        v28 = !_BitScanReverse64((unsigned __int64 *)&v32, v18);
        if ( v28 )
          v26 = 64;
        else
          v26 = 63 - v32;
        v18 = ~*++v17;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v17 > v16 )
          goto LABEL_16;
        v18 = ~*v17;
        if ( *v17 )
        {
          v26 = 0;
          goto LABEL_26;
        }
      }
    }
    while ( v18 == -1 )
    {
      if ( (unsigned __int64)++v17 > v16 )
        goto LABEL_16;
      v18 = ~*v17;
    }
    _BitScanForward64(&v20, ~v18);
    v21 = v20 + ((unsigned int)(((__int64)v17 - v13) >> 3) << 6);
    v22 = v21 <= v14;
LABEL_11:
    if ( v22 )
      break;
LABEL_16:
    v21 = -1;
LABEL_17:
    if ( !v7 )
      return v21;
    v9 = v44;
    v25 = a2 + a3;
    v5 = v45;
    if ( a2 + a3 > v3 )
      v25 = v3;
    v8 = v25 - 1;
    v7 = 0;
  }
LABEL_12:
  if ( v21 == -1 )
    goto LABEL_17;
  v21 -= v10;
  return v21;
}
