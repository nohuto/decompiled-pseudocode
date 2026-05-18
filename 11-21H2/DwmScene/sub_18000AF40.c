/*
 * XREFs of sub_18000AF40 @ 0x18000AF40
 * Callers:
 *     sub_18000B14C @ 0x18000B14C (sub_18000B14C.c)
 * Callees:
 *     sub_18000B648 @ 0x18000B648 (sub_18000B648.c)
 *     sub_18000B678 @ 0x18000B678 (sub_18000B678.c)
 */

__int64 __fastcall sub_18000AF40(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 1LL;
        LOBYTE(result) = sub_18000B678();
      }
      else
      {
        LOBYTE(result) = sub_18000B648();
      }
      return (unsigned __int8)result;
    }
    else
    {
      return sub_18000AF98(a1, a3);
    }
  }
  else
  {
    LOBYTE(a1) = a3 != 0;
    return sub_18000B0C0(a1);
  }
}
