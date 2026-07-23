/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x18004EDF0
 * Callers:
 *     TpWorkOnBehalfSetTicket @ 0x18004EAF0 (TpWorkOnBehalfSetTicket.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 */

NTSTATUS __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *ThreadInformation)
{
  NTSTATUS result; // eax

  if ( !ThreadInformation )
    return -1073741811;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *ThreadInformation )
    return 0;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *ThreadInformation;
  return result;
}
