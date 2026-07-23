/*
 * XREFs of sub_140847B58 @ 0x140847B58
 * Callers:
 *     sub_140847624 @ 0x140847624 (sub_140847624.c)
 *     sub_140847664 @ 0x140847664 (sub_140847664.c)
 *     sub_140847B10 @ 0x140847B10 (sub_140847B10.c)
 *     sub_140847B58 @ 0x140847B58 (sub_140847B58.c)
 * Callees:
 *     sub_140847B58 @ 0x140847B58 (sub_140847B58.c)
 */

__int64 __fastcall sub_140847B58(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = a1 + v6;
    if ( *(_DWORD *)v7 == a2 && !*(_BYTE *)(v7 + 20) )
      break;
    v8 = *(_DWORD *)(v7 + 12);
    if ( v8 )
    {
      result = sub_140847B58(a1 + v6 + v8, a2, a3, a4);
      if ( result )
        return result;
    }
    v6 = *(_DWORD *)(v7 + 16);
    if ( !v6 )
      return 0LL;
  }
  return a1 + v6;
}
