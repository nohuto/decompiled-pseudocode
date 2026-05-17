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
  int v0; // ebx
  int v1; // eax

  if ( !AVrfpHandleTraces || (v0 = NtSetInformationProcess(), v0 < 0) )
  {
    v1 = NtSetInformationProcess();
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
