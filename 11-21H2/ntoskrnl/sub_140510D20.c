/*
 * XREFs of sub_140510D20 @ 0x140510D20
 * Callers:
 *     sub_140909FA0 @ 0x140909FA0 (sub_140909FA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140510D20(unsigned int a1)
{
  __int64 *v1; // rbx
  unsigned int v3; // r8d
  __int64 *v4; // rcx

  v1 = (__int64 *)qword_140C4BCE0;
  v3 = 0;
  while ( v1 != &qword_140C4BCE0 )
  {
    v4 = v1;
    v1 = (__int64 *)*v1;
    if ( (v4[59] & 0x40) != 0 )
    {
      if ( v4[20] )
      {
        v3 = sub_14042A5E0(v4[2], a1);
        if ( v3 != -1073741594 )
          break;
      }
    }
  }
  return v3;
}
