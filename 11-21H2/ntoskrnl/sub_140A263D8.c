/*
 * XREFs of sub_140A263D8 @ 0x140A263D8
 * Callers:
 *     sub_14076D160 @ 0x14076D160 (sub_14076D160.c)
 *     sub_140A25D48 @ 0x140A25D48 (sub_140A25D48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A263D8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 **v7; // r8
  unsigned int v8; // r9d
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ecx

  v7 = &off_140007230;
  *a7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *v7;
    if ( *v7 )
      break;
LABEL_8:
    ++v8;
    v7 += 2;
    if ( v8 >= 4 )
      return a6 < *a7 ? 0xC0000023 : 0;
  }
  if ( a5 )
  {
    v10 = *a7;
    if ( (unsigned int)v10 < a6 )
    {
      v11 = 5 * v10;
      *(_OWORD *)(a5 + 4 * v11) = *(_OWORD *)v9;
      *(_DWORD *)(a5 + 4 * v11 + 16) = *((_DWORD *)v9 + 4);
    }
  }
  v12 = *a7 + 1;
  if ( v12 >= *a7 )
  {
    *a7 = v12;
    goto LABEL_8;
  }
  *a7 = 0;
  return 3221225621LL;
}
