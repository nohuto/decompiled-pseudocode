/*
 * XREFs of sub_14051B254 @ 0x14051B254
 * Callers:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_140A61BE0 @ 0x140A61BE0 (sub_140A61BE0.c)
 * Callees:
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 */

__int64 __fastcall sub_14051B254(char a1, _DWORD *a2)
{
  char v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( sub_1403AAE80(0LL, 0LL, 0LL, &v5) )
  {
    if ( v5 == 2 )
    {
      if ( !a1 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
    else if ( v5 == 1 )
    {
      *a2 = 3 - (a1 != 0);
      return 0LL;
    }
  }
  return 3221225659LL;
}
