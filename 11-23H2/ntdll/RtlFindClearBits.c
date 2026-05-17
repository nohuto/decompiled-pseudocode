/*
 * XREFs of RtlFindClearBits @ 0x1800F7CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  int v6; // r10d
  int v7; // r9d
  __int64 v8; // r8
  __int64 v10; // rcx
  int v11; // r15d
  unsigned int v12; // r11d
  unsigned int v13; // edx
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 *v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  bool v22; // zf
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rax
  char v25; // r8
  unsigned __int64 *v26; // r9
  unsigned int v27; // r8d
  __int64 v28; // rax
  unsigned int v29; // r9d
  int v30; // ecx
  unsigned __int64 *v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // r11d
  unsigned __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  unsigned int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // cc
  unsigned __int64 v42; // rax
  __int64 v44; // [rsp+40h] [rbp+8h]
  __int64 v45; // [rsp+58h] [rbp+20h]

  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  v8 = *(_QWORD *)(a1 + 8);
  v44 = v8;
  if ( !a2 )
    return v6 & 0xFFFFFFF8;
  v10 = v8 & 4;
  v45 = v10;
  v11 = v10 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v7;
    v13 = v11 + v6;
    v14 = v8 - (v10 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 < a2 )
    {
      v15 = -1;
      goto LABEL_28;
    }
    v16 = v12 - a2 + 1;
    v17 = (1LL << (v13 & 0x3F)) - 1;
    v18 = v14 + 8 * ((unsigned __int64)v16 >> 6);
    v19 = (unsigned __int64 *)(v14 + 8 * ((unsigned __int64)v13 >> 6));
    v20 = *v19 | v17;
    if ( a2 > 0x7F )
    {
      v21 = v18 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = v14 + 8 * ((unsigned __int64)v16 >> 6);
      if ( v20 )
      {
        if ( *++v19 )
          goto LABEL_13;
        v22 = !_BitScanReverse64((unsigned __int64 *)&v23, v20);
        if ( v22 )
          LODWORD(v20) = 64;
        else
LABEL_17:
          LODWORD(v20) = 63 - (_DWORD)v23;
      }
LABEL_18:
      v15 = ((unsigned int)(((__int64)v19 - v14) >> 3) << 6) - v20;
      if ( v15 <= v16 )
      {
        v24 = a2 - (unsigned int)v20;
        v25 = a2 - v20;
        v26 = &v19[v24 >> 6];
        while ( ++v19 != v26 )
        {
          if ( *v19 )
            goto LABEL_13;
        }
        v27 = v25 & 0x3F;
        if ( !v27 )
          goto LABEL_26;
        v22 = !_BitScanForward64((unsigned __int64 *)&v28, *v19);
        if ( v22 )
          LODWORD(v28) = 64;
        if ( (unsigned int)v28 >= v27 )
          goto LABEL_26;
LABEL_13:
        while ( 1 )
        {
          v23 = v19;
          if ( (unsigned __int64)v19 > v21 )
            break;
          if ( !*++v19 )
          {
            v22 = !_BitScanReverse64((unsigned __int64 *)&v23, *v23);
            if ( !v22 )
              goto LABEL_17;
            LODWORD(v20) = 64;
            goto LABEL_18;
          }
        }
      }
LABEL_68:
      v15 = -1;
      goto LABEL_27;
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v20 < 0 )
          {
            if ( (unsigned __int64)++v19 > v18 )
              goto LABEL_68;
            v20 = *v19;
          }
          v22 = !_BitScanReverse64((unsigned __int64 *)&v36, v20);
          if ( v22 )
            v37 = 64;
          else
            v37 = 63 - v36;
          v15 = (((unsigned int)(((__int64)v19 - v14) >> 3) + 1) << 6) - v37;
          if ( v15 > v16 )
            goto LABEL_68;
          v38 = a2 - v37;
          if ( a2 == v37 )
            goto LABEL_26;
          v20 = *++v19;
          if ( v38 >= 0x40 )
            break;
LABEL_59:
          v22 = !_BitScanForward64((unsigned __int64 *)&v39, v20);
          if ( v22 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_26;
        }
        if ( !v20 )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_26;
          v20 = *++v19;
          goto LABEL_59;
        }
      }
    }
    if ( a2 > 1 )
    {
      v30 = 0;
      v31 = (unsigned __int64 *)(v14 + 8 * ((unsigned __int64)v12 >> 6));
      while ( v20 != -1 )
      {
LABEL_39:
        v22 = !_BitScanForward64((unsigned __int64 *)&v32, v20);
        if ( v22 )
          LODWORD(v32) = 64;
        if ( v30 + (int)v32 >= a2 )
        {
          LODWORD(v35) = -v30;
LABEL_70:
          v15 = ((unsigned int)(((__int64)v19 - v14) >> 3) << 6) + v35;
          v41 = v15 <= v16;
          goto LABEL_71;
        }
        v33 = a2;
        v34 = ~v20;
        while ( 1 )
        {
          v34 &= v34 >> (v33 >> 1);
          if ( !v34 )
            break;
          v33 -= v33 >> 1;
          if ( v33 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v35, v34);
            goto LABEL_70;
          }
        }
        if ( v19 == v31 )
          goto LABEL_68;
        v22 = !_BitScanReverse64((unsigned __int64 *)&v40, v20);
        if ( v22 )
          v30 = 64;
        else
          v30 = 63 - v40;
        v20 = *++v19;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v19 > v18 )
          goto LABEL_68;
        v20 = *v19;
        if ( *v19 != -1LL )
        {
          v30 = 0;
          goto LABEL_39;
        }
      }
    }
    while ( v20 == -1 )
    {
      if ( (unsigned __int64)++v19 > v18 )
        goto LABEL_68;
      v20 = *v19;
    }
    _BitScanForward64(&v42, ~v20);
    v15 = v42 + ((unsigned int)(((__int64)v19 - v14) >> 3) << 6);
    v41 = v15 <= v16;
LABEL_71:
    if ( !v41 )
      goto LABEL_68;
LABEL_26:
    if ( v15 != -1 )
      break;
LABEL_27:
    v8 = v44;
LABEL_28:
    if ( !v6 )
      return v15;
    v10 = v45;
    v29 = a2 + a3;
    if ( a2 + a3 > v3 )
      v29 = v3;
    v7 = v29 - 1;
    v6 = 0;
  }
  v15 -= v11;
  return v15;
}
