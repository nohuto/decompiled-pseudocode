/*
 * XREFs of sub_14079E024 @ 0x14079E024
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x14079DC50 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     sub_1402ED880 @ 0x1402ED880 (sub_1402ED880.c)
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14079D470 @ 0x14079D470 (sub_14079D470.c)
 */

__int64 __fastcall sub_14079E024(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v10; // r14d
  unsigned int v11; // r15d
  __int64 result; // rax
  int v14; // esi
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // r8
  char v20; // r10
  int v21; // r11d
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  signed int i; // edx
  __int64 v34; // r8
  int v35; // r9d
  int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int16 v40; // [rsp+38h] [rbp-D0h] BYREF
  bool v41; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-CCh]
  _QWORD Buf1[3]; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+58h] [rbp-B0h]
  unsigned int v45; // [rsp+68h] [rbp-A0h]
  int v46; // [rsp+6Ch] [rbp-9Ch]
  __int64 v47; // [rsp+70h] [rbp-98h]
  _BYTE *v48; // [rsp+78h] [rbp-90h]
  int *v49; // [rsp+80h] [rbp-88h]
  _QWORD v50[54]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v51[54]; // [rsp+238h] [rbp+130h] BYREF

  v10 = 0;
  v11 = 0;
  v49 = a7;
  HIDWORD(Buf1[0]) = 0;
  v41 = 0;
  LOBYTE(Buf1[0]) = 0;
  v42 = 0;
  v40 = a2;
  v44 = 0LL;
  v45 = a4;
  v48 = a9;
  *(_OWORD *)&Buf1[1] = 0LL;
  memset(v50, 0, sizeof(v50));
  memset(v51, 0, sizeof(v51));
  *a8 = 0;
  *a9 = 0;
  sub_1402ED98C(a1);
  result = sub_1402ED880((_DWORD *)Buf1[1], qword_140C1B9B0, (bool *)&v40 + 1);
  v46 = result;
  v14 = result;
  if ( (int)result < 0 )
    return result;
  if ( !HIBYTE(v40) )
  {
    result = sub_1402ED880((_DWORD *)Buf1[1], qword_140C1B9B8, &v41);
    v46 = result;
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v27 = LOBYTE(Buf1[0]);
    if ( !v41 )
      v27 = 1;
    LODWORD(Buf1[0]) = v27;
  }
  if ( a3 )
  {
    for ( i = 0; (unsigned int)i <= 0x24; ++i )
    {
      v34 = *(_QWORD *)(a1 + 72);
      if ( (v34 & (1LL << i)) != 0 )
      {
        if ( (_BYTE)v40 )
        {
          v35 = -(((1LL << i) & *(_QWORD *)(a1 + 80)) != 0);
          Buf1[1] = i;
          v36 = 2 - v35;
          v44 = i;
          v37 = v11++;
          v38 = 3 * v37;
          *(_QWORD *)((char *)v50 + 4 * v38) = i;
          *((_DWORD *)&v50[1] + v38) = v36;
          if ( a6 )
          {
            v39 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v39 + 4) = i;
            *(_DWORD *)(a6 + 4 * v39 + 12) = v36;
            v34 = *(_QWORD *)(a1 + 72);
          }
          _bittestandreset64(&v34, (unsigned int)i);
          *(_QWORD *)(a1 + 72) = v34;
        }
        ++*a8;
      }
    }
    goto LABEL_36;
  }
  if ( !v45 )
  {
LABEL_36:
    v23 = 0;
    goto LABEL_16;
  }
  v16 = v45;
  Buf1[1] = v45;
  do
  {
    v17 = *a5;
    v18 = *(_QWORD *)(a1 + 64);
    if ( !_bittest64(&v18, v17) )
      goto LABEL_13;
    ++HIDWORD(Buf1[0]);
    v19 = *(_QWORD *)(a1 + 72);
    v44 = *(_QWORD *)a5;
    v20 = v44;
    v21 = ((v19 & (1LL << v20)) != 0 ? 2 : 0) | (((1LL << v20) & *(_QWORD *)(a1 + 80)) != 0);
    v22 = a5[2];
    LODWORD(v47) = v22;
    if ( (v22 & 4) == 0 )
    {
      if ( _bittest64(&v19, (unsigned int)v17) || (v22 & 2) == 0 )
      {
        if ( (_bittest64(&v19, (unsigned int)v17) & ((v47 & 2) == 0)) == 0 )
          goto LABEL_12;
        if ( (_BYTE)v40 )
        {
          if ( a6 )
          {
            v30 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v30 + 4) = v44;
            *(_DWORD *)(a6 + 4 * v30 + 12) = v21;
            v19 = *(_QWORD *)(a1 + 72);
          }
          v31 = 3LL * v11;
          *(_QWORD *)((char *)v50 + 4 * v31) = v44;
          *((_DWORD *)&v50[1] + v31) = v21;
          ++v11;
          *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v20);
        }
LABEL_10:
        ++*a8;
LABEL_12:
        v16 = Buf1[1];
        goto LABEL_13;
      }
      if ( !(_BYTE)v40 )
        goto LABEL_10;
      if ( a6 )
      {
        v28 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(a6 + 4 * v28 + 4) = v44;
        *(_DWORD *)(a6 + 4 * v28 + 12) = v21;
      }
      v25 = v42;
      v26 = 3LL * v42;
      *(_QWORD *)((char *)v51 + 4 * v26) = v44;
      *((_DWORD *)&v51[1] + v26) = v21;
      v42 = v25 + 1;
      if ( HIBYTE(v40) )
      {
LABEL_26:
        *(_QWORD *)(a1 + 72) |= 1LL << v20;
        goto LABEL_10;
      }
      if ( v41 )
      {
        v29 = 0x1120160684LL;
        if ( !_bittest64(&v29, *a5) )
          goto LABEL_26;
      }
      else
      {
        if ( !LOBYTE(Buf1[0]) )
          goto LABEL_10;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          v32 = 0x200800000LL;
        else
          v32 = 0x202800000LL;
        if ( ((1LL << *a5) & v32) != 0 )
          goto LABEL_26;
      }
      ++v10;
      goto LABEL_10;
    }
    v16 = Buf1[1];
    if ( (_BYTE)v40 )
    {
      *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v44);
      *(_DWORD *)(a1 + 200) |= 0x800u;
      *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v20);
    }
LABEL_13:
    a5 += 3;
    Buf1[1] = --v16;
  }
  while ( v16 );
  v14 = v46;
  if ( HIDWORD(Buf1[0]) < v45 || (v23 = v42, v10) )
  {
    v14 = 262;
    v23 = v42;
  }
LABEL_16:
  if ( *a8 && (_BYTE)v40 )
  {
    *v48 = 1;
    sub_14079D470(a1, (char *)v50, v11, (char *)v51, v23, v14 >= 0);
  }
  if ( a6 )
  {
    if ( *a8 > 1u )
      v24 = 12 * *a8 + 4;
    else
      v24 = 16;
    *v49 = v24;
  }
  return (unsigned int)v14;
}
