/*
 * XREFs of sub_14080C220 @ 0x14080C220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 */

__int64 __fastcall sub_14080C220(char a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ecx

  if ( a1 )
  {
    *a2 = 1;
    return 0LL;
  }
  sub_1407EF098(1);
  if ( (_BYTE)xmmword_140C1F400 )
  {
    *a3 = 0;
    v6 = BYTE8(xmmword_140C1F400) & 7;
    if ( v6 == 1 )
    {
      *a2 = 2;
    }
    else
    {
      if ( v6 - 2 > 4 )
        goto LABEL_3;
      *a2 = 10;
      *a3 = dword_140D3B7E0[v6];
    }
    sub_1407EF120();
    return 0LL;
  }
LABEL_3:
  sub_1407EF120();
  if ( byte_140C5AC3C )
  {
    *a2 = 2;
  }
  else
  {
    *a2 = 10;
    *a3 = 0;
  }
  return 0LL;
}
