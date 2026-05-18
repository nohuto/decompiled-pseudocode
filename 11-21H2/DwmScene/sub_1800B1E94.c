/*
 * XREFs of sub_1800B1E94 @ 0x1800B1E94
 * Callers:
 *     sub_1800B24D8 @ 0x1800B24D8 (sub_1800B24D8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18008EF7C @ 0x18008EF7C (sub_18008EF7C.c)
 */

char *__fastcall sub_1800B1E94(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rdi
  char *v13; // r8
  char *v14; // rsi
  __int64 v15; // rdx
  void *v16; // rcx
  char *result; // rax
  unsigned __int64 v18; // rax

  v4 = (a2 - *(_QWORD *)a1) >> 2;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v18 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v18 >= v8 )
      v10 = v18;
    if ( v10 > 0x3FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v10 = 0x3FFFFFFFFFFFFFFFLL;
  }
  v11 = 4 * v10;
  v12 = (char *)sub_180011088(4 * v10);
  v13 = v12;
  v14 = &v12[4 * v4];
  *(_DWORD *)v14 = *a3;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(void **)a1;
  if ( a2 != v15 )
  {
    sub_18008EF7C(v16, a2, v12);
    v15 = *(_QWORD *)(a1 + 8);
    v13 = v14 + 4;
    v16 = (void *)a2;
  }
  sub_18008EF7C(v16, v15, v13);
  if ( *(_QWORD *)a1 )
    sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = v12;
  result = v14;
  *(_QWORD *)(a1 + 8) = &v12[4 * v8];
  *(_QWORD *)(a1 + 16) = &v12[v11];
  return result;
}
