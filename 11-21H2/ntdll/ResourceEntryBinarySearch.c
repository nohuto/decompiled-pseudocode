/*
 * XREFs of ResourceEntryBinarySearch @ 0x180040E98
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareResourceNamesWithValidation @ 0x180041128 (LdrpCompareResourceNamesWithValidation.c)
 *     wcsncmp @ 0x1800999E0 (wcsncmp.c)
 */

char __fastcall ResourceEntryBinarySearch(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int *a5,
        wchar_t *String1,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r10
  unsigned __int16 v11; // bp
  __int64 v14; // r15
  unsigned __int16 v15; // r13
  char v16; // bp
  unsigned int *v17; // r8
  char v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int *v21; // rdx
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  bool v26; // cc
  unsigned __int64 v28; // r8
  unsigned __int16 *v29; // r14
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // [rsp+30h] [rbp-48h]
  char v35; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = (unsigned __int64)a5;
  v10 = a2;
  v11 = a3;
  v14 = 0LL;
  *a7 = 0LL;
  v33 = v9 - 8 + 8LL * a3;
  *a8 = 0LL;
  if ( v9 > v33 )
  {
LABEL_23:
    *a7 = v8;
    *a8 = v14;
    return 1;
  }
  while ( 1 )
  {
    v15 = v11 >> 1;
    if ( !(v11 >> 1) )
      break;
    v16 = v11 & 1;
    v17 = (unsigned int *)(v9 + 8LL * v15);
    if ( !v16 )
      v17 -= 2;
    a5 = v17;
    if ( !a1 || (v18 = 1, !v10) )
      v18 = 0;
    v19 = *v17;
    v35 = 1;
    if ( ((unsigned __int64)String1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (int)v19 >= 0 )
        goto LABEL_12;
      v28 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v18 && a4 + (v19 & 0xFFFFFFFF7FFFFFFFuLL) > v28 + v10 )
        return 0;
      v29 = (unsigned __int16 *)(a4 + (v19 & 0x7FFFFFFF));
      if ( v18 )
      {
        v30 = v19 & 0x7FFFFFFF;
        v31 = v30 + 2 * *v29;
        if ( (unsigned int)v31 < v30 || a4 + v31 > v28 + v10 )
          return 0;
      }
      v20 = wcsncmp(String1, v29 + 1, *v29);
      if ( !v20 )
      {
        v32 = -1LL;
        do
          ++v32;
        while ( String1[v32] );
        if ( v32 != *v29 )
          goto LABEL_16;
      }
      v17 = a5;
      v10 = a2;
    }
    else
    {
      if ( (int)v19 < 0 )
        goto LABEL_16;
      v20 = (_DWORD)String1 - v19;
    }
    if ( !v20 )
    {
      v24 = v17[1];
      v25 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v10;
      if ( (int)v24 >= 0 )
      {
        v14 = v24 + a4;
        v26 = v24 + a4 <= v25;
LABEL_22:
        if ( v26 )
          goto LABEL_23;
        return 0;
      }
LABEL_21:
      LODWORD(v24) = v24 & 0x7FFFFFFF;
      v8 = v24 + a4;
      v26 = v24 + a4 <= v25;
      goto LABEL_22;
    }
    if ( v20 >= 0 )
    {
LABEL_16:
      v11 = v15;
      v21 = (unsigned int *)v33;
      v9 = (unsigned __int64)(a5 + 2);
      goto LABEL_14;
    }
LABEL_12:
    v21 = v17 - 2;
    v22 = v16 == 0;
    v33 = (unsigned __int64)(v17 - 2);
    v11 = v15;
    if ( v22 )
      v11 = v15 - 1;
LABEL_14:
    if ( v9 > (unsigned __int64)v21 )
      goto LABEL_23;
    v10 = a2;
  }
  if ( !v11 )
    goto LABEL_23;
  v23 = LdrpCompareResourceNamesWithValidation(a1, v10, String1, a4, v9, &v35);
  if ( !v35 )
    return 0;
  if ( v23 )
    goto LABEL_23;
  v24 = *(unsigned int *)(v9 + 4);
  v25 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + a2;
  if ( (int)v24 < 0 )
    goto LABEL_21;
  v14 = v24 + a4;
  if ( v24 + a4 <= v25 )
    goto LABEL_23;
  return 0;
}
