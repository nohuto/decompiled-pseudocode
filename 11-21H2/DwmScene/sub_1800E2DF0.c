/*
 * XREFs of sub_1800E2DF0 @ 0x1800E2DF0
 * Callers:
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800E3334 @ 0x1800E3334 (sub_1800E3334.c)
 *     sub_1800E3430 @ 0x1800E3430 (sub_1800E3430.c)
 *     sub_1800E5B6C @ 0x1800E5B6C (sub_1800E5B6C.c)
 */

__int64 __fastcall sub_1800E2DF0(__int64 a1, unsigned int a2, unsigned int a3, int a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  void **v16; // rax
  unsigned int *v17; // rcx
  LPVOID lpMem; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+60h] [rbp+30h] BYREF
  int v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v5 = a5;
  sub_1800E5B6C(&a5, a5[4], a2);
  if ( HIDWORD(a5) == 1 )
    v9 = v7 | 8;
  else
    v9 = v7 & 0xFFFFFFF7;
  if ( (v5[8] & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (v5[8] & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (v5[8] & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (v5[10] & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (v5[10] & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  if ( v8 <= 1 )
    v15 = v14 & 0xFFFFFFBF;
  else
    v15 = v14 | 0x40;
  v21 = v5[7];
  v20 = v15;
  v16 = (void **)sub_1800E3430(
                   (unsigned int)&lpMem,
                   (_DWORD)v5,
                   (int)v5 + 4,
                   (unsigned int)&a5,
                   (__int64)&v20,
                   (__int64)&v21);
  v17 = (unsigned int *)*v16;
  *v16 = 0LL;
  a5 = v17;
  if ( lpMem )
    sub_18000B998(lpMem);
  sub_1800E3334(a1, &a5, v5 + 2, &v22);
  if ( a5 )
    sub_18000B998(a5);
  return a1;
}
