/*
 * XREFs of sub_140A16EE4 @ 0x140A16EE4
 * Callers:
 *     sub_140A16C68 @ 0x140A16C68 (sub_140A16C68.c)
 * Callees:
 *     sub_140A16DA4 @ 0x140A16DA4 (sub_140A16DA4.c)
 */

__int64 __fastcall sub_140A16EE4(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  char v6; // al
  unsigned __int64 i; // rbx
  __int16 v8; // cx
  __int64 result; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v5 = a1 + 2LL * (unsigned int)v2;
  v6 = 0;
  for ( i = v5 - 2; i > a1; i -= 2LL )
  {
    v8 = *(_WORD *)i;
    if ( *(_WORD *)i == 42 || v8 == 63 )
    {
      v6 = 1;
    }
    else if ( v8 == 92 )
    {
      if ( v6 )
      {
        result = sub_140A16DA4(i + 2, v5, a2);
        if ( (int)result < 0 )
          return result;
        v5 = i;
        *(_WORD *)i = 0;
        v6 = 0;
      }
      else
      {
        v5 = i;
      }
    }
  }
  if ( !v6 )
    v5 = i;
  return sub_140A16DA4(i & -(__int64)(v6 != 0), v5, a2);
}
