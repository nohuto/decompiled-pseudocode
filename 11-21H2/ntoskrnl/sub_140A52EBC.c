/*
 * XREFs of sub_140A52EBC @ 0x140A52EBC
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     sub_140A6C4B0 @ 0x140A6C4B0 (sub_140A6C4B0.c)
 */

__int64 __fastcall sub_140A52EBC(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // ebx
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  if ( *v1 == 1281517896 )
  {
    v2 = 1;
    v3 = v1 + 4;
    do
    {
      v4 = v3[1];
      if ( (_DWORD)v4 )
        result = sub_140A6C4B0((char *)v1 + *v3, v4, v2);
      ++v2;
      v3 += 2;
    }
    while ( v2 <= 2 );
  }
  return result;
}
