/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800F75E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x18007A830 (RtlClearBits.c)
 */

__int64 __fastcall RtlFindSetBitsAndClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v4; // esi
  int v7; // ebx
  int v8; // r9d
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // r15d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // ebp
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rdx
  signed __int64 v20; // r9
  unsigned __int64 v21; // r10
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r8
  char v26; // r9
  _QWORD *v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned int v30; // r9d
  int v31; // ecx
  _QWORD *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // r10d
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // cc
  unsigned __int64 v42; // rax
  __int64 v44; // [rsp+60h] [rbp+8h]

  v3 = *(_DWORD *)a1;
  v4 = a3;
  v7 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v8 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_79;
  }
  v10 = *(_QWORD *)(a1 + 8) & 4LL;
  v44 = v10;
  v11 = (unsigned int)v10 != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = v11 + v7;
    v14 = *(_QWORD *)(a1 + 8) - (v10 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < a2 )
    {
      v15 = -1;
      goto LABEL_29;
    }
    v16 = v12 - a2 + 1;
    v17 = (1LL << (v13 & 0x3F)) - 1;
    v18 = v14 + 8 * ((unsigned __int64)v16 >> 6);
    v19 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v13 >> 6));
    v20 = ~*v19 | v17;
    if ( a2 > 0x7F )
    {
      v21 = v18 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = v14 + 8 * ((unsigned __int64)(v12 - a2 + 1) >> 6);
      if ( v20 )
      {
        if ( *++v19 != -1LL )
          goto LABEL_15;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v20);
        if ( v23 )
LABEL_13:
          v22 = 64;
        else
          v22 = 63 - v24;
      }
      else
      {
        v22 = 0;
      }
LABEL_19:
      v15 = ((unsigned int)(((__int64)v19 - v14) >> 3) << 6) - v22;
      if ( v15 <= v16 )
      {
        v26 = a2 - v22;
        v27 = &v19[(unsigned __int64)(a2 - v22) >> 6];
        while ( ++v19 != v27 )
        {
          if ( *v19 != -1LL )
            goto LABEL_15;
        }
        v28 = v26 & 0x3F;
        if ( !v28 )
          goto LABEL_27;
        v23 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v19);
        if ( v23 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v19 <= v21 )
        {
          if ( *++v19 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*(v19 - 1));
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v25;
            goto LABEL_19;
          }
        }
      }
LABEL_68:
      v15 = -1;
      goto LABEL_28;
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
            v20 = ~*v19;
          }
          v23 = !_BitScanReverse64((unsigned __int64 *)&v36, v20);
          if ( v23 )
            v37 = 64;
          else
            v37 = 63 - v36;
          v15 = (((unsigned int)(((__int64)v19 - v14) >> 3) + 1) << 6) - v37;
          if ( v15 > v16 )
            goto LABEL_68;
          v38 = a2 - v37;
          if ( a2 == v37 )
            goto LABEL_27;
          v20 = ~*++v19;
          if ( v38 >= 0x40 )
            break;
LABEL_59:
          v23 = !_BitScanForward64((unsigned __int64 *)&v39, v20);
          if ( v23 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_27;
        }
        if ( *v19 == -1LL )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_27;
          v20 = ~*++v19;
          goto LABEL_59;
        }
      }
    }
    if ( a2 > 1 )
    {
      v31 = 0;
      v32 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v12 >> 6));
      while ( v20 != -1 )
      {
LABEL_40:
        v23 = !_BitScanForward64((unsigned __int64 *)&v33, v20);
        if ( v23 )
          LODWORD(v33) = 64;
        if ( v31 + (int)v33 >= a2 )
        {
          LODWORD(v35) = -v31;
LABEL_70:
          v15 = ((unsigned int)(((__int64)v19 - v14) >> 3) << 6) + v35;
          v41 = v15 <= v16;
          goto LABEL_71;
        }
        v34 = a2;
        v35 = ~v20;
        while ( 1 )
        {
          v35 &= v35 >> (v34 >> 1);
          if ( !v35 )
            break;
          v34 -= v34 >> 1;
          if ( v34 <= 1 )
          {
            _BitScanForward64(&v35, v35);
            goto LABEL_70;
          }
        }
        if ( v19 == v32 )
          goto LABEL_68;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v40, v20);
        if ( v23 )
          v31 = 64;
        else
          v31 = 63 - v40;
        v20 = ~*++v19;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v19 > v18 )
          goto LABEL_68;
        v20 = ~*v19;
        if ( *v19 )
        {
          v31 = 0;
          goto LABEL_40;
        }
      }
    }
    while ( v20 == -1 )
    {
      if ( (unsigned __int64)++v19 > v18 )
        goto LABEL_68;
      v20 = ~*v19;
    }
    _BitScanForward64(&v42, ~v20);
    v15 = v42 + ((unsigned int)(((__int64)v19 - v14) >> 3) << 6);
    v41 = v15 <= v16;
LABEL_71:
    if ( !v41 )
      goto LABEL_68;
LABEL_27:
    if ( v15 != -1 )
      break;
LABEL_28:
    v4 = a3;
LABEL_29:
    if ( !v7 )
      goto LABEL_78;
    v10 = v44;
    v30 = a2 + v4;
    if ( a2 + v4 > v3 )
      v30 = v3;
    v8 = v30 - 1;
    v7 = 0;
  }
  v15 -= v11;
LABEL_78:
  v9 = v15;
LABEL_79:
  if ( v9 != -1 )
    RtlClearBits(a1, v9, a2);
  return v9;
}
