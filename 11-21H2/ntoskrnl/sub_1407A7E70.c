/*
 * XREFs of sub_1407A7E70 @ 0x1407A7E70
 * Callers:
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_14066666C @ 0x14066666C (sub_14066666C.c)
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407A7E70(unsigned __int16 *a1, char a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax

  v2 = *a1;
  v3 = v2 + 40;
  if ( (unsigned __int16)v2 < (unsigned __int16)(v2 + 40) )
  {
    v4 = v2 + 40;
    v5 = a1[1];
    if ( a2 )
    {
      if ( v4 <= v5 )
      {
        a1[1] = v3;
        return 0LL;
      }
    }
    else if ( v4 == v5 )
    {
      return 0LL;
    }
  }
  return 3221225485LL;
}
