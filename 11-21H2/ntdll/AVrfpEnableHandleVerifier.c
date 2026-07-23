/*
 * XREFs of AVrfpEnableHandleVerifier @ 0x1800E5FD4
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x1800E60B8 (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     NtSetInformationProcess @ 0x1800A43F0 (NtSetInformationProcess.c)
 */

__int64 AVrfpEnableHandleVerifier()
{
  NTSTATUS v0; // ebx
  NTSTATUS v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp+10h] BYREF
  ULONG ProcessInformation_4; // [rsp+3Ch] [rbp+14h]

  if ( !AVrfpHandleTraces
    || (ProcessInformation = 0,
        ProcessInformation_4 = AVrfpHandleTraces,
        v0 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &ProcessInformation, 8u),
        v0 < 0) )
  {
    v3 = 0;
    v1 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &v3, 4u);
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
