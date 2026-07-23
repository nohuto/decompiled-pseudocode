/*
 * XREFs of sub_14024C0E0 @ 0x14024C0E0
 * Callers:
 *     sub_14024C070 @ 0x14024C070 (sub_14024C070.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14024C0E0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // esi
  __int64 v9; // r15
  unsigned int v10; // r11d
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r14
  _QWORD *Pool2; // rax
  _QWORD *v19; // rbx
  char *v20; // rbp
  const void **v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r13
  int v24; // eax
  char *v25; // rcx
  __int64 v26; // rax
  void *v27; // rcx

  v8 = 0;
  v9 = a3;
  v10 = 0;
  if ( a3 )
  {
    v12 = (_DWORD *)(a1 + 8);
    do
    {
      v13 = v8 + *v12;
      if ( v13 < v8 )
        return 3221225621LL;
      ++v10;
      v12 += 4;
      v8 = v13;
    }
    while ( v10 < a3 );
  }
  v14 = 16LL * a2;
  if ( v14 > 0xFFFFFFFF )
    return 3221225621LL;
  v15 = v14 + 80;
  if ( (unsigned int)v14 >= 0xFFFFFFB0 )
    return 3221225621LL;
  v16 = v15 + v8;
  if ( v15 + v8 < v15 )
    return 3221225621LL;
  v17 = 8LL * a6;
  if ( v17 > 0xFFFFFFFF || v16 + (unsigned int)v17 < v16 )
    return 3221225621LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v16 + (unsigned int)v17, 1853049172LL, a4);
  v19 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[4] = Pool2 + 10;
  v20 = (char *)Pool2 + (unsigned int)v14 + 80;
  Pool2[5] = v20;
  Pool2[9] = &v20[v8];
  if ( (_DWORD)v9 )
  {
    v21 = (const void **)(a1 + 8);
    v22 = -8 - a1;
    v23 = v9;
    do
    {
      memmove(v20, *(v21 - 1), *(unsigned int *)v21);
      v24 = *(_DWORD *)v21;
      v25 = (char *)v21 + v22 + v19[4];
      *((_DWORD *)v25 + 3) = 0;
      *(_QWORD *)v25 = v20;
      *((_DWORD *)v25 + 2) = v24;
      v26 = *(unsigned int *)v21;
      v21 += 2;
      v20 += v26;
      --v23;
    }
    while ( v23 );
  }
  *((_DWORD *)v19 + 12) = v9;
  ObfReferenceObjectWithTag(a4, 0x69547445u);
  v27 = (void *)v19[9];
  v19[8] = a4;
  memmove(v27, Src, (unsigned int)v17);
  v19[7] = a7;
  *((_DWORD *)v19 + 13) = a6;
  *a8 = v19;
  return 0LL;
}
