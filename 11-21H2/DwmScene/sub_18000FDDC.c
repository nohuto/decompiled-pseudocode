/*
 * XREFs of sub_18000FDDC @ 0x18000FDDC
 * Callers:
 *     sub_180010510 @ 0x180010510 (sub_180010510.c)
 * Callees:
 *     sub_18000C1F8 @ 0x18000C1F8 (sub_18000C1F8.c)
 */

__int64 __fastcall sub_18000FDDC(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  int v5; // eax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v3 = 0;
    v5 = sub_18000C1F8();
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
