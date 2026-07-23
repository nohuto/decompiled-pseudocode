/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x1405E5200
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     memset @ 0x140435E00 (memset.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  NTSTATUS result; // eax
  char v9; // si
  int v10; // [rsp+38h] [rbp-99h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v12; // [rsp+40h] [rbp-91h] BYREF
  PSID Sid2[12]; // [rsp+48h] [rbp-89h] BYREF
  PSID Sid1[12]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+150h] [rbp+7Fh] BYREF

  v10 = 0;
  ReturnLength = 0;
  memset(Sid2, 0, 0x58uLL);
  memset(Sid1, 0, 0x58uLL);
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  LODWORD(v12) = 0;
  TokenInformation = 0;
  if ( AppContainerSid )
  {
    TokenHandle = (HANDLE)-4LL;
    v9 = 0;
  }
  else
  {
    v9 = 1;
    if ( !TokenHandle )
      TokenHandle = (HANDLE)-6LL;
    v10 = 0;
    result = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &v10, 4u, &ReturnLength);
    if ( result < 0 )
      return result;
    if ( !v10 )
    {
      result = 0;
      *ObjectPath = 0LL;
      return result;
    }
  }
  if ( !RelativePath || !v9 )
    return sub_1409B9B50(TokenHandle, AppContainerSid);
  result = NtQueryInformationToken(
             (HANDLE)0xFFFFFFFFFFFFFFFCLL,
             TokenPrivateNameSpace,
             &TokenInformation,
             4u,
             &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !TokenInformation )
    return sub_1409B9B50(TokenHandle, AppContainerSid);
  result = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v12, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !(_DWORD)v12 )
    return -1073741637;
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, Sid2, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, Sid1, 0x58u, &ReturnLength);
    if ( result >= 0 )
    {
      if ( !RtlEqualSid(Sid1[0], Sid2[0]) )
        return -1073741637;
      return sub_1409B9B50(TokenHandle, AppContainerSid);
    }
  }
  return result;
}
