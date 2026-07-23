/*
 * XREFs of sub_14050FCB0 @ 0x14050FCB0
 * Callers:
 *     sub_140521CB0 @ 0x140521CB0 (sub_140521CB0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     KeProfileInterruptWithSource @ 0x140571540 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall sub_14050FCB0(__int64 a1, __int64 a2)
{
  if ( qword_140D01738 )
    return sub_14042A5E0(a1, a2);
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
