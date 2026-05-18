/*
 * XREFs of sub_1800E2F14 @ 0x1800E2F14
 * Callers:
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800E3334 @ 0x1800E3334 (sub_1800E3334.c)
 *     sub_1800E33A0 @ 0x1800E33A0 (sub_1800E33A0.c)
 *     sub_1800E3430 @ 0x1800E3430 (sub_1800E3430.c)
 *     sub_1800E5B6C @ 0x1800E5B6C (sub_1800E5B6C.c)
 */

__int64 __fastcall sub_1800E2F14(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int *v5; // rdi
  int v7; // r9d
  int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // eax
  int v16; // r8d
  void **v17; // rax
  char v18; // bl
  unsigned int *v19; // rcx
  LPVOID *p_lpMem; // rax
  void **v21; // rax
  LPVOID lpMem; // [rsp+40h] [rbp-20h] BYREF
  LPVOID v24; // [rsp+48h] [rbp-18h] BYREF
  LPVOID v25; // [rsp+50h] [rbp-10h] BYREF
  LPVOID v26; // [rsp+58h] [rbp-8h] BYREF
  int v27; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+48h] BYREF

  v29 = a3;
  v30 = 0;
  v5 = a5;
  v27 = 1;
  sub_1800E5B6C(&a5, a5[4], a3);
  if ( HIDWORD(a5) == 1 )
    v9 = v7 | 8;
  else
    v9 = v7 & 0xFFFFFFF7;
  if ( (v5[6] & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (v5[6] & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (v5[6] & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (v5[8] & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (v5[8] & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  v15 = v5[5];
  v16 = (_DWORD)v5 + 4;
  v28 = v14 & 0xFFFFFFBF;
  if ( v8 )
  {
    v30 = v15;
    v21 = (void **)sub_1800E33A0(
                     (unsigned int)&v24,
                     (_DWORD)v5,
                     v16,
                     (unsigned int)&v29,
                     (__int64)&a5,
                     (__int64)&v28,
                     (__int64)&v30);
    v18 = 12;
    v19 = (unsigned int *)*v21;
    *v21 = 0LL;
    p_lpMem = &lpMem;
  }
  else
  {
    v29 = v15;
    v17 = (void **)sub_1800E3430((unsigned int)&v26, (_DWORD)v5, v16, (unsigned int)&a5, (__int64)&v28, (__int64)&v29);
    v18 = 3;
    v19 = (unsigned int *)*v17;
    *v17 = 0LL;
    p_lpMem = &v25;
  }
  *p_lpMem = 0LL;
  a5 = v19;
  if ( (v18 & 8) != 0 )
  {
    v18 &= ~8u;
    if ( lpMem )
      sub_18000B998(lpMem);
  }
  if ( (v18 & 4) != 0 )
  {
    v18 &= ~4u;
    if ( v24 )
      sub_18000B998(v24);
  }
  if ( (v18 & 2) != 0 )
  {
    v18 &= ~2u;
    if ( v25 )
      sub_18000B998(v25);
  }
  if ( (v18 & 1) != 0 && v26 )
    sub_18000B998(v26);
  sub_1800E3334(a1, &a5, v5 + 3, &v27);
  if ( a5 )
    sub_18000B998(a5);
  return a1;
}
