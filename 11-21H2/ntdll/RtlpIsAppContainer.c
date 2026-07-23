/*
 * XREFs of RtlpIsAppContainer @ 0x1800F3608
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000EC7C (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A4650 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A4670 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A48B0 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-9h] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-1h] BYREF
  int TokenInformation; // [rsp+44h] [rbp+3h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+Fh] BYREF
  _DWORD v10[2]; // [rsp+80h] [rbp+3Fh] BYREF
  __int16 v11; // [rsp+88h] [rbp+47h]

  Handle = 0LL;
  *a2 = 0;
  if ( a1 )
  {
LABEL_7:
    ReturnLength = 0;
    v3 = NtQueryInformationToken(a1, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( v3 >= 0 )
      *a2 = TokenInformation != 0;
    goto LABEL_9;
  }
  v3 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &Handle);
  if ( v3 == -1073741700 )
  {
    v3 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandle);
    if ( v3 < 0 )
      goto LABEL_9;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v10;
    v10[1] = 2;
    ObjectAttributes.Length = 48;
    v10[0] = 12;
    v11 = 1;
    v3 = NtDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
    NtClose(TokenHandle);
  }
  if ( v3 >= 0 )
  {
    a1 = Handle;
    goto LABEL_7;
  }
LABEL_9:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
