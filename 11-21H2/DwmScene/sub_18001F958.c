/*
 * XREFs of sub_18001F958 @ 0x18001F958
 * Callers:
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_180020E2C @ 0x180020E2C (sub_180020E2C.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_180059BB8 @ 0x180059BB8 (sub_180059BB8.c)
 *     sub_1800D8C84 @ 0x1800D8C84 (sub_1800D8C84.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180012678 @ 0x180012678 (sub_180012678.c)
 */

__int64 *__fastcall sub_18001F958(__int64 *a1, unsigned __int64 a2, __int64 a3, const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rax
  _WORD *v12; // rbp
  __int64 v13; // rdx
  void *v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    sub_180012150();
  v8 = a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) > 0x7FFFFFFFFFFFFFFELL || (v13 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v4 = v13 + v8;
    if ( v9 >= v13 + v8 )
      v4 = v9;
    v10 = v4 + 1;
    if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  v11 = (void *)sub_180011088(2 * v10);
  a1[3] = v4;
  v15 = v11;
  a1[2] = a2;
  v12 = v11;
  memcpy(v11, a4, 2 * a2);
  v12[a2] = 0;
  if ( v8 < 8 )
  {
    sub_180012678(a1, (__int64 *)&v15);
  }
  else
  {
    sub_180010884((char *)*a1, 2 * v8 + 2);
    *a1 = (__int64)v12;
  }
  return a1;
}
