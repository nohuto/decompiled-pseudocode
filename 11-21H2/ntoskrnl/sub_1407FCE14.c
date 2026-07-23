/*
 * XREFs of sub_1407FCE14 @ 0x1407FCE14
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     sub_140376F58 @ 0x140376F58 (sub_140376F58.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050B2E4 @ 0x14050B2E4 (sub_14050B2E4.c)
 *     sub_14050B428 @ 0x14050B428 (sub_14050B428.c)
 *     sub_14050B88C @ 0x14050B88C (sub_14050B88C.c)
 */

__int64 __fastcall sub_1407FCE14(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax

  switch ( (_DWORD)a1 )
  {
    case 1:
      return sub_140376F58(a2, a3, a4);
    case 0x14:
      return sub_14050B88C(a2, (__int64)a3, a4);
    case 0x2C:
      if ( (unsigned int)a2 >= 4 )
      {
        if ( (_DWORD)a2 == 4 )
        {
          v4 = dword_140C4D044;
          *a4 = 4;
          *a3 = v4;
          return 0LL;
        }
        if ( (unsigned int)a2 >= 8 )
        {
          *a3 = dword_140C4D058;
          a3[1] = dword_140C4D0D0;
          *a4 = 8;
          return 0LL;
        }
      }
      *a4 = 8;
      return 3221225476LL;
    case 0x33:
      return sub_14050B2E4((unsigned int **)a3, a2, a4);
    case 0x34:
      return sub_14050B428(a3, a2, a4);
    default:
      return sub_14042A5E0(a1, a2);
  }
}
