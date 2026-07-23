/*
 * XREFs of sub_140699E6C @ 0x140699E6C
 * Callers:
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 *     sub_14069A184 @ 0x14069A184 (sub_14069A184.c)
 *     sub_140778B24 @ 0x140778B24 (sub_140778B24.c)
 *     sub_140779680 @ 0x140779680 (sub_140779680.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 */

__int64 __fastcall sub_140699E6C(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  __int64 v10; // r14
  int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // r14
  int v16; // ecx
  int v17; // esi
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rbx
  const wchar_t *v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  __int64 *v31; // rsi
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // ecx
  int v42; // [rsp+58h] [rbp-71h]
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-61h]
  __int64 v45; // [rsp+70h] [rbp-59h]
  __int64 v46; // [rsp+78h] [rbp-51h]
  __int64 v47; // [rsp+80h] [rbp-49h]
  PVOID P; // [rsp+88h] [rbp-41h] BYREF
  __int64 v49; // [rsp+90h] [rbp-39h]
  __int128 v50; // [rsp+98h] [rbp-31h] BYREF
  wchar_t *Str1[2]; // [rsp+A8h] [rbp-21h]
  __int128 v52; // [rsp+B8h] [rbp-11h]

  v10 = a8;
  v47 = a5;
  v49 = a1;
  v11 = 0;
  Handle = 0LL;
  v12 = 0;
  P = 0LL;
  *a10 = 0;
  v45 = a3;
  v46 = a8;
  v44 = a9;
  v50 = 0LL;
  *(_OWORD *)Str1 = 0LL;
  v52 = 0LL;
  sub_140779DC4(&P);
  v13 = 0LL;
  v42 = 0;
  if ( !*(_DWORD *)(a8 + 76) )
    goto LABEL_17;
  while ( 1 )
  {
    v14 = 0;
    v15 = 32 * v13 + v10;
    if ( a6 )
    {
      v21 = 0;
      if ( !a7 )
        goto LABEL_16;
      while ( 1 )
      {
        v22 = a6 + 32LL * v21;
        if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v22 + 16) )
        {
          v23 = *(_QWORD *)(v15 + 80) - *(_QWORD *)v22;
          if ( !v23 )
            v23 = *(_QWORD *)(v15 + 88) - *(_QWORD *)(v22 + 8);
          if ( !v23 )
          {
            v16 = *(_DWORD *)(v15 + 100);
            if ( v16 == *(_DWORD *)(v22 + 20) && (!*(_QWORD *)(v15 + 104) || a4) )
              break;
          }
        }
        if ( ++v21 >= a7 )
          goto LABEL_16;
      }
    }
    else
    {
      v16 = *(_DWORD *)(v15 + 100);
    }
    if ( !v16 )
      break;
    if ( v16 != 1 )
    {
      v11 = -1073741811;
      goto LABEL_17;
    }
    v17 = 0;
    if ( !Handle )
    {
      v11 = sub_14069984C(1, v45, a2, 1, 0, v49, &Handle);
      if ( v11 == -1073741772 )
      {
        Handle = (HANDLE)-1LL;
        v11 = 0;
      }
    }
    v14 = (int)Handle;
    if ( Handle != (HANDLE)-1LL )
      goto LABEL_6;
LABEL_16:
    v10 = v46;
    v13 = (unsigned int)(v42 + 1);
    v42 = v13;
    if ( (unsigned int)v13 >= *(_DWORD *)(v46 + 76) )
      goto LABEL_17;
  }
  v17 = a2;
LABEL_6:
  if ( v11 < 0 )
    goto LABEL_17;
  if ( !a4 )
  {
    v18 = *a10;
    if ( v12 <= (unsigned int)v18 )
    {
      if ( a7 )
      {
        v12 = a7;
      }
      else
      {
        v19 = 5;
        if ( *(_DWORD *)(v46 + 76) > 5u )
          v19 = *(_DWORD *)(v46 + 76);
        v12 += v19;
      }
      v11 = sub_14069A184(v44, v18);
      if ( v11 < 0 )
        goto LABEL_17;
    }
    v11 = sub_14077D784(
            v45,
            v17,
            v14,
            (int)v15 + 80,
            *(_DWORD *)(v15 + 100),
            *(_QWORD *)(v15 + 104),
            *v44 + 48LL * *a10);
    if ( v11 < 0 )
      goto LABEL_17;
LABEL_15:
    ++*a10;
    goto LABEL_16;
  }
  v11 = sub_140778B24(v45, v17, v14, (int)v15 + 80, *(_DWORD *)(v15 + 100), v47, (__int64)&v50);
  if ( v11 >= 0 )
  {
    v24 = v47;
    v25 = Str1[1];
    while ( 1 )
    {
      v26 = (const wchar_t *)(v24 & -(__int64)(*(_WORD *)v24 != 0));
      v27 = *(const wchar_t **)(v15 + 104);
      if ( v27 == v26 || v27 && v26 && !wcsicmp(v27, v26) )
        break;
      if ( v25 == v26 || v25 && (!v26 || !wcsicmp(v25, v26)) || !v26 )
        goto LABEL_62;
      v28 = -1LL;
      do
        ++v28;
      while ( v26[v28] );
      v24 = (__int64)&v26[v28 + 1];
    }
    v29 = *a10;
    v30 = 0;
    v31 = v44;
    if ( *a10 )
    {
      v36 = *v44;
      while ( 1 )
      {
        v37 = 48LL * v30;
        if ( LODWORD(Str1[0]) == *(_DWORD *)(v37 + v36 + 16) )
        {
          v38 = v50 - *(_QWORD *)(v37 + v36);
          if ( (_QWORD)v50 == *(_QWORD *)(v37 + v36) )
            v38 = *((_QWORD *)&v50 + 1) - *(_QWORD *)(v37 + v36 + 8);
          if ( !v38 && HIDWORD(Str1[0]) == *(_DWORD *)(v37 + v36 + 20) )
            break;
        }
        if ( ++v30 >= v29 )
          goto LABEL_44;
      }
LABEL_62:
      sub_140779680(&v50, 1483763280LL);
      goto LABEL_16;
    }
LABEL_44:
    if ( v12 > v29 )
      goto LABEL_48;
    if ( a7 )
    {
      v12 = a7;
    }
    else
    {
      v39 = 5;
      if ( *(_DWORD *)(v46 + 76) > 5u )
        v39 = *(_DWORD *)(v46 + 76);
      v12 += v39;
    }
    v11 = sub_14069A184(v44, v29);
    if ( v11 >= 0 )
    {
LABEL_48:
      v32 = *(_OWORD *)Str1;
      v33 = *v31;
      v34 = 6LL * *a10;
      *(_OWORD *)(v33 + 8 * v34) = v50;
      v35 = v52;
      *(_OWORD *)(v33 + 8 * v34 + 16) = v32;
      *(_OWORD *)(v33 + 8 * v34 + 32) = v35;
      goto LABEL_15;
    }
    sub_140779680(&v50, 1483763280LL);
  }
LABEL_17:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    sub_140779A50(P);
  return (unsigned int)v11;
}
