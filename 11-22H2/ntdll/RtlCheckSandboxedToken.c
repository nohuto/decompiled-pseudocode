/*
 * XREFs of RtlCheckSandboxedToken @ 0x180088C60
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  if ( !a1 )
    a1 = -6LL;
  result = NtQueryInformationToken(a1, 47LL, &v4, 4LL, &v5);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = 1;
  }
  return result;
}
