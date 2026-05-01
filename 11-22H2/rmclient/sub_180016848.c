/*
 * XREFs of sub_180016848 @ 0x180016848
 * Callers:
 *     sub_180007DE0 @ 0x180007DE0 (sub_180007DE0.c)
 * Callees:
 *     sub_180008690 @ 0x180008690 (sub_180008690.c)
 */

__int64 __fastcall sub_180016848(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v3; // rcx
  int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rax

  v2 = *(_BYTE *)(a1 + 32);
  v3 = a1 + 24;
  v4 = v2 & 1;
  v5 = 0;
  v7 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v7 )
      return 0LL;
    v7 ^= v3;
  }
  if ( !v7 )
    return 0LL;
  do
  {
    v8 = sub_180008690(a2);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v7;
    }
    if ( v4 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  while ( v7 );
  LOBYTE(v5) = v7 != 0;
  return v5;
}
