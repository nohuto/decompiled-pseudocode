/*
 * XREFs of sub_1800A40AC @ 0x1800A40AC
 * Callers:
 *     sub_1800A4058 @ 0x1800A4058 (sub_1800A4058.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003180C @ 0x18003180C (sub_18003180C.c)
 */

void __fastcall sub_1800A40AC(__int64 *a1, unsigned __int64 a2, _QWORD **a3, _QWORD *a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r8
  _QWORD *i; // rdx
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      sub_180011B80();
    v8 = sub_180010B48(a2);
    v9 = sub_18001090C(v8);
    *a1 = v9;
    v10 = (_QWORD *)v9;
    a1[1] = v9;
    a1[2] = v9 + 16 * a2;
    v11 = (_QWORD *)*a4;
    for ( i = *a3; i != v11; i = (_QWORD *)(v13 + 16) )
    {
      sub_18001246C(v10, i);
      v10 += 2;
    }
    sub_18001203C((__int64)v10, (__int64)v10);
    v14 = 0LL;
    a1[1] = (__int64)v10;
    sub_18003180C(&v14);
  }
}
