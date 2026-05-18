/*
 * XREFs of sub_18001EB54 @ 0x18001EB54
 * Callers:
 *     sub_18001F90C @ 0x18001F90C (sub_18001F90C.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_18001E650 @ 0x18001E650 (sub_18001E650.c)
 */

void **__fastcall sub_18001EB54(void **Src, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  void *v6; // r14
  unsigned __int64 v8; // r15
  char *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rbp
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // rdi
  void *v16; // rbx

  v6 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v6 < a2 )
    sub_180011B60();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v6 + a2;
  v10 = sub_18001E650((__int64)v6 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  v11 = sub_18001217C(v10 + 1);
  v12 = (char *)sub_18001090C(v11);
  Src[2] = v9;
  v13 = 2LL * (_QWORD)v6 + 2;
  Src[3] = (void *)v10;
  v14 = 2 * a6;
  v15 = &v12[2 * a6];
  if ( v8 < 8 )
  {
    memcpy(v12, L"FL_", v14);
    memcpy(v15, Src, v13);
  }
  else
  {
    v16 = *Src;
    memcpy(v12, L"FL_", v14);
    memcpy(v15, v16, v13);
    sub_1800100E8(v16, 2 * v8 + 2);
  }
  *Src = v12;
  return Src;
}
