/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1402B3A30
 * Callers:
 *     RtlSidDominatesForTrust @ 0x1402B33F0 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407369D0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAEA0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  if ( v1 )
    return 0;
  if ( *(_DWORD *)(a1 + 8) )
    return 1;
  return *(_DWORD *)(a1 + 12) == 0;
}
