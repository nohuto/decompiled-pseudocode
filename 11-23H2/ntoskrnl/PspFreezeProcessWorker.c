/*
 * XREFs of PspFreezeProcessWorker @ 0x1409B3E00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     PsCaptureExceptionPort @ 0x14076E590 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1409B62A0 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  int v3; // ecx
  void *v4; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  v3 = a1[543];
  if ( (v3 & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[110] && (v3 & 0x40000000) == 0 )
  {
    v4 = PsCaptureExceptionPort((__int64)a1);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (a1[281] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
