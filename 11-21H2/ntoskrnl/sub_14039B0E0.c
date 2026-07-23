/*
 * XREFs of sub_14039B0E0 @ 0x14039B0E0
 * Callers:
 *     sub_14039B050 @ 0x14039B050 (sub_14039B050.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14039B0E0(__int64 a1, __int64 a2)
{
  if ( qword_140CF87D0 )
    return sub_14042A5E0(0LL, a2);
  else
    return __readmsr(0x40000020u);
}
