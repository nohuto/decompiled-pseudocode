/*
 * XREFs of RtlpInitRandomExVector @ 0x18010EFF0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 */

__int64 RtlpInitRandomExVector()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int32 *v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  __int64 result; // rax
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v0 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
  if ( v0 < 0 )
    RtlRaiseStatus(v0, v1, v2);
  v3 = RtlpRandomExConstantVector;
  LODWORD(v4) = dword_18018F388 ^ ProcessInformation;
  v5 = 128LL;
  do
  {
    v4 = (2147483629 * (unsigned __int64)(unsigned int)v4 + 2147483587) % 0x7FFFFFFF;
    *v3++ = v4;
    --v5;
  }
  while ( v5 );
  result = 1LL;
  RtlpRandomExAuxVarY = (2147483629 * (unsigned __int64)(unsigned int)v4 + 2147483587) % 0x7FFFFFFF;
  return result;
}
