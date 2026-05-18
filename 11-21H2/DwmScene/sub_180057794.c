/*
 * XREFs of sub_180057794 @ 0x180057794
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180054AD8 @ 0x180054AD8 (sub_180054AD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180057794(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 **v8; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  _BYTE v12[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+10h]

  v14 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = (__int64 *)sub_180011088(0x40uLL);
  sub_18001DE8C(v13, (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v13);
  *(_WORD *)(v6 + 24) = 257;
  *a2 = v6;
  v7 = **(__int64 ***)(a1 + 18560);
  while ( !*((_BYTE *)v7 + 25) )
  {
    sub_180054AD8(a2, (__int64)v12, v7 + 4);
    v8 = (__int64 **)v7[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v7 = i;
      v7 = i;
    }
    else
    {
      v7 = (__int64 *)v7[2];
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v7 = j;
    }
  }
  return a2;
}
