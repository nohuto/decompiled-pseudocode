/*
 * XREFs of sub_1800CC384 @ 0x1800CC384
 * Callers:
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 * Callees:
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 *     sub_1800CC898 @ 0x1800CC898 (sub_1800CC898.c)
 *     sub_1800CC904 @ 0x1800CC904 (sub_1800CC904.c)
 *     sub_1800CC994 @ 0x1800CC994 (sub_1800CC994.c)
 *     sub_1800CEA3C @ 0x1800CEA3C (sub_1800CEA3C.c)
 */

__int64 __fastcall sub_1800CC384(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v7; // r9d
  int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // r8d
  __int64 *v17; // rax
  char v18; // bl
  __int64 v19; // rcx
  void **v20; // rax
  __int64 *v21; // rax
  void *v23; // [rsp+40h] [rbp-28h] BYREF
  void *v24; // [rsp+48h] [rbp-20h] BYREF
  void *v25; // [rsp+50h] [rbp-18h] BYREF
  void *v26[2]; // [rsp+58h] [rbp-10h] BYREF
  int v27; // [rsp+90h] [rbp+28h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+30h] BYREF
  int v29; // [rsp+A0h] [rbp+38h] BYREF
  int v30; // [rsp+A8h] [rbp+40h] BYREF

  v29 = a3;
  v30 = 0;
  v5 = a5;
  v27 = 1;
  sub_1800CEA3C(&a5, *(unsigned int *)(a5 + 16), a3);
  if ( HIDWORD(a5) == 1 )
    v9 = v7 | 8;
  else
    v9 = v7 & 0xFFFFFFF7;
  if ( (*(_BYTE *)(v5 + 24) & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (*(_BYTE *)(v5 + 24) & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (*(_BYTE *)(v5 + 24) & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v5 + 32) & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (*(_BYTE *)(v5 + 32) & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  v15 = *(_DWORD *)(v5 + 20);
  v16 = v5 + 4;
  v28 = v14 & 0xFFFFFFBF;
  if ( v8 )
  {
    v30 = v15;
    v21 = (__int64 *)sub_1800CC904(
                       (unsigned int)&v24,
                       v5,
                       v16,
                       (unsigned int)&v29,
                       (__int64)&a5,
                       (__int64)&v28,
                       (__int64)&v30);
    v18 = 12;
    v19 = *v21;
    *v21 = 0LL;
    v20 = &v23;
  }
  else
  {
    v29 = v15;
    v17 = (__int64 *)sub_1800CC994((unsigned int)v26, v5, v16, (unsigned int)&a5, (__int64)&v28, (__int64)&v29);
    v18 = 3;
    v19 = *v17;
    *v17 = 0LL;
    v20 = &v25;
  }
  *v20 = 0LL;
  a5 = v19;
  if ( (v18 & 8) != 0 )
  {
    v18 &= ~8u;
    sub_180055754(&v23);
  }
  if ( (v18 & 4) != 0 )
    sub_180055754(&v24);
  if ( (v18 & 2) != 0 )
    sub_180055754(&v25);
  if ( (v18 & 1) != 0 )
    sub_180055754(v26);
  sub_1800CC898(a1, &a5, v5 + 12, &v27);
  sub_180055754((void **)&a5);
  return a1;
}
