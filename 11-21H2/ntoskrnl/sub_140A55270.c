/*
 * XREFs of sub_140A55270 @ 0x140A55270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140252460 @ 0x140252460 (sub_140252460.c)
 *     sub_14025E910 @ 0x14025E910 (sub_14025E910.c)
 *     sub_1403BB6AC @ 0x1403BB6AC (sub_1403BB6AC.c)
 *     sub_1403BB76C @ 0x1403BB76C (sub_1403BB76C.c)
 *     sub_1403BB7AC @ 0x1403BB7AC (sub_1403BB7AC.c)
 *     sub_1403BB97C @ 0x1403BB97C (sub_1403BB97C.c)
 *     sub_1403BB9B8 @ 0x1403BB9B8 (sub_1403BB9B8.c)
 *     sub_1403BB9FC @ 0x1403BB9FC (sub_1403BB9FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140527B60 @ 0x140527B60 (sub_140527B60.c)
 *     sub_140527B7C @ 0x140527B7C (sub_140527B7C.c)
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 *     sub_140A55474 @ 0x140A55474 (sub_140A55474.c)
 *     sub_140AF9238 @ 0x140AF9238 (sub_140AF9238.c)
 */

__int64 __fastcall sub_140A55270(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // eax

  v4 = a1;
  if ( !(_DWORD)a1 || off_140C07098 && (unsigned __int8)sub_14042A5E0(a1, a2) )
  {
    v5 = 0;
    if ( !v4 )
    {
      qword_140C4BCE8 = (__int64)&qword_140C4BCE0;
      qword_140C4BCE0 = (__int64)&qword_140C4BCE0;
      qword_140C4BCC8 = (__int64)&qword_140C4BCC0;
      qword_140C4BCC0 = (__int64)&qword_140C4BCC0;
      off_140C01F00[0] = (__int64 (__fastcall *)())sub_140B31650;
      v17 = sub_14025E910(a3);
      if ( v17 > 1 )
        v17 = 0;
      dword_140C4BE60 = v17;
      qword_140C02080 = (__int64)sub_14051B870;
      return (unsigned int)v5;
    }
    if ( v4 == 19 )
    {
      return (unsigned int)sub_140A55474();
    }
    else if ( v4 == 8 )
    {
      v5 = sub_140AF9238();
      if ( v5 < 0 )
        return (unsigned int)v5;
      return (unsigned int)sub_1403BB9FC(a3, v16);
    }
    else if ( v4 == 10 )
    {
      dword_140C4BE40 = sub_140252460() != 0;
      v5 = sub_1403BB9B8(a3);
      if ( v5 < 0 )
        return (unsigned int)v5;
      return (unsigned int)sub_140A543D8(0, a3, v14, v15);
    }
    else
    {
      if ( v4 != 17 )
      {
        if ( v4 == 32 )
          sub_1403BB6AC();
        return (unsigned int)v5;
      }
      v5 = sub_1403BB76C();
      if ( v5 < 0 )
        return (unsigned int)v5;
      v5 = sub_1403BB7AC();
      if ( v5 < 0 )
        return (unsigned int)v5;
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 240) + 2648LL) & 4) != 0 )
      {
        if ( byte_140C4BCBC )
        {
          if ( byte_140C4BCBE )
          {
            if ( !byte_140D01778 )
            {
              v5 = sub_140527B7C(v9, v8);
              if ( v5 < 0 )
                return (unsigned int)v5;
            }
          }
        }
      }
      off_140C02010[0] = (__int64 (__fastcall *)())sub_14051A460;
      off_140C02018[0] = (__int64 (__fastcall *)())sub_14051BA00;
      off_140C02020[0] = (__int64 (__fastcall *)())sub_14090A970;
      off_140C02088[0] = (__int64 (__fastcall *)())sub_14051A990;
      off_140C020A0[0] = (__int64 (__fastcall *)())sub_14085F410;
      off_140C020A8[0] = (__int64 (__fastcall *)())sub_140511030;
      v5 = sub_140A55474();
      if ( v5 < 0 )
        return (unsigned int)v5;
      sub_1403BB97C(v11, v10);
      if ( !byte_140C4BCBC )
        return (unsigned int)v5;
      return (unsigned int)sub_140527B60(v13, v12);
    }
  }
  if ( v4 == 8 && !(unsigned __int8)sub_14042A5E0(a1, a2) )
    byte_140C09790 = 0;
  return 0LL;
}
