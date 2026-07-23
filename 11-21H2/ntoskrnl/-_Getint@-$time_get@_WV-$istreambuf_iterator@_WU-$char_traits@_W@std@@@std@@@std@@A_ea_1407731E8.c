/*
 * XREFs of ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_0 @ 0x1407731E8
 * Callers:
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406DCCC8 @ 0x1406DCCC8 (sub_1406DCCC8.c)
 *     sub_1407795E4 @ 0x1407795E4 (sub_1407795E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
        unsigned int a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned int v7; // r15d
  size_t v9; // rsi
  char *Pool2; // rax
  char *v11; // r12
  int v12; // esi
  char *v13; // rdi
  int v14; // ebx
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  unsigned int i; // r14d
  char *v23; // rbx
  __int64 v25; // rcx
  const wchar_t *v26; // rcx
  const wchar_t *v27; // rdx
  int v28; // esi
  unsigned int v29; // eax
  void *v30; // rcx
  unsigned int v31; // [rsp+30h] [rbp-50h] BYREF
  int v32; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v33; // [rsp+38h] [rbp-48h] BYREF
  __int128 v34; // [rsp+48h] [rbp-38h] BYREF
  __int128 v35; // [rsp+58h] [rbp-28h]
  __int128 v36; // [rsp+68h] [rbp-18h]

  v31 = 0;
  v32 = 0;
  v7 = a1;
  v9 = 56LL * a1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741823;
  Pool2 = (char *)ExAllocatePool2(256LL, 56LL * a1, 1381256262LL);
  v11 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    sub_1406DCCC8(v7, (__int64)a2, &v31, (__int64)Pool2);
    v7 = v31;
  }
  else
  {
    memmove(Pool2, a2, v9);
  }
  v12 = 0;
  if ( !v7 )
    goto LABEL_9;
  while ( 1 )
  {
    v13 = &v11[56 * v12];
    if ( *((_DWORD *)v13 + 6) == *(_DWORD *)(a3 + 16) )
    {
      v15 = *((_QWORD *)v13 + 1) - *(_QWORD *)a3;
      if ( !v15 )
        v15 = *((_QWORD *)v13 + 2) - *(_QWORD *)(a3 + 8);
      if ( !v15 && *((_DWORD *)v13 + 7) == *(_DWORD *)(a3 + 20) )
      {
        v16 = (const wchar_t *)*((_QWORD *)v13 + 4);
        v17 = *(const wchar_t **)(a3 + 24);
        if ( (v16 == v17 || v16 && v17 && !wcsicmp(v16, v17)) && *(_DWORD *)v13 == a4 )
          break;
      }
    }
    if ( ++v12 >= v7 )
      goto LABEL_9;
  }
  if ( !v13 )
    goto LABEL_9;
  v34 = *(_OWORD *)(v13 + 8);
  v35 = *(_OWORD *)(v13 + 24);
  v36 = *(_OWORD *)(v13 + 40);
  v18 = a4 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 0x10000;
      if ( v20 )
      {
        if ( v20 != 0x10000 )
          goto LABEL_9;
        v21 = *((_DWORD *)v13 + 10);
        if ( v21 != 18 && v21 != 25 && v21 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( (_DWORD)v36 != 17 )
          goto LABEL_9;
        v30 = &unk_140D04CE8;
        if ( **((_BYTE **)&v36 + 1) != 0xFF )
          v30 = &unk_140C0DAE0;
        *((_QWORD *)&v36 + 1) = v30;
      }
    }
  }
  else
  {
    *(_QWORD *)&v36 = 0x400000007LL;
    *((_QWORD *)&v36 + 1) = &unk_140D04CE4;
  }
  for ( i = 0; i < v7; ++i )
  {
    v23 = &v11[56 * i];
    if ( v23 != v13 && *((_DWORD *)v23 + 6) == *((_DWORD *)v13 + 6) )
    {
      v25 = *((_QWORD *)v23 + 1) - *((_QWORD *)v13 + 1);
      if ( !v25 )
        v25 = *((_QWORD *)v23 + 2) - *((_QWORD *)v13 + 2);
      if ( !v25 && *((_DWORD *)v23 + 7) == *((_DWORD *)v13 + 7) )
      {
        v26 = (const wchar_t *)*((_QWORD *)v23 + 4);
        v27 = (const wchar_t *)*((_QWORD *)v13 + 4);
        if ( v26 == v27 || v26 && v27 && !wcsicmp(v26, v27) )
        {
          v28 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 != *(_DWORD *)v13 )
            goto LABEL_9;
          if ( *((_DWORD *)v23 + 10) != *((_DWORD *)v13 + 10) )
            goto LABEL_9;
          v29 = *((_DWORD *)v23 + 11);
          if ( v29 != *((_DWORD *)v13 + 11) || memcmp(*((const void **)v23 + 6), *((const void **)v13 + 6), v29) )
            goto LABEL_9;
          *(_DWORD *)v23 = v28 ^ 0x10000;
        }
      }
    }
  }
  *(_DWORD *)v13 ^= 0x10000u;
  *((_QWORD *)&v33 + 1) = &v34;
  LODWORD(v33) = 1;
  v14 = sub_1407795E4((unsigned int)sub_1406DAC50, (unsigned int)&v33, v7, (_DWORD)v11, (__int64)&v32);
  if ( v14 < 0 )
    goto LABEL_28;
  if ( !v32 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v13;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v13 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v13 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_28;
  }
LABEL_9:
  v14 = -1073741823;
LABEL_28:
  ExFreePoolWithTag(v11, 0x52544C46u);
  return (unsigned int)v14;
}
