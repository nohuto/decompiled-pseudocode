/*
 * XREFs of SeCompareSigningLevels @ 0x140811D10
 * Callers:
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall SeCompareSigningLevels(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1B8E0 )
    return sub_14042A5E0(a1, a2);
  return result;
}
