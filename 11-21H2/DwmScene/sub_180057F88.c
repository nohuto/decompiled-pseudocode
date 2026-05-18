/*
 * XREFs of sub_180057F88 @ 0x180057F88
 * Callers:
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180057F88(__int64 *Src, __int64 ***a2)
{
  __int64 v4; // r8
  char v5; // bp
  __int64 *v6; // rbx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  sub_180012190(Src, "{", 1uLL);
  v5 = 0;
  v6 = **a2;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( v5 )
      sub_18001F640((const void **)Src, ",", v4);
    else
      v5 = 1;
    sub_18001F5AC((__int64)Src, v6 + 4, v4);
    v7 = (__int64 **)v6[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  sub_18001F640((const void **)Src, "}", v4);
  return Src;
}
