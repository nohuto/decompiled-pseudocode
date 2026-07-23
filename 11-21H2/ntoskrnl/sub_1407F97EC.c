/*
 * XREFs of sub_1407F97EC @ 0x1407F97EC
 * Callers:
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 *     IoQueryInformationByName @ 0x1407F69E0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x1408115E0 (NtDeleteFile.c)
 * Callees:
 *     sub_14066EE14 @ 0x14066EE14 (sub_14066EE14.c)
 */

void __fastcall sub_1407F97EC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
  {
    if ( sub_14066EE14(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
