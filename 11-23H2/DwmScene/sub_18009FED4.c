/*
 * XREFs of sub_18009FED4 @ 0x18009FED4
 * Callers:
 *     sub_1800A01D8 @ 0x1800A01D8 (sub_1800A01D8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     sub_180081B30 @ 0x180081B30 (sub_180081B30.c)
 *     sub_1800A0554 @ 0x1800A0554 (sub_1800A0554.c)
 */

char *__fastcall sub_18009FED4(void **a1, __int64 a2, _DWORD *a3)
{
  void *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  char *v11; // rdi
  char *v12; // r8
  char *v13; // r14
  __int64 v14; // rdx
  void *v15; // rcx

  v3 = *a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v8 = v6 + 1;
  v9 = sub_18001F54C(a1, v6 + 1);
  v10 = sub_180017028(v9);
  v11 = (char *)sub_18001090C(v10);
  v12 = v11;
  v13 = &v11[4 * ((a2 - (__int64)v3) >> 2)];
  *(_DWORD *)v13 = *a3;
  v14 = (__int64)a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    sub_180081B30(v15, a2, v11);
    v14 = (__int64)a1[1];
    v12 = v13 + 4;
    v15 = (void *)a2;
  }
  sub_180081B30(v15, v14, v12);
  sub_1800A0554(a1, v11, v8, v9);
  return &v11[4 * ((a2 - (__int64)v3) >> 2)];
}
