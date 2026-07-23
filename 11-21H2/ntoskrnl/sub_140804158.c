/*
 * XREFs of sub_140804158 @ 0x140804158
 * Callers:
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140804158(int *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, unsigned int *a6)
{
  void *v7; // rcx
  _QWORD *v8; // r11
  unsigned int v9; // r13d
  char *v10; // rdi
  int v11; // eax
  _DWORD *v12; // rbp
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // r8
  _DWORD *v21; // r11
  int v22; // eax
  __int64 v23; // rax
  size_t v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbx
  size_t v27; // rbx
  unsigned int v28; // r15d
  char *PoolWithTag; // rax
  size_t v30[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+10h]
  _QWORD *v33; // [rsp+A0h] [rbp+18h]
  _QWORD *v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v7 = 0LL;
  v31 = 0;
  v30[0] = 0LL;
  v8 = a2;
  v9 = 0;
  v10 = 0LL;
  v11 = *a1;
  if ( *a1 == 2 )
  {
    v13 = a1 + 4;
    v15 = 32;
    v14 = a1 + 8;
  }
  else
  {
    if ( v11 == 6 )
    {
      v12 = a1 + 4;
LABEL_4:
      v13 = 0LL;
      v14 = v12 + 4;
      v15 = 32;
      goto LABEL_5;
    }
    if ( v11 == 10 )
    {
      v18 = (unsigned int)a1[9];
      if ( *(int *)((char *)a1 + v18 + 16) != 6 )
        return (unsigned int)-1073741811;
      v12 = (int *)((char *)a1 + v18 + 32);
      goto LABEL_4;
    }
    if ( v11 != 8 )
      return (unsigned int)-1073741811;
    v19 = a1[6];
    if ( !v19 )
      return (unsigned int)-1073741811;
    v15 = v19 + 16;
    v13 = 0LL;
    v14 = (int *)((char *)a1 + v15);
  }
  v12 = 0LL;
LABEL_5:
  if ( !*v14 )
  {
LABEL_6:
    v16 = 0;
    if ( v8 )
      *v8 = v12;
    if ( a3 )
      *a3 = v13;
    if ( a4 )
      *a4 = v14;
    if ( a6 )
      *a6 = v9;
    if ( a5 )
    {
      *a5 = v10;
      v10 = 0LL;
    }
    goto LABEL_16;
  }
  if ( *v14 != 6 )
    return (unsigned int)-1073741811;
  v20 = (unsigned int)a1[2];
  v9 = v15 + 24;
  v21 = (int *)((char *)a1 + v15 + 24);
  if ( v20 < (unsigned __int64)(v15 + 44) + 16 || (unsigned int)v20 < v9 + v21[2] || *v21 || v21[4] != 5 )
    return (unsigned int)-1073741811;
  v22 = sub_140802A64((int *)((char *)a1 + v9), 0, 0, v30, &v31);
  v7 = (void *)v30[0];
  v16 = v22;
  if ( v22 >= 0 )
  {
    if ( v31 >= 0x2E && *(_DWORD *)v30[0] == 3 && (v23 = *(unsigned int *)(v30[0] + 20), *(_DWORD *)(v23 + v30[0]) == 2) )
    {
      v24 = v23 + v30[0];
      v25 = -1LL;
      v26 = -1LL;
      do
        ++v26;
      while ( *(_WORD *)(v24 + 2 * v26 + 20) );
      v27 = (unsigned int)(2 * v26);
      do
        ++v25;
      while ( *(_WORD *)(v30[0] + 2 * v25 + 24) );
      v28 = 2 * v25 + 2;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v28 + (unsigned int)v27, 0x4B444342u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)(v24 + 20), v27);
        memmove(&v10[v27], (const void *)(v30[0] + 24), v28);
        v7 = (void *)v30[0];
        a4 = v34;
        a3 = v33;
        v8 = v32;
        goto LABEL_6;
      }
      v7 = (void *)v30[0];
      v16 = -1073741801;
    }
    else
    {
      v16 = -1073741811;
    }
  }
LABEL_16:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  return v16;
}
