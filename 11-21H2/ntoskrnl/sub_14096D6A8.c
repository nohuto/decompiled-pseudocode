/*
 * XREFs of sub_14096D6A8 @ 0x14096D6A8
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 */

__int64 __fastcall sub_14096D6A8(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // r9d
  int v8; // eax
  char v9; // cl

  v3 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_DWORD *)(v3 + 64) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( (v4 & 0x80u) == 0 )
      {
        v5 = (*(_DWORD *)(v3 + 8) & 4) != 0 ? 0x80000000 : 0;
        if ( (v4 & 8) == 0 )
          goto LABEL_8;
        if ( (v4 & 4) != 0 || (v4 & 3) == 0 )
          break;
      }
    }
LABEL_11:
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      return 0LL;
  }
  v5 |= 1u;
LABEL_8:
  v6 = v5 | 0x20000000;
  if ( (v4 & 0x100) == 0 )
    v6 = v5;
  if ( !v6 )
    goto LABEL_11;
  v8 = (v4 >> 5) & 1;
  v9 = v8 | 4;
  if ( (v4 & 0x40) == 0 )
    v9 = v8;
  if ( sub_1407B9190(
         a2,
         (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12,
         ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF,
         v6,
         v9) )
  {
    return 0LL;
  }
  return 3221225626LL;
}
