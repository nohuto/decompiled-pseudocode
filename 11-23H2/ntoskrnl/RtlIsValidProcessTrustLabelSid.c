/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1402B3CC0
 * Callers:
 *     RtlSidDominatesForTrust @ 0x1402B3680 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x140736BC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BB0A0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // edx

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  if ( v1 )
    return 0;
  if ( *((_DWORD *)Sid + 2) )
    return 1;
  return *((_DWORD *)Sid + 3) == 0;
}
