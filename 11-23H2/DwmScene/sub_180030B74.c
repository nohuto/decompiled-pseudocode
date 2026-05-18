/*
 * XREFs of sub_180030B74 @ 0x180030B74
 * Callers:
 *     sub_18002DADC @ 0x18002DADC (sub_18002DADC.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_18001E650 @ 0x18001E650 (sub_18001E650.c)
 */

__int64 *__fastcall sub_180030B74(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  __int64 *v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  char *v14; // rcx
  __int64 v15; // r12
  char *v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  char *v19; // rax
  char *v20; // rbp
  size_t v21; // r12

  *a1 = 0LL;
  v5 = a4;
  a1[2] = 0LL;
  v6 = a3;
  a1[3] = 0LL;
  v7 = a3[2];
  v8 = a4[2];
  v9 = a4[3];
  v10 = v8 + v7;
  if ( v8 <= a3[3] - v7 && v9 <= a3[3] )
  {
    v11 = a1;
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 7LL;
    *(_WORD *)a3 = 0;
    if ( (unsigned __int64)a1[3] >= 8 )
      v11 = (__int64 *)*a1;
    if ( a4[3] >= 8uLL )
      v5 = (_QWORD *)*a4;
    v12 = 2 * v8 + 2;
    v13 = v5;
    v14 = (char *)v11 + 2 * v7;
LABEL_8:
    memcpy(v14, v13, v12);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    v15 = 2 * v7;
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    *(_WORD *)a4 = 0;
    a4[3] = 7LL;
    v16 = (char *)*a1;
    memmove((void *)(v15 + *a1), (const void *)*a1, 2 * v8 + 2);
    if ( v6[3] >= 8uLL )
      v6 = (_QWORD *)*v6;
    v12 = v15;
    v13 = v6;
    v14 = v16;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v7 < v8 )
    sub_180011B60();
  v17 = sub_18001E650(v8 + v7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
  v18 = sub_18001217C(v17 + 1);
  v19 = (char *)sub_18001090C(v18);
  *a1 = (__int64)v19;
  v20 = v19;
  a1[2] = v10;
  a1[3] = v17;
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v21 = 2 * v7;
  memcpy(v19, v6, v21);
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  memcpy(&v20[v21], v5, 2 * v8 + 2);
  return a1;
}
