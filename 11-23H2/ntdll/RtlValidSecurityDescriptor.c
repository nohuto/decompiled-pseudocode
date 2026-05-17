/*
 * XREFs of RtlValidSecurityDescriptor @ 0x180071880
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1800F27D0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800F3B14 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 */

char __fastcall RtlValidSecurityDescriptor(__int64 a1)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *(_BYTE *)a1 != 1 )
    return 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v2 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_7;
    v2 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 4));
  }
  if ( v2 && !RtlValidSid(v2) )
    return 0;
LABEL_7:
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v3 = *(_BYTE **)(a1 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_12;
    v3 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 8));
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_12:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_18;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_18;
    v4 = a1 + *(unsigned int *)(a1 + 16);
  }
  if ( v4 && !RtlValidAcl(v4) )
    return 0;
LABEL_18:
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        return 1;
      v5 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v5 && !RtlValidAcl(v5) )
      return 0;
  }
  return 1;
}
