/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1800121E8
 * Callers:
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlOwnerAcesPresent @ 0x180092130 (RtlOwnerAcesPresent.c)
 * Callees:
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int16 v12; // [rsp+24h] [rbp-24h]
  _BYTE v13[8]; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v12 = 768;
  LOBYTE(a3) = 1;
  if ( (int)RtlInitializeSid(v13, &v11, a3) < 0 )
    return 0;
  v14 = 4;
  if ( !a2 )
    return 0;
  v5 = (unsigned __int8 *)(a2 + 8);
  v6 = 0;
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    if ( (v5[1] & 8) != 0 )
      goto LABEL_13;
    v8 = *v5;
    if ( (unsigned __int8)(*v5 - 5) <= 3u || (unsigned __int8)(v8 - 11) <= 1u )
      break;
    if ( v8 >= 0xFu )
    {
      if ( v8 <= 0x10u )
        break;
    }
    else
    {
      if ( v8 == 4 )
      {
        v9 = (__int64)(v5 + 12);
        goto LABEL_11;
      }
      if ( v8 < 0xBu )
        goto LABEL_10;
    }
    if ( (unsigned __int8)(v8 - 13) <= 1u )
    {
LABEL_10:
      v9 = (__int64)(v5 + 8);
      goto LABEL_11;
    }
LABEL_13:
    ++v6;
    v5 += *((unsigned __int16 *)v5 + 1);
    if ( v6 >= v7 )
      return 0;
  }
  v9 = (__int64)&v5[16 * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC)];
LABEL_11:
  if ( !v9 || !(unsigned __int8)RtlEqualSid(v9, v13) || a1 && (a1 & v5[1]) == 0 )
    goto LABEL_13;
  return 1;
}
