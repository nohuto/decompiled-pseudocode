/*
 * XREFs of sub_1406B9878 @ 0x1406B9878
 * Callers:
 *     sub_1406B9830 @ 0x1406B9830 (sub_1406B9830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406B9878(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // edx
  int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // rax
  int v9; // eax
  unsigned int *v11; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 <= 1 )
  {
    if ( v2 == 1 )
    {
      v11 = *(unsigned int **)(a1 + 48);
      if ( v11 )
        return *v11;
      else
        return 1;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = 0;
    v6 = v2 * v4;
    v7 = 0LL;
    do
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 40), v6 + v5) )
      {
        v8 = *(_QWORD *)(a1 + 48);
        if ( v8 )
          v9 = *(_DWORD *)(v7 + v8);
        else
          v9 = 1 << v5;
        v3 |= v9;
      }
      ++v5;
      v7 += 4LL;
    }
    while ( v5 < v2 );
  }
  return v3;
}
