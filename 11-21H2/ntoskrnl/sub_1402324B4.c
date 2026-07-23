/*
 * XREFs of sub_1402324B4 @ 0x1402324B4
 * Callers:
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402F8EF0 @ 0x1402F8EF0 (sub_1402F8EF0.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall sub_1402324B4(__int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  return !v1 && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}
