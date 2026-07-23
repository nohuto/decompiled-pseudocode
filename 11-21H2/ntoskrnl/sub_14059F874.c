/*
 * XREFs of sub_14059F874 @ 0x14059F874
 * Callers:
 *     sub_14059F4C4 @ 0x14059F4C4 (sub_14059F4C4.c)
 * Callees:
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 */

__int64 __fastcall sub_14059F874(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // r11
  unsigned __int64 v6; // rdi
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ecx

  v4 = sub_1403342D0(a1, *(_QWORD *)(a1 + 8), 0xFFFFFFFF);
  v5 = *(_DWORD **)(a1 + 112);
  v6 = (a2 - v4) >> 12;
  v7 = 0;
  if ( !v5 )
    return 0LL;
  v8 = *v5 - 1;
  if ( v8 < 0 )
    return 0LL;
  while ( 1 )
  {
    v9 = (v7 + v8) >> 1;
    v10 = v5[12 * v9 + 8];
    if ( (unsigned int)v6 < v10 )
    {
      if ( !v9 )
        return 0LL;
      v8 = v9 - 1;
      goto LABEL_8;
    }
    if ( (unsigned int)v6 < v5[12 * v9 + 12] + v10 )
      break;
    v7 = v9 + 1;
LABEL_8:
    if ( v8 < v7 )
      return 0LL;
  }
  if ( v8 < v7 )
    return 0LL;
  return (__int64)&v5[12 * v9 + 2];
}
