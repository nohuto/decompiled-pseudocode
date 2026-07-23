/*
 * XREFs of RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EE16C
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtDeleteKey @ 0x1800A0920 (NtDeleteKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE200 (RtlpIsEmptyImageFileOptionsKey.c)
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
