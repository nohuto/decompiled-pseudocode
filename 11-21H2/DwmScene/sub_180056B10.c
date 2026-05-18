/*
 * XREFs of sub_180056B10 @ 0x180056B10
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_18006906C @ 0x18006906C (sub_18006906C.c)
 */

void __fastcall sub_180056B10(__int64 a1)
{
  __int64 *j; // rbx
  __int64 **v2; // rax
  __int64 *i; // rax
  __int64 *v4; // rcx

  j = **(__int64 ***)(a1 + 18560);
  while ( !*((_BYTE *)j + 25) )
  {
    sub_18006906C(j[8]);
    v2 = (__int64 **)j[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v4 = *v2;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v4 + 25); v4 = (__int64 *)*v4 )
        j = v4;
    }
  }
}
