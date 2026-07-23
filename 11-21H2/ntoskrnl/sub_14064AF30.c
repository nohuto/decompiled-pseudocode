/*
 * XREFs of sub_14064AF30 @ 0x14064AF30
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     sub_140219C44 @ 0x140219C44 (sub_140219C44.c)
 *     sub_14064AECC @ 0x14064AECC (sub_14064AECC.c)
 */

__int64 __fastcall sub_14064AF30(char a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int16 *v4; // r9
  bool v5; // zf
  __int16 v9; // bp

  v3 = 0;
  v4 = (__int16 *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 12) == 1;
  *a3 = 0LL;
  if ( !v5 )
    v4 = (__int16 *)a2;
  v9 = *v4;
  if ( sub_140219C44((__int16 *)a2) && a1 == -93 && v9 == 2 )
    *a3 = sub_14064AECC(163, a2);
  else
    return (unsigned int)-1073741406;
  return v3;
}
