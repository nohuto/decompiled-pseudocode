/*
 * XREFs of LdrpThreadTokenSetImpersonationToken @ 0x1800775D8
 * Callers:
 *     LdrpWorkCallback @ 0x180011390 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpThreadTokenSetImpersonationToken(__int64 a1)
{
  unsigned __int32 v1; // ebx
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  ThreadInformation = a1;
  v1 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    3625,
    (__int64)"LdrpThreadTokenSetImpersonationToken",
    2u,
    "Status: 0x%x\n",
    v1);
  return v1;
}
