/*
 * XREFs of sub_140510A40 @ 0x140510A40
 * Callers:
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140510BAC @ 0x140510BAC (sub_140510BAC.c)
 */

__int64 __fastcall sub_140510A40(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 *v8; // rbx
  unsigned int v9; // edx
  __int64 *v10; // rcx
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]

  v12 = 0LL;
  v13 = 0LL;
  if ( a6 )
  {
    LOBYTE(a2) = a7;
    sub_140510BAC(a6, a2, &v12);
  }
  v8 = (__int64 *)qword_140C4BCE0;
  v9 = 0;
  while ( v8 != &qword_140C4BCE0 )
  {
    v10 = v8;
    v8 = (__int64 *)*v8;
    if ( (v10[59] & 0x40) != 0 )
    {
      if ( v10[19] )
      {
        v9 = sub_14042A5E0(v10[2], a1);
        if ( v9 != -1073741594 )
          break;
      }
    }
  }
  return v9;
}
