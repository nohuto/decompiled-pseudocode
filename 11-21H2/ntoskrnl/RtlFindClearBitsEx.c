/*
 * XREFs of RtlFindClearBitsEx @ 0x14030B090
 * Callers:
 *     sub_140709C0C @ 0x140709C0C (sub_140709C0C.c)
 *     sub_1407B8560 @ 0x1407B8560 (sub_1407B8560.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r11
  __int64 v11; // r8
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int v22; // r15d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  unsigned int v27; // edx
  unsigned __int64 *v28; // r8
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  bool v32; // sf
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx

  v3 = *a1;
  v4 = a1[1];
  v6 = a3;
  if ( a3 >= *a1 )
    v6 = 0LL;
  v8 = v3 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v6 + 1 < a2 )
        goto LABEL_26;
      v9 = v8 - a2 + 1;
      v10 = v4 + 8 * (v9 >> 6);
      v11 = *(_QWORD *)(v4 + 8 * (v6 >> 6)) | ((1LL << (v6 & 0x3F)) - 1);
      v12 = (unsigned __int64 *)(v4 + 8 * (v6 >> 6));
      if ( a2 > 0x7F )
        break;
      if ( a2 >= 0x40 )
      {
        while ( 2 )
        {
          v32 = v11 < 0;
          while ( 1 )
          {
            if ( v32 )
            {
              do
              {
                if ( (unsigned __int64)++v12 > v10 )
                  goto LABEL_26;
                v11 = *v12;
              }
              while ( (*v12 & 0x8000000000000000uLL) != 0LL );
            }
            v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v11);
            if ( v20 )
              v34 = 64LL;
            else
              v34 = (unsigned int)(63 - v33);
            v17 = ((((__int64)((__int64)v12 - v4) >> 3) + 1) << 6) - v34;
            if ( v17 > v9 )
              goto LABEL_26;
            v35 = a2 - v34;
            if ( a2 == v34 )
              goto LABEL_11;
            v11 = v12[1];
            ++v12;
            if ( v35 < 0x40 )
              break;
            v32 = v11 < 0;
            if ( !v11 )
            {
              v35 -= 64LL;
              if ( !v35 )
                goto LABEL_11;
              v11 = v12[1];
              ++v12;
              break;
            }
          }
          v20 = !_BitScanForward64(&v36, v11);
          if ( v20 )
            v36 = 64LL;
          if ( v36 < v35 )
            continue;
          break;
        }
      }
      else
      {
        if ( a2 > 1 )
        {
          v19 = 0LL;
          while ( v11 != -1 )
          {
LABEL_18:
            v20 = !_BitScanForward64((unsigned __int64 *)&v21, v11);
            if ( v20 )
              LODWORD(v21) = 64;
            if ( (unsigned int)(v19 + v21) >= a2 )
            {
              v16 = -v19;
LABEL_25:
              v15 = (__int64)((__int64)v12 - v4) >> 3 << 6;
              goto LABEL_10;
            }
            v22 = a2;
            v16 = ~v11;
            while ( 1 )
            {
              v16 &= v16 >> (v22 >> 1);
              if ( !v16 )
                break;
              v22 -= v22 >> 1;
              if ( v22 <= 1 )
              {
                _BitScanForward64(&v16, v16);
                goto LABEL_25;
              }
            }
            if ( v12 == (unsigned __int64 *)(v4 + 8 * (v8 >> 6)) )
              goto LABEL_26;
            v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v11);
            if ( v20 )
              v19 = 64LL;
            else
              v19 = (unsigned int)(63 - v24);
            v11 = v12[1];
            ++v12;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v12 > v10 )
              goto LABEL_26;
            v11 = *v12;
            if ( *v12 != -1LL )
            {
              v19 = 0LL;
              goto LABEL_18;
            }
          }
        }
        if ( v11 == -1 )
        {
          while ( (unsigned __int64)++v12 <= v10 )
          {
            v11 = *v12;
            if ( *v12 != -1LL )
              goto LABEL_9;
          }
LABEL_26:
          v17 = -1LL;
          goto LABEL_27;
        }
LABEL_9:
        _BitScanForward64(&v13, ~v11);
        v14 = (__int64)((__int64)v12 - v4) >> 3;
        v15 = (unsigned int)v13;
        v16 = v14 << 6;
LABEL_10:
        v17 = v15 + v16;
        if ( v17 > v9 )
        {
          v17 = -1LL;
          goto LABEL_27;
        }
      }
LABEL_11:
      if ( v17 != -1LL )
        return v17;
LABEL_27:
      if ( !v6 )
        return v17;
      v23 = a2 + a3;
      v6 = 0LL;
      if ( a2 + a3 > v3 )
        v23 = v3;
      v8 = v23 - 1;
    }
    v25 = v10 + 8;
    if ( (v9 & 0x3F) == 0 )
      v25 = v4 + 8 * ((v8 - a2 + 1) >> 6);
    if ( v11 )
    {
      if ( !*++v12 )
      {
        v20 = !_BitScanReverse64((unsigned __int64 *)&v31, v11);
        if ( v20 )
          v27 = 64;
        else
          v27 = 63 - v31;
        goto LABEL_47;
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v12 > v25 )
            goto LABEL_26;
          ++v12;
        }
        while ( *v12 );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v26, *(v12 - 1));
        if ( v20 )
          v27 = 64;
        else
          v27 = 63 - v26;
LABEL_47:
        v17 = ((__int64)((__int64)v12 - v4) >> 3 << 6) - v27;
        if ( v17 > v9 )
          goto LABEL_26;
        v28 = &v12[(a2 - v27) >> 6];
        if ( ++v12 == v28 )
        {
LABEL_51:
          v29 = ((_BYTE)a2 - (_BYTE)v27) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v27) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v30, *v12);
          if ( v20 )
            LODWORD(v30) = 64;
          if ( (unsigned int)v30 >= v29 )
            goto LABEL_11;
        }
        else
        {
          while ( !*v12 )
          {
            if ( ++v12 == v28 )
              goto LABEL_51;
          }
        }
      }
    }
    v27 = 0;
    goto LABEL_47;
  }
  return v6 & 0xFFFFFFFFFFFFFFF8uLL;
}
