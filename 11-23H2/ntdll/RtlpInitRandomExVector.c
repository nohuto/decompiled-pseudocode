/*
 * XREFs of RtlpInitRandomExVector @ 0x1800B0EF0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

__int64 RtlpInitRandomExVector()
{
  NTSTATUS v0; // eax
  __int32 *v1; // r9
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v0 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
  if ( v0 < 0 )
    RtlRaiseStatus((unsigned int)v0);
  v1 = RtlpRandomExConstantVector;
  LODWORD(v2) = dword_18019C3A8 ^ ProcessInformation;
  v3 = 128LL;
  do
  {
    v2 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
    *v1++ = v2;
    --v3;
  }
  while ( v3 );
  result = 1LL;
  RtlpRandomExAuxVarY = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
  return result;
}
