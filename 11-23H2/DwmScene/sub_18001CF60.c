/*
 * XREFs of sub_18001CF60 @ 0x18001CF60
 * Callers:
 *     sub_18001C5F8 @ 0x18001C5F8 (sub_18001C5F8.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

__int64 *__fastcall sub_18001CF60(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  size_t v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 *v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  char *v14; // rcx
  char *v15; // rbx
  unsigned __int64 v16; // rbx
  char *v17; // rax
  char *v18; // r12

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
    a3[3] = 15LL;
    *(_BYTE *)a3 = 0;
    if ( (unsigned __int64)a1[3] >= 0x10 )
      v11 = (__int64 *)*a1;
    if ( a4[3] >= 0x10uLL )
      v5 = (_QWORD *)*a4;
    v12 = v8 + 1;
    v13 = v5;
    v14 = (char *)v11 + v7;
LABEL_8:
    memcpy(v14, v13, v12);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    *(_BYTE *)a4 = 0;
    a4[3] = 15LL;
    v15 = (char *)*a1;
    memmove((void *)(*a1 + v7), (const void *)*a1, v8 + 1);
    if ( v6[3] >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    v12 = v7;
    v13 = v6;
    v14 = v15;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
    sub_180011B60();
  v16 = sub_18001187C(v8 + v7, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (char *)sub_18001090C(v16 + 1);
  *a1 = (__int64)v17;
  v18 = v17;
  a1[2] = v10;
  a1[3] = v16;
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  memcpy(v17, v6, v7);
  if ( v5[3] >= 0x10uLL )
    v5 = (_QWORD *)*v5;
  memcpy(&v18[v7], v5, v8 + 1);
  return a1;
}
