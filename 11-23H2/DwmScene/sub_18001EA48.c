/*
 * XREFs of sub_18001EA48 @ 0x18001EA48
 * Callers:
 *     sub_18001F798 @ 0x18001F798 (sub_18001F798.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_18001E650 @ 0x18001E650 (sub_18001E650.c)
 */

void **__fastcall sub_18001EA48(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  void *v5; // r15
  unsigned __int64 v8; // r13
  char *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rax
  size_t v13; // r8
  __int64 v14; // r15
  char *v15; // r14
  char *v16; // r12
  size_t v17; // rdi
  void *v18; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    sub_180011B60();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v10 = sub_18001E650((__int64)v5 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  v11 = sub_18001217C(v10 + 1);
  v12 = (char *)sub_18001090C(v11);
  v13 = 2LL * (_QWORD)v5;
  v14 = (__int64)v5 + a5;
  Src[2] = v9;
  Src[3] = (void *)v10;
  v15 = v12;
  v16 = &v12[v13];
  v17 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy(v12, Src, v13);
    memcpy(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
  }
  else
  {
    v18 = *Src;
    memcpy(v12, *Src, v13);
    memcpy(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
    sub_1800100E8(v18, 2 * v8 + 2);
  }
  *Src = v15;
  return Src;
}
