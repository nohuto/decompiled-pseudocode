/*
 * XREFs of sub_14069FCD0 @ 0x14069FCD0
 * Callers:
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 * Callees:
 *     sub_14091BD30 @ 0x14091BD30 (sub_14091BD30.c)
 */

__int64 __fastcall sub_14069FCD0(int *a1, char a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v3 = *a1;
  v4 = 0;
  if ( a2 )
  {
    if ( !v3 )
      return v4;
  }
  else if ( v3 >= 0 )
  {
    return v4;
  }
  if ( a3 )
  {
    v5 = sub_14091BD30(a1, a3);
    if ( v5 >= 0 )
      return (unsigned int)-1073741267;
    return (unsigned int)v5;
  }
  else
  {
    return (unsigned int)-1072103423;
  }
}
