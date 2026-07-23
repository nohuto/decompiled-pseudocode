/*
 * XREFs of sub_1402CD9C0 @ 0x1402CD9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E5920 @ 0x1402E5920 (sub_1402E5920.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14031285C @ 0x14031285C (sub_14031285C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406AFE20 @ 0x1406AFE20 (sub_1406AFE20.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 */

__int64 __fastcall sub_1402CD9C0(ULONG_PTR a1, unsigned __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  bool v10; // zf
  char *v11; // rsi
  _QWORD *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r12
  unsigned __int64 k; // r13
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  _QWORD **v34; // rax
  _QWORD *i; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *j; // rcx
  unsigned __int8 v45; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v46; // [rsp+48h] [rbp-1A0h]
  __int64 v47; // [rsp+50h] [rbp-198h]
  int v48; // [rsp+58h] [rbp-190h]
  char v49; // [rsp+5Ch] [rbp-18Ch]
  _QWORD *v50; // [rsp+60h] [rbp-188h] BYREF
  PVOID Object; // [rsp+68h] [rbp-180h] BYREF
  __int64 v52; // [rsp+70h] [rbp-178h] BYREF
  __int64 v53; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+80h] [rbp-168h]
  unsigned __int64 v55; // [rsp+88h] [rbp-160h]
  __int64 v56; // [rsp+90h] [rbp-158h]
  unsigned __int64 v57; // [rsp+98h] [rbp-150h]
  _QWORD *v58; // [rsp+A0h] [rbp-148h]
  unsigned __int64 *v59; // [rsp+A8h] [rbp-140h]
  _OWORD v60[3]; // [rsp+B0h] [rbp-138h] BYREF
  int v61; // [rsp+E0h] [rbp-108h] BYREF
  __int16 v62; // [rsp+E4h] [rbp-104h]
  __int16 v63; // [rsp+E6h] [rbp-102h]
  __int64 v64; // [rsp+E8h] [rbp-100h]
  __int64 v65; // [rsp+F0h] [rbp-F8h]
  __int64 v66; // [rsp+F8h] [rbp-F0h]
  _BYTE v67[152]; // [rsp+100h] [rbp-E8h] BYREF

  v58 = a3;
  v59 = a2;
  v50 = 0LL;
  v52 = 0LL;
  Object = 0LL;
  memset(v60, 0, sizeof(v60));
  v63 = 0;
  memset(v67, 0, sizeof(v67));
  result = sub_1406AFE20(a1, (__int64)&v52, (__int64)&v50, (__int64)&Object);
  v48 = result;
  if ( (int)result < 0 )
    return result;
  v5 = 0LL;
  v54 = 0LL;
  v6 = 0;
  v49 = 0;
  v7 = v52;
  v8 = ((unsigned __int64)v50 + v52 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v55 = v8;
  v57 = v52 & 0xFFFFFFFFFFFFF000uLL;
  v9 = v52 & 0xFFFFFFFFFFFFF000uLL;
  v10 = a1 == -1LL;
  v11 = (char *)Object;
  if ( !v10 )
  {
    sub_14030D5C0((ULONG_PTR)Object);
    v6 = 2;
    v49 = 2;
  }
  v64 = 20LL;
  v61 = 1;
  v62 = 4;
  v65 = 0LL;
  v66 = 0LL;
  v12 = 0LL;
  v50 = 0LL;
  v13 = sub_1406F7D78(v11, v9, v8, 0LL);
  v56 = v13;
  if ( !v13 )
    goto LABEL_23;
  v46 = 0LL;
  v47 = (__int64)(v11 + 1664);
  v45 = sub_1402CF4F0(v11 + 1664);
  if ( v9 <= v8 )
  {
    v14 = 0xFFFFF68000000000uLL;
    while ( (((unsigned __int8)(v9 >> 12) + 1) & 0xF) != 0 )
    {
LABEL_8:
      if ( v9 > v5 || !v12 )
      {
        if ( v12 )
        {
          v33 = (unsigned __int64)v12;
          v34 = (_QWORD **)v12[1];
          if ( v34 )
          {
            v25 = v12[1];
            v50 = v34;
            for ( i = *v34; i; i = (_QWORD *)*i )
            {
              v25 = (unsigned __int64)i;
              v50 = i;
            }
          }
          else
          {
            v25 = v12[2] & 0xFFFFFFFFFFFFFFFCuLL;
            v50 = (_QWORD *)v25;
            if ( v25 )
            {
              do
              {
                if ( *(_QWORD *)v25 == v33 )
                  break;
                v33 = v25;
                v25 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v25 );
              v50 = (_QWORD *)v25;
            }
          }
        }
        else
        {
          v25 = sub_1403126F0(v9);
          v50 = (_QWORD *)v25;
        }
        v6 &= ~4u;
        v49 = v6;
        if ( (*(_DWORD *)(v25 + 48) & 0x70) == 0x40 )
        {
          v6 |= 4u;
          v49 = v6;
        }
        else if ( !(unsigned int)sub_14031285C(v25) )
        {
          v7 = v52;
          v11 = (char *)Object;
          v18 = v46;
          goto LABEL_17;
        }
        v54 = (*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12;
      }
      v15 = v14 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
      v16 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v46 != v16 )
      {
        if ( v46 )
        {
          if ( HIDWORD(v64) )
            sub_1402C1D70(v47, (__int64)&v61, 0);
          v23 = v47;
          sub_14020D8D0(v47, v46);
        }
        else
        {
          v23 = v47;
        }
        v24 = sub_14027D6E0(v23, v15, (unsigned __int64 *)&v53);
        v46 = v24;
        if ( v24 != v16 )
        {
          sub_14020D8D0(v23, v24);
          v18 = 0LL;
          v46 = 0LL;
          v14 = 0xFFFFF68000000000uLL;
          v9 = ((v16 << 25) + 0x10000000) >> 16 << 25 >> 16;
          v48 = -1073741782;
          goto LABEL_15;
        }
      }
      v17 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v36 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * ((v15 >> 3) & 0x1FF));
          v38 = v17 | 0x20;
          if ( (v37 & 0x20) == 0 )
            v38 = *(_QWORD *)v15;
          v17 = v38;
          if ( (v37 & 0x42) != 0 )
            v17 = v38 | 0x42;
        }
      }
      v53 = v17;
      if ( (v17 & 1) != 0 )
      {
        v19 = 48 * (((unsigned __int64)sub_140317A10(&v53) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v20 = *(_QWORD *)(v19 + 8);
        if ( (v6 & 4) != 0 && sub_1402433D0(v15) )
          goto LABEL_14;
        if ( (*(_QWORD *)(v19 + 40) & 0x10000000000LL) == 0 && v20 >= 0 && v20 )
          sub_1403336E0(v47, v15, v20 | 0x8000000000000000uLL);
        v21 = *(_QWORD *)v15;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL
          && v15 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v39 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * ((v15 >> 3) & 0x1FF));
            HIBYTE(v41) = HIBYTE(*(_QWORD *)v15);
            if ( (v40 & 0x20) == 0 )
              v41 = *(_QWORD *)v15;
            HIBYTE(v21) = HIBYTE(v41);
            if ( (v40 & 0x42) != 0 )
              HIBYTE(v21) = HIBYTE(v41);
          }
        }
        if ( (HIBYTE(v21) & 0xF) == 8 )
          goto LABEL_14;
        sub_1402CF280(&v61, v9, 1LL, 0LL);
        if ( HIDWORD(v64) == (_DWORD)v64 )
          sub_1402C1D70(v47, (__int64)&v61, 0);
      }
      v48 = -1073741782;
LABEL_14:
      v14 = 0xFFFFF68000000000uLL;
      v18 = v46;
      v9 += 4096LL;
LABEL_15:
      v5 = v54;
      v12 = v50;
      if ( v9 > v8 )
      {
        v7 = v52;
        v11 = (char *)Object;
        goto LABEL_17;
      }
    }
    if ( !(unsigned int)sub_1403531F0(v47) )
    {
      if ( (!v46 || !(unsigned int)sub_140274C80(v22, v46)) && !KeShouldYieldProcessor() )
      {
LABEL_37:
        v14 = 0xFFFFF68000000000uLL;
        goto LABEL_8;
      }
      v22 = v47;
    }
    if ( HIDWORD(v64) )
      sub_1402C1D70(v22, (__int64)&v61, 0);
    if ( v46 )
    {
      sub_14020D8D0(v47, v46);
      v46 = 0LL;
    }
    sub_1402B0CE0(v47, v45);
    sub_1402CF4F0(v47);
    goto LABEL_37;
  }
  v18 = 0LL;
LABEL_17:
  if ( HIDWORD(v64) )
  {
    sub_1402C1D70(v47, (__int64)&v61, 0);
    v18 = v46;
  }
  if ( v18 )
  {
    sub_14020D8D0(v47, v18);
    v18 = 0LL;
    v46 = 0LL;
  }
  if ( v48 == -1073741782 )
  {
    sub_1402B0CE0(v47, v45);
    v13 = v56;
LABEL_23:
    sub_1406F7F40(v11, v7, v13, 0LL);
    if ( (v6 & 2) != 0 )
      sub_1402D0930(v60, 0LL);
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
    return 3221225514LL;
  }
  v26 = v57;
  v27 = 0LL;
  k = 0LL;
  v29 = v55;
  if ( v57 > v55 )
    goto LABEL_57;
  while ( v26 <= v27 && k )
  {
LABEL_52:
    if ( v18 == ((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v30 = v46;
      v31 = v47;
    }
    else
    {
      if ( v18 )
        sub_14020D8D0(v47, v18);
      v31 = v47;
      v30 = sub_14027D6E0(v47, ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v53);
      v46 = v30;
    }
    sub_1402E5920(v31, v26);
    v26 += 4096LL;
    if ( (v26 & 0xF000) == 0
      && ((unsigned int)sub_1403531F0(v31) || (unsigned int)sub_140274C80(v31, v30) || KeShouldYieldProcessor()) )
    {
      sub_14020D8D0(v31, v30);
      v46 = 0LL;
      sub_1402B0CE0(v31, v45);
      sub_1402CF4F0(v31);
    }
    v29 = v55;
    if ( v26 > v55 )
      goto LABEL_56;
    v18 = v46;
  }
  if ( k )
  {
    v42 = k;
    v43 = *(_QWORD ***)(k + 8);
    if ( v43 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v43; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v42 )
          break;
        v42 = k;
      }
    }
  }
  else
  {
    k = sub_1403126F0(v26);
  }
  if ( (unsigned int)sub_14031285C(k) )
  {
    v27 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_52;
  }
LABEL_56:
  LOBYTE(v6) = v49;
  v11 = (char *)Object;
  v7 = v52;
LABEL_57:
  if ( v46 )
    sub_14020D8D0(v47, v46);
  sub_1402B0CE0(v47, v45);
  sub_1406F7F40(v11, v7, v56, 0LL);
  if ( (v6 & 2) != 0 )
    sub_1402D0930(v60, 0LL);
  ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  v32 = v57;
  *v58 = v29 - v57 + 4096;
  *v59 = v32;
  return 0LL;
}
