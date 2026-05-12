/*
 * XREFs of sub_1C0044FB8 @ 0x1C0044FB8
 * Callers:
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 * Callees:
 *     sub_1C0012F88 @ 0x1C0012F88 (sub_1C0012F88.c)
 *     sub_1C0044F40 @ 0x1C0044F40 (sub_1C0044F40.c)
 */

__int64 __fastcall sub_1C0044FB8(int *a1)
{
  unsigned int v2; // edi
  char *v3; // rax
  int v4; // r9d
  int v5; // r10d
  char *v6; // rsi
  int v7; // ebx
  unsigned int v8; // edx
  char *v9; // rax
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  while ( 1 )
  {
    v3 = sub_1C0012F88(a1, v2++);
    v6 = v3;
    if ( !v3 )
      break;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_1C0044F40(v6, v8);
      v8 = v10 + 1;
      if ( !v9 )
        break;
      v11 = 32;
      if ( *(_DWORD *)v9 != 1 )
        v11 = 0;
      v7 += v11;
    }
  }
  return (unsigned int)(v5 + v4);
}
