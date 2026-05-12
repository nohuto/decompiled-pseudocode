/*
 * XREFs of sub_1C004A90C @ 0x1C004A90C
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C00465B0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     sub_1C003F900 @ 0x1C003F900 (sub_1C003F900.c)
 *     sub_1C00AA894 @ 0x1C00AA894 (sub_1C00AA894.c)
 */

__int64 __fastcall sub_1C004A90C(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // r14
  int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = a1 + 792;
  v3 = 0x80000000;
  v4 = a1 + 760;
  do
  {
    v7 = sub_1C003F900(
           v4,
           v3,
           *(_QWORD *)(a1 + 4232),
           *(_QWORD *)(a1 + 4224),
           *(_QWORD *)(a1 + 4240),
           *(_DWORD *)(a1 + 4216),
           *a2,
           v2);
    if ( v7 >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 800);
      *(_QWORD *)(a1 + 4232) = v10 & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4224) = v10 | 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x8000000 );
  if ( *a2 == 0x80000000 )
    return (unsigned int)v7;
  v8 = 0x80000000;
  while ( 1 )
  {
    v7 = sub_1C003F900(
           v4,
           v8,
           *(_QWORD *)(a1 + 4232),
           *(_QWORD *)(a1 + 4224),
           *(_QWORD *)(a1 + 4240),
           *(_DWORD *)(a1 + 4216),
           0x80000000,
           v2);
    if ( v7 >= 0 )
      break;
    v8 >>= 1;
    if ( v8 < 0x8000000 )
      return (unsigned int)v7;
  }
  v9 = *(_QWORD *)(a1 + 800);
  *a2 = 0x80000000;
  *(_QWORD *)(a1 + 4232) = v9 & 0xFFFFFFFF00000000uLL;
  *(_QWORD *)(a1 + 4224) = v9 | 0xFFFFFFFFLL;
LABEL_11:
  sub_1C00AA894(v4, v2);
  return (unsigned int)v7;
}
