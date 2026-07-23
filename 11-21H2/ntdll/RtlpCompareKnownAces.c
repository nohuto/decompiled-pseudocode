/*
 * XREFs of RtlpCompareKnownAces @ 0x180012450
 * Callers:
 *     RtlpCompareAces @ 0x180012418 (RtlpCompareAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x1800120D0 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

char __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  int v10; // edx
  void *v11; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-40h] BYREF
  _OWORD Sid[3]; // [rsp+28h] [rbp-38h] BYREF

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  if ( !RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    memset(Sid, 0, sizeof(Sid));
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    DWORD2(Sid[0]) = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, Sid) )
      return 0;
    v10 = *((_DWORD *)a1 + 4);
    if ( v10 )
    {
      if ( v10 != 1 || !a4 )
        return 0;
      v11 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v11 = a3;
    }
    if ( !RtlEqualSid(a2 + 8, v11) )
      return 0;
  }
  return 1;
}
