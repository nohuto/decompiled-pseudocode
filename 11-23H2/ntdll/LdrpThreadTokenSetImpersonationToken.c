/*
 * XREFs of LdrpThreadTokenSetImpersonationToken @ 0x180077C48
 * Callers:
 *     LdrpWorkCallback @ 0x180011180 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpThreadTokenSetImpersonationToken(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v1 = NtSetInformationThread(-2LL, 5LL, &v3);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    3626LL,
    (__int64)"LdrpThreadTokenSetImpersonationToken",
    2LL,
    "Status: 0x%x\n",
    v1);
  return v1;
}
