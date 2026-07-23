/*
 * XREFs of RtlImpersonateSelfEx @ 0x1407D32DC
 * Callers:
 *     CmpCmdHiveOpen @ 0x14068B2C0 (CmpCmdHiveOpen.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14041A840 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14041ACA0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x14041AEE0 (ZwDuplicateToken.c)
 */

NTSTATUS __cdecl RtlImpersonateSelfEx(
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
        ACCESS_MASK AdditionalAccess,
        PHANDLE ThreadToken)
{
  int v5; // ebx
  HANDLE ThreadInformation; // [rsp+30h] [rbp-29h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v10[2]; // [rsp+70h] [rbp+17h] BYREF
  __int16 v11; // [rsp+78h] [rbp+1Fh]
  __int16 v12; // [rsp+7Ah] [rbp+21h]

  TokenHandle = 0LL;
  ThreadInformation = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0;
  if ( !ThreadToken && AdditionalAccess )
    return -1073741584;
  v10[1] = ImpersonationLevel;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityQualityOfService = v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v10[0] = 12;
  v11 = 1;
  v5 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0x200u, &TokenHandle);
  if ( v5 >= 0 )
  {
    v5 = ZwDuplicateToken(
           TokenHandle,
           AdditionalAccess | 4,
           &ObjectAttributes,
           0,
           TokenImpersonation,
           &ThreadInformation);
    if ( v5 >= 0 )
    {
      v5 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v5 >= 0 && ThreadToken )
        *ThreadToken = ThreadInformation;
      else
        ZwClose(ThreadInformation);
    }
    ZwClose(TokenHandle);
  }
  return v5;
}
