/*
 * XREFs of sub_18003C0D0 @ 0x18003C0D0
 * Callers:
 *     sub_18003C1F0 @ 0x18003C1F0 (sub_18003C1F0.c)
 *     sub_18003E008 @ 0x18003E008 (sub_18003E008.c)
 *     sub_18003E0C8 @ 0x18003E0C8 (sub_18003E0C8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003BFF8 @ 0x18003BFF8 (sub_18003BFF8.c)
 *     sub_18003C094 @ 0x18003C094 (sub_18003C094.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003C0D0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *v6; // rax
  bool v7; // si
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v4 = 0;
  sub_18003E370();
  sub_18003BFF8(a2, &v8);
  if ( sub_180011DE0(&v8) )
  {
    if ( v9 )
      sub_180010530(v9);
    return v8;
  }
  else
  {
    do
    {
      v7 = 0;
      if ( a2 != a1 )
      {
        v6 = sub_18003C094(a2, &v10);
        v4 |= 1u;
        if ( sub_180011DD0(v6) )
          v7 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        if ( v11 )
          sub_180010530(v11);
      }
      if ( !v7 )
        break;
      a2 = *sub_180012624(a2, &v12);
      if ( v13 )
        sub_180010530(v13);
    }
    while ( a2 );
    if ( a2 )
    {
      LOBYTE(v4) = v4 | 2;
      a2 = *sub_18003C094(a2, &v10);
    }
    if ( (v4 & 2) != 0 && v11 )
      sub_180010530(v11);
    if ( v9 )
      sub_180010530(v9);
    return a2;
  }
}
