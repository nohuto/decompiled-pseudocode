/*
 * XREFs of ZwAlpcSetInformation @ 0x14041BF00
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x1405ED9A0 (DifZwAlpcSetInformationWrapper.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B6FC1C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B711D4 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
