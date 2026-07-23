/*
 * XREFs of sub_140681130 @ 0x140681130
 * Callers:
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 * Callees:
 *     sub_140681174 @ 0x140681174 (sub_140681174.c)
 */

__int64 __fastcall sub_140681130(int a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // rdx
  int v5; // edx
  unsigned int v6; // r9d

  v2 = 0;
  v3 = a2;
  v4 = 0LL;
  if ( a1 )
  {
    while ( *(_WORD *)sub_140681174(v3, v4) <= 0x200u )
    {
      v4 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v4 >= v6 )
        return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
