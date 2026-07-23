/*
 * XREFs of sub_140294C0C @ 0x140294C0C
 * Callers:
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     sub_140704D58 @ 0x140704D58 (sub_140704D58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140294C0C(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( (a2 & 0x10000) == 0 )
  {
    if ( (a2 & 0x100000) != 0 )
    {
      a1 += 48LL;
    }
    else if ( (a2 & 0x200000) == 0 )
    {
      if ( (a2 & 0x400000) != 0 )
        return a1;
      return v2;
    }
  }
  return a1;
}
