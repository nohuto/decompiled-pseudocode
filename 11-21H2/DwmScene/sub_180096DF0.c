/*
 * XREFs of sub_180096DF0 @ 0x180096DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_18002B780 @ 0x18002B780 (sub_18002B780.c)
 */

__int64 __fastcall sub_180096DF0(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v9 = a2;
    sub_18002B024(a1 + 15, &v9);
    return sub_18002B780((__int64)a1, a2);
  }
  else
  {
    v4 = a1[17];
    a1[17] = 0LL;
    v7[0] = v4;
    v5 = a1[18];
    a1[18] = 0LL;
    v8 = 0LL;
    v7[1] = v5;
    sub_180010910((__int64)v7);
    return sub_180010910((__int64)&v8);
  }
}
