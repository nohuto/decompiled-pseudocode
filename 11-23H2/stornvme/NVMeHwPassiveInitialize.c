/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C00085C0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007DCC (NVMeControllerStartFailureEventLog.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000894C (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1C0008E34 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 *     NVMePowerInitialize @ 0x1C000FE54 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 1840);
  v2 = 0;
  StorPortExtendedFunction(55LL, a1, 0LL);
  if ( *(_DWORD *)(v1 + 516) )
  {
    if ( (unsigned int)NVMeControllerInitPart2(a1) )
      goto LABEL_10;
    v4 = *(unsigned __int16 *)(a1 + 334) * (unsigned __int64)*(unsigned __int16 *)(a1 + 336);
    v5 = *(unsigned int *)(a1 + 160);
    if ( !v4 )
      v4 = 128LL;
    if ( (_DWORD)v5 && v4 >= v5 )
      LODWORD(v4) = *(_DWORD *)(a1 + 160);
    StorPortExtendedFunction(84LL, a1, (unsigned int)v4);
  }
  if ( (unsigned __int8)NVMeControllerInitPart3(a1) )
  {
    NVMePowerInitialize(a1);
    v2 = 1;
    NVMeLogEtwControllerInfo(a1);
    NVMeLogTelemetryControllerInfo(a1);
    return v2;
  }
LABEL_10:
  NVMeControllerStartFailureEventLog(a1);
  NVMeLogEtwControllerInfo(a1);
  return v2;
}
