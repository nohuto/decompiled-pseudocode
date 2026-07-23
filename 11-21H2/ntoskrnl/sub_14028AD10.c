/*
 * XREFs of sub_14028AD10 @ 0x14028AD10
 * Callers:
 *     sub_14023F250 @ 0x14023F250 (sub_14023F250.c)
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_140388FC8 @ 0x140388FC8 (sub_140388FC8.c)
 * Callees:
 *     sub_14028AD4C @ 0x14028AD4C (sub_14028AD4C.c)
 */

__int64 __fastcall sub_14028AD10(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 528);
    if ( byte_140C54C58 == 1 )
      v2 = *(_QWORD *)(a1 + 592);
  }
  else
  {
    v3 = *((_QWORD *)qword_140D06C40 + 1);
  }
  return sub_14028AD4C(a1, a2, v3, v2);
}
