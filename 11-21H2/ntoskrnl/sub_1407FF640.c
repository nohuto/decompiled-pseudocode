/*
 * XREFs of sub_1407FF640 @ 0x1407FF640
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407FF640(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 == -1 )
    {
      return 4LL;
    }
    else if ( a1 == -2 )
    {
      return 5LL;
    }
    else
    {
      result = 6LL;
      if ( a1 != -3 )
        return *(unsigned int *)(a1 + 8);
    }
  }
  return result;
}
