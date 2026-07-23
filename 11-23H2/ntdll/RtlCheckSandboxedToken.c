/*
 * XREFs of RtlCheckSandboxedToken @ 0x180089460
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlCheckSandboxedToken(HANDLE TokenHandle, PBOOLEAN IsSandboxed)
{
  NTSTATUS result; // eax
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  *IsSandboxed = 0;
  if ( !TokenHandle )
    TokenHandle = (HANDLE)-6LL;
  result = NtQueryInformationToken(TokenHandle, 0x2Fu, &TokenInformation, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( TokenInformation )
      *IsSandboxed = 1;
  }
  return result;
}
