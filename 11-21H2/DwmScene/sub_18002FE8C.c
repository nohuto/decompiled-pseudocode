/*
 * XREFs of sub_18002FE8C @ 0x18002FE8C
 * Callers:
 *     sub_18003AFE8 @ 0x18003AFE8 (sub_18003AFE8.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180012678 @ 0x180012678 (sub_180012678.c)
 */

__int64 __fastcall sub_18002FE8C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  char *v10; // rax
  size_t v11; // r8
  const void *v12; // rdx
  char *v13; // rcx
  __int64 v14; // r15
  char *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rcx
  char *v18; // r12
  size_t v19; // r15
  char *v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = (char *)a1;
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
    a2[3] = 7LL;
    *(_WORD *)a2 = 0;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      v10 = *(char **)a1;
    if ( a3[3] >= 8uLL )
      v5 = (_QWORD *)*a3;
    v11 = 2 * v7 + 2;
    v12 = v5;
    v13 = &v10[2 * v6];
LABEL_8:
    memcpy(v13, v12, v11);
    *(_QWORD *)(a1 + 16) = v9;
    return a1;
  }
  if ( v6 <= v8 - v7 )
  {
    v14 = 2 * v6;
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    *(_WORD *)a3 = 0;
    a3[3] = 7LL;
    v15 = *(char **)a1;
    memmove((void *)(v14 + *(_QWORD *)a1), *(const void **)a1, 2 * v7 + 2);
    if ( v3[3] >= 8uLL )
      v3 = (_QWORD *)*v3;
    v11 = v14;
    v12 = v3;
    v13 = v15;
    goto LABEL_8;
  }
  v16 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - v6 < v7 )
    sub_180012150();
  if ( (v9 | 7uLL) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v16 = v9 | 7;
    if ( (v9 | 7uLL) < 0xA )
      v16 = 10LL;
    v17 = v16 + 1;
    if ( (unsigned __int64)(v16 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v21 = (char *)sub_180011088(2 * v17);
  v18 = v21;
  sub_180012678((__int64 *)a1, (__int64 *)&v21);
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 24) = v16;
  if ( v3[3] >= 8uLL )
    v3 = (_QWORD *)*v3;
  v19 = 2 * v6;
  memcpy(v18, v3, v19);
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  memcpy(&v18[v19], v5, 2 * v7 + 2);
  return a1;
}
