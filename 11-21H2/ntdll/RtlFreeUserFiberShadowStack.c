/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800ECAC0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x1800A43F0 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall RtlFreeUserFiberShadowStack(__int64 a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = a1;
  return NtSetInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessFreeFiberShadowStackAllocation,
           &ProcessInformation,
           8u);
}
