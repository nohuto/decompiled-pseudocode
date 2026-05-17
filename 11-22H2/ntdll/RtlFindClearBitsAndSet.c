/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180004D50
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180004BD8 (LdrpAcquireTlsIndex.c)
 * Callees:
 *     RtlSetBits @ 0x180005010 (RtlSetBits.c)
 */

__int64 __fastcall RtlFindClearBitsAndSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  int v6; // ebx
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // r15d
  unsigned int v10; // r10d
  unsigned int v11; // edx
  __int64 v12; // r14
  unsigned int v13; // ebp
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  bool v20; // cc
  unsigned int v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // r9d
  unsigned __int64 v32; // r10
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rax
  char v35; // r8
  unsigned __int64 *v36; // r9
  unsigned int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  unsigned int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // [rsp+60h] [rbp+8h]
  unsigned int v44; // [rsp+70h] [rbp+18h]

  v44 = a3;
  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a1 + 8) & 4LL;
    v43 = v8;
    v9 = (unsigned int)v8 != 0LL ? 0x20 : 0;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = *(_QWORD *)(a1 + 8) - (v8 != 0 ? 4 : 0);
      if ( v7 - v6 + 1 >= a2 )
        break;
      v19 = -1;
LABEL_38:
      if ( !v6 )
        goto LABEL_12;
      v8 = v43;
      v31 = a2 + a3;
      if ( a2 + a3 > v3 )
        v31 = v3;
      v7 = v31 - 1;
      v6 = 0;
    }
    v13 = v10 - a2 + 1;
    v14 = (1LL << (v11 & 0x3F)) - 1;
    v15 = v12 + 8 * ((unsigned __int64)v13 >> 6);
    v16 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
    v17 = *v16 | v14;
    if ( a2 > 0x7F )
    {
      v32 = v15 + 8;
      if ( (v13 & 0x3F) == 0 )
        v32 = v12 + 8 * ((unsigned __int64)v13 >> 6);
      if ( v17 )
      {
        if ( *++v16 )
          goto LABEL_62;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v33, v17);
        if ( v25 )
        {
          LODWORD(v17) = 64;
          goto LABEL_48;
        }
LABEL_47:
        LODWORD(v17) = 63 - (_DWORD)v33;
      }
LABEL_48:
      while ( 1 )
      {
        v19 = ((unsigned int)(((__int64)v16 - v12) >> 3) << 6) - v17;
        if ( v19 > v13 )
          goto LABEL_36;
        v34 = a2 - (unsigned int)v17;
        v35 = a2 - v17;
        v36 = &v16[v34 >> 6];
        while ( ++v16 != v36 )
        {
          if ( *v16 )
            goto LABEL_62;
        }
        v37 = v35 & 0x3F;
        if ( !v37 )
          goto LABEL_10;
        v25 = !_BitScanForward64((unsigned __int64 *)&v38, *v16);
        if ( v25 )
          LODWORD(v38) = 64;
        if ( (unsigned int)v38 >= v37 )
          goto LABEL_10;
        do
        {
LABEL_62:
          v33 = v16;
          if ( (unsigned __int64)v16 > v32 )
            goto LABEL_36;
          ++v16;
        }
        while ( *v16 );
        v25 = !_BitScanReverse64((unsigned __int64 *)&v33, *v33);
        if ( !v25 )
          goto LABEL_47;
        LODWORD(v17) = 64;
      }
    }
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v23 = 0;
        v24 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
        while ( v17 != -1 )
        {
LABEL_21:
          v25 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
          if ( v25 )
            LODWORD(v26) = 64;
          if ( v23 + (int)v26 >= a2 )
          {
            LODWORD(v29) = -v23;
LABEL_28:
            v19 = ((unsigned int)(((__int64)v16 - v12) >> 3) << 6) + v29;
            v20 = v19 <= v13;
            goto LABEL_9;
          }
          v27 = a2;
          v28 = ~v17;
          while ( 1 )
          {
            v28 &= v28 >> (v27 >> 1);
            if ( !v28 )
              break;
            v27 -= v27 >> 1;
            if ( v27 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v29, v28);
              goto LABEL_28;
            }
          }
          if ( v16 == v24 )
            goto LABEL_36;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v30, v17);
          if ( v25 )
            v23 = 64;
          else
            v23 = 63 - v30;
          v17 = *++v16;
        }
        while ( (unsigned __int64)++v16 <= v15 )
        {
          v17 = *v16;
          if ( *v16 != -1LL )
          {
            v23 = 0;
            goto LABEL_21;
          }
        }
      }
      else
      {
        while ( v17 == -1 )
        {
          if ( (unsigned __int64)++v16 > v15 )
            goto LABEL_36;
          v17 = *v16;
        }
        _BitScanForward64(&v18, ~v17);
        v19 = v18 + ((unsigned int)(((__int64)v16 - v12) >> 3) << 6);
        v20 = v19 <= v13;
LABEL_9:
        if ( v20 )
        {
LABEL_10:
          if ( v19 != -1 )
          {
            v19 -= v9;
LABEL_12:
            v21 = v19;
            goto LABEL_13;
          }
          goto LABEL_37;
        }
      }
LABEL_36:
      v19 = -1;
LABEL_37:
      a3 = v44;
      goto LABEL_38;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v17 < 0 )
        {
          if ( (unsigned __int64)++v16 > v15 )
            goto LABEL_36;
          v17 = *v16;
        }
        v25 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
        if ( v25 )
          v40 = 64;
        else
          v40 = 63 - v39;
        v19 = (((unsigned int)(((__int64)v16 - v12) >> 3) + 1) << 6) - v40;
        if ( v19 > v13 )
          goto LABEL_36;
        v41 = a2 - v40;
        if ( a2 == v40 )
          goto LABEL_10;
        v17 = *++v16;
        if ( v41 >= 0x40 )
          break;
LABEL_79:
        v25 = !_BitScanForward64((unsigned __int64 *)&v42, v17);
        if ( v25 )
          LODWORD(v42) = 64;
        if ( (unsigned int)v42 >= v41 )
          goto LABEL_10;
      }
      if ( !v17 )
      {
        v41 -= 64;
        if ( !v41 )
          goto LABEL_10;
        v17 = *++v16;
        goto LABEL_79;
      }
    }
  }
  v21 = v6 & 0xFFFFFFF8;
LABEL_13:
  if ( v21 != -1 )
    RtlSetBits(a1, v21, a2);
  return v21;
}
