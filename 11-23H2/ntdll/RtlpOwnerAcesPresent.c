/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1800104FC
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlOwnerAcesPresent @ 0x18008CEE0 (RtlOwnerAcesPresent.c)
 * Callees:
 *     RtlEqualSid @ 0x180010830 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  unsigned __int8 *v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned __int8 v7; // cl
  char *v8; // rcx
  _SID_IDENTIFIER_AUTHORITY v10; // [rsp+20h] [rbp-28h] BYREF
  _BYTE Sid2[8]; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  *(_DWORD *)v10.Value = 0;
  *(_WORD *)&v10.Value[4] = 768;
  if ( RtlInitializeSid(Sid2, &v10, 1u) < 0 )
    return 0;
  v12 = 4;
  if ( !a2 )
    return 0;
  v4 = (unsigned __int8 *)(a2 + 8);
  v5 = 0;
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    if ( (v4[1] & 8) != 0 )
      goto LABEL_13;
    v7 = *v4;
    if ( (unsigned __int8)(*v4 - 5) <= 3u || (unsigned __int8)(v7 - 11) <= 1u )
      break;
    if ( v7 >= 0xFu )
    {
      if ( v7 <= 0x10u )
        break;
    }
    else
    {
      if ( v7 == 4 )
      {
        v8 = (char *)(v4 + 12);
        goto LABEL_11;
      }
      if ( v7 < 0xBu )
        goto LABEL_10;
    }
    if ( (unsigned __int8)(v7 - 13) <= 1u )
    {
LABEL_10:
      v8 = (char *)(v4 + 8);
      goto LABEL_11;
    }
LABEL_13:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= v6 )
      return 0;
  }
  v8 = (char *)&v4[16 * (*((_DWORD *)v4 + 2) & 1) + ((8LL * (*((_DWORD *)v4 + 2) & 2)) | 0xC)];
LABEL_11:
  if ( !v8 || !RtlEqualSid(v8, Sid2) || a1 && (a1 & v4[1]) == 0 )
    goto LABEL_13;
  return 1;
}
