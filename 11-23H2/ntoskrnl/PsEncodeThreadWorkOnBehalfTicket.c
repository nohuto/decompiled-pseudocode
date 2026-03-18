/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x14032A008
 * Callers:
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140737EEC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtQueryInformationThread @ 0x14079F6D0 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978AA0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1232);
  a2[1] = *(_DWORD *)(a1 + 1152);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
