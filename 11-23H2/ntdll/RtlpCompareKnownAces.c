/*
 * XREFs of RtlpCompareKnownAces @ 0x18001075C
 * Callers:
 *     RtlpCompareAces @ 0x180010724 (RtlpCompareAces.c)
 * Callees:
 *     RtlEqualSid @ 0x180010830 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x180016B40 (RtlEqualPrefixSid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

bool __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v9; // r8
  int v11; // edx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-40h] BYREF
  __int16 v14; // [rsp+24h] [rbp-3Ch]
  _OWORD v15[3]; // [rsp+28h] [rbp-38h] BYREF

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a2[1] ^ a1[1]) & 0xC0) != 0 )
    return 0;
  if ( !(unsigned __int8)RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    v13 = 0;
    v14 = 768;
    LOBYTE(v9) = 1;
    memset(v15, 0, sizeof(v15));
    if ( (int)RtlInitializeSid(v15, &v13, v9) < 0 )
      return 0;
    DWORD2(v15[0]) = 0;
    if ( !(unsigned __int8)RtlEqualPrefixSid(a1 + 8, v15) )
      return 0;
    v11 = *((_DWORD *)a1 + 4);
    if ( v11 )
    {
      if ( v11 != 1 || !a4 )
        return 0;
      v12 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v12 = a3;
    }
    return (unsigned __int8)RtlEqualSid(a2 + 8, v12) != 0;
  }
  return 1;
}
