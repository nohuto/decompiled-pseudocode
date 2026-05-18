/*
 * XREFs of sub_18003DF4C @ 0x18003DF4C
 * Callers:
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18003DF4C(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  sub_18003E330(a1);
  sub_18001246C(&v8, a2);
  while ( sub_180011DE0(&v8) )
  {
    if ( v8 == a1 )
    {
      if ( v9 )
        sub_180010530(v9);
      v5 = a2[1];
      if ( v5 )
        sub_180010530(v5);
      return 1;
    }
    v4 = sub_180012624(v8, &v10);
    sub_180011020(&v8, v4);
    if ( v11 )
      sub_180010530(v11);
  }
  if ( v9 )
    sub_180010530(v9);
  v7 = a2[1];
  if ( v7 )
    sub_180010530(v7);
  return 0;
}
