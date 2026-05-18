/*
 * XREFs of sub_18001DAD8 @ 0x18001DAD8
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 */

__int64 __fastcall sub_18001DAD8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  size_t v6; // rbp
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  char *v10; // rax
  size_t v11; // r8
  const void *v12; // rdx
  char *v13; // rcx
  char *v14; // rbx
  __int64 v15; // r14
  char *v16; // r12
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = (char *)a1;
  v3 = a2;
  v5 = a3;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = a2[2];
  v7 = a3[2];
  v8 = a3[3];
  v9 = v7 + v6;
  if ( v7 <= a2[3] - v6 && v8 <= a2[3] )
  {
    v10 = (char *)a1;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
    if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
      v10 = *(char **)a1;
    if ( a3[3] >= 0x10uLL )
      v5 = (_QWORD *)*a3;
    v11 = v7 + 1;
    v12 = v5;
    v13 = &v10[v6];
LABEL_8:
    memcpy(v13, v12, v11);
    *(_QWORD *)(a1 + 16) = v9;
    return a1;
  }
  if ( v6 <= v8 - v7 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    *(_BYTE *)a3 = 0;
    a3[3] = 15LL;
    v14 = *(char **)a1;
    memmove((void *)(*(_QWORD *)a1 + v6), *(const void **)a1, v7 + 1);
    if ( v3[3] >= 0x10uLL )
      v3 = (_QWORD *)*v3;
    v11 = v6;
    v12 = v3;
    v13 = v14;
    goto LABEL_8;
  }
  v15 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v6 < v7 )
    sub_180012150();
  if ( (v9 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v15 = v9 | 0xF;
    if ( (v9 | 0xF) < 0x16 )
      v15 = 22LL;
  }
  v18 = (char *)sub_180011088(v15 + 1);
  v16 = v18;
  sub_1800110F0((__int64 *)a1, (__int64 *)&v18);
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 24) = v15;
  if ( v3[3] >= 0x10uLL )
    v3 = (_QWORD *)*v3;
  memcpy(v16, v3, v6);
  if ( v5[3] >= 0x10uLL )
    v5 = (_QWORD *)*v5;
  memcpy(&v16[v6], v5, v7 + 1);
  return a1;
}
