/*
 * XREFs of sub_140863D20 @ 0x140863D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140368E90 @ 0x140368E90 (sub_140368E90.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140863D20(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9

  v6 = -1073741811;
  sub_140A48330((_DWORD)a1);
  v9 = 0x47365DD125DFA149LL - *a1;
  if ( *a1 == 0x47365DD125DFA149LL )
    v9 = 0x87815B7BA3E8ABB5uLL - a1[1];
  if ( !v9 )
  {
    v8 = 4LL;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        if ( *a2 )
        {
          byte_140C232D2 = 1;
        }
        else
        {
          byte_140C232D2 = 0;
          if ( byte_140C232D1 )
            sub_140368E90(4, 7u);
        }
        v6 = 0;
      }
    }
  }
  sub_140A47CF8(v8, v7);
  return v6;
}
