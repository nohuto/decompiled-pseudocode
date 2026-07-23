/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x14025BC20
 * Callers:
 *     sub_1406E8D8C @ 0x1406E8D8C (sub_1406E8D8C.c)
 *     sub_14072A9B0 @ 0x14072A9B0 (sub_14072A9B0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( qword_140D00A28 )
    return sub_14042A5E0(a1, a2);
  return result;
}
