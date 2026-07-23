/*
 * XREFs of ntoskrnl_23 @ 0x140811D70
 * Callers:
 *     sub_140864400 @ 0x140864400 (sub_140864400.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall ntoskrnl_23(_QWORD *a1, __int64 a2)
{
  if ( qword_140C1B958 )
    return sub_14042A5E0(a1, a2);
  *a1 = 0LL;
  return 0LL;
}
