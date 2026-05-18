/*
 * XREFs of sub_1800CC268 @ 0x1800CC268
 * Callers:
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 * Callees:
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 *     sub_1800CC898 @ 0x1800CC898 (sub_1800CC898.c)
 *     sub_1800CC994 @ 0x1800CC994 (sub_1800CC994.c)
 *     sub_1800CEA3C @ 0x1800CEA3C (sub_1800CEA3C.c)
 */

__int64 __fastcall sub_1800CC268(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // rcx
  void *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v20; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+28h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = a4;
  v22 = a3;
  v5 = a5;
  sub_1800CEA3C(&a5, *(unsigned int *)(a5 + 16), a2);
  if ( HIDWORD(a5) == 1 )
    v9 = v7 | 8;
  else
    v9 = v7 & 0xFFFFFFF7;
  if ( (*(_BYTE *)(v5 + 32) & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (*(_BYTE *)(v5 + 32) & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (*(_BYTE *)(v5 + 32) & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v5 + 40) & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (*(_BYTE *)(v5 + 40) & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  if ( v8 <= 1 )
    v15 = v14 & 0xFFFFFFBF;
  else
    v15 = v14 | 0x40;
  v22 = *(_DWORD *)(v5 + 28);
  v21 = v15;
  v16 = (__int64 *)sub_1800CC994((unsigned int)v19, v5, (int)v5 + 4, (unsigned int)&a5, (__int64)&v21, (__int64)&v22);
  v20 = 0LL;
  v17 = *v16;
  *v16 = 0LL;
  a5 = v17;
  sub_180055754(&v20);
  sub_180055754(v19);
  sub_1800CC898(a1, &a5, v5 + 8, &v23);
  sub_180055754((void **)&a5);
  return a1;
}
