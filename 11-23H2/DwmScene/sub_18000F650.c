/*
 * XREFs of sub_18000F650 @ 0x18000F650
 * Callers:
 *     sub_18000FE20 @ 0x18000FE20 (sub_18000FE20.c)
 * Callees:
 *     sub_18000C1E8 @ 0x18000C1E8 (sub_18000C1E8.c)
 */

__int64 __fastcall sub_18000F650(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  int v5; // eax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v3 = 0;
    v5 = sub_18000C1E8();
    if ( v5 < 0 || v5 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v5 == v4 )
    {
      a1[v4] = 0;
    }
  }
  else
  {
    v3 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  return v3;
}
