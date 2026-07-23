/*
 * XREFs of RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EF57C
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtDeleteKey @ 0x1800A29E0 (NtDeleteKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EF610 (RtlpIsEmptyImageFileOptionsKey.c)
 */

__int64 __fastcall RtlpDeleteEmptyImageFileOptionsKey(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  int v4; // eax
  char IsEmptyImageFileOptionsKey; // bp
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = RtlpOpenImageFileOptionsKeyEx(a1, 0x10009u, 0, &KeyHandle);
    if ( v4 < 0 )
      break;
    IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
      NtDeleteKey(KeyHandle);
    NtClose(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
    {
      if ( (unsigned int)++v3 < 2 )
        continue;
    }
    return 0LL;
  }
  if ( v4 != -1073741772 )
    return (unsigned int)v4;
  return v1;
}
