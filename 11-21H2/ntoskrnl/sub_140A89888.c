/*
 * XREFs of sub_140A89888 @ 0x140A89888
 * Callers:
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 * Callees:
 *     sub_140A89FC0 @ 0x140A89FC0 (sub_140A89FC0.c)
 */

char __fastcall sub_140A89888(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  char **v3; // rax
  __int64 v4; // rdx

  if ( !(unsigned __int8)sub_140A89FC0(&off_140D50040, a1) && !(unsigned __int8)sub_140A89FC0(&off_140D4E690, v1) )
  {
    v3 = &off_140D4E250;
    while ( *((_DWORD *)v3 + 7) != (_DWORD)v2 )
    {
      v3 += 4;
      if ( !*v3 )
      {
        if ( (unsigned __int8)sub_140A89FC0(&off_140D4F470, v2) )
          return 1;
        return sub_140A89FC0(&off_140D4E190, v4);
      }
    }
  }
  return 1;
}
