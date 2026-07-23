/*
 * XREFs of sub_14092CE90 @ 0x14092CE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14084D8D0 @ 0x14084D8D0 (sub_14084D8D0.c)
 */

__int64 __fastcall sub_14092CE90(__int64 a1, __int64 a2, unsigned __int8 **a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rcx

  v6 = 1;
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v7 = *a3;
      if ( *a3 )
      {
        if ( a6 == 3 && (dword_140C48C08 || *v7 == 42) )
        {
          if ( (unsigned int)sub_14084D8D0(
                               v7,
                               dword_140C48C08,
                               (a5[2] < 0x80u ? 0x20000000 : 419430400) + a5[1] + ((*a5 + (a5[2] << 8)) << 8)) )
            return 2;
        }
      }
    }
  }
  return v6;
}
