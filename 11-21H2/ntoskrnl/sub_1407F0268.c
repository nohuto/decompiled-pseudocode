/*
 * XREFs of sub_1407F0268 @ 0x1407F0268
 * Callers:
 *     sub_1407F01CC @ 0x1407F01CC (sub_1407F01CC.c)
 * Callees:
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 */

__int64 __fastcall sub_1407F0268(int a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  PVOID *i; // rcx

  for ( i = (PVOID *)qword_140C242A0; ; i = (PVOID *)*i )
  {
    if ( i == &qword_140C242A0 )
      return 3221226021LL;
    if ( *((_DWORD *)i + 9) == a1 )
      break;
  }
  return sub_14036AAF4((__int64)i[12], a2, a3);
}
