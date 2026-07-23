/*
 * XREFs of sub_14098D0C0 @ 0x14098D0C0
 * Callers:
 *     sub_1405CC1E0 @ 0x1405CC1E0 (sub_1405CC1E0.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     sub_14080A01C @ 0x14080A01C (sub_14080A01C.c)
 *     sub_14098E51C @ 0x14098E51C (sub_14098E51C.c)
 *     sub_14098E728 @ 0x14098E728 (sub_14098E728.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098D0C0(int a1)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  unsigned int *v5; // rsi
  __int64 Pool2; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int128 v9; // xmm1
  char v10; // r12
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned int v14; // eax
  const wchar_t *v15; // r13
  __int64 v16; // r12
  int v17; // ecx
  unsigned int *v18; // rax
  __int16 v19; // r8
  unsigned int **v20; // rax
  char v22; // [rsp+28h] [rbp-A9h]
  __int128 v23; // [rsp+30h] [rbp-A1h] BYREF
  __int128 v24; // [rsp+40h] [rbp-91h]
  __int128 v25; // [rsp+50h] [rbp-81h]
  __int64 v26; // [rsp+60h] [rbp-71h]
  int v27; // [rsp+68h] [rbp-69h] BYREF
  __int64 v28; // [rsp+6Ch] [rbp-65h]
  wchar_t Str2[64]; // [rsp+78h] [rbp-59h] BYREF

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(Str2, 0, sizeof(Str2));
  if ( qword_140D04890 && (v27 = a1, v28 = 0LL, (unsigned __int8)sub_14098E728(v2, &v27)) )
  {
    v4 = v28;
    v5 = (unsigned int *)sub_14080A01C(a1);
    if ( v5 )
    {
      v3 = -1073741585;
LABEL_6:
      ExFreePoolWithTag(v5, 0x4D584650u);
      return (unsigned int)v3;
    }
    Pool2 = ExAllocatePool2(256LL, (int)(344 * v4 + 24), 1297630800LL);
    v5 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 16) = a1;
    v7 = 0;
    *(_DWORD *)(Pool2 + 20) = v4;
    if ( v4 )
    {
      do
      {
        v8 = 86LL * v7;
        *(_QWORD *)&v5[v8 + 8] = &v5[v8 + 27];
        v5[v8 + 6] = 0x800000;
        LOWORD(v5[v8 + 10]) = 0;
        *(_QWORD *)&v5[v8 + 12] = &v5[v8 + 59];
        HIWORD(v5[v8 + 10]) = 128;
        v5[v8 + 14] = v7;
        LODWORD(v23) = a1;
        *((_QWORD *)&v23 + 1) = 0LL;
        DWORD1(v23) = v5[v8 + 14];
        v24 = *(_OWORD *)&v5[v8 + 6];
        v9 = *(_OWORD *)&v5[v8 + 10];
        v26 = 0LL;
        v25 = v9;
        sub_14098E51C(128LL, &v23);
        LOWORD(v5[v8 + 10]) = v25;
        LOWORD(v5[v8 + 6]) = v24;
        *(_QWORD *)&v5[v8 + 16] = *((_QWORD *)&v23 + 1);
        v5[v8 + 26] = v26;
        v3 = RtlHashUnicodeString((PCUNICODE_STRING)&v5[v8 + 10], 0, 0, &v5[v8 + 15]);
        if ( v3 < 0 )
          goto LABEL_6;
        v4 = v5[5];
      }
      while ( ++v7 < v4 );
    }
    v22 = 0;
    v10 = 0;
    v11 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v12 = 0;
        v13 = 86LL * v11;
        v14 = v5[v13 + 14];
        *(_OWORD *)&v5[v13 + 18] = xmmword_140017E58;
        LOWORD(v5[v13 + 19]) = a1;
        HIWORD(v5[v13 + 19]) = v14 + 1;
        v15 = *(const wchar_t **)&v5[v13 + 8];
        if ( v5[5] )
        {
          while ( 1 )
          {
            v16 = 86LL * v12;
            if ( v12 != v11 && !wcsncmp(*(const wchar_t **)&v5[v13 + 12], *(const wchar_t **)&v5[v16 + 12], 0x40uLL) )
              sub_1405CAE6C(0x706uLL, 0x25uLL, 0x4E616D65uLL, v12);
            if ( !wcsncmp(v15, *(const wchar_t **)&v5[v16 + 12], 0x40uLL) )
              break;
            if ( ++v12 >= v5[5] )
            {
              v10 = v22;
              goto LABEL_19;
            }
          }
          v17 = v5[v16 + 14] + 1;
          v18 = &v5[v13 + 22];
          v19 = a1;
        }
        else
        {
LABEL_19:
          if ( v10 )
          {
            if ( wcsncmp(v15, Str2, 0x40uLL) )
              sub_1405CAE6C(0x706uLL, 0x25uLL, 0x50617265uLL, v11);
          }
          else
          {
            sub_1402E0200(Str2, 64LL, (__int64)v15);
            v22 = 1;
          }
          LOWORD(v17) = 0;
          v18 = &v5[v13 + 22];
          v19 = 0;
        }
        ++v11;
        *(_OWORD *)v18 = xmmword_140017E58;
        *((_WORD *)v18 + 2) = v19;
        *((_WORD *)v18 + 3) = v17;
        if ( v11 >= v5[5] )
          break;
        v10 = v22;
      }
    }
    v20 = (unsigned int **)qword_140C23CA8;
    v3 = 0;
    if ( *(__int64 **)qword_140C23CA8 != &qword_140C23CA0 )
      __fastfail(3u);
    *(_QWORD *)v5 = &qword_140C23CA0;
    *((_QWORD *)v5 + 1) = v20;
    *v20 = v5;
    qword_140C23CA8 = (__int64)v5;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
